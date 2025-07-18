#!/usr/bin/env
set -euo pipefail

# Compile
g++ -O2 -o bruteforces bruteforces.cpp
g++ -O2 -o efficient   efficient.cpp
g++ -O2 -o gen         gen.cpp

# Test loop
i=1
while true; do
    ./gen "$i" > in.txt

    # Capture outputs
    out1=$(./bruteforces < in.txt)
    out2=$(./efficient   < in.txt)

    # Compare
    if diff -w <(printf '%s\n' "$out1") <(printf '%s\n' "$out2") > /dev/null; then
        echo "Passed: $i"
    else
        echo
        echo "Fail: $i"
        echo "Input was:"
        cat in.txt
        echo
        echo "Bruteforces output:"
        echo "$out1"
        echo
        echo "Efficient output:"
        echo "$out2"
        exit 1
    fi

    ((i++))
done
