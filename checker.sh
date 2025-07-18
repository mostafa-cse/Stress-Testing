g++-14 -o bruteforces bruteforces.cpp
g++-14 -o efficient efficient.cpp
g++-14 -o gen gen.cpp

for ((i = 1; ; ++i)); do
    echo $i;
    ./gen $i > in.txt
    diff -w <(./bruteforces < in.txt) <(./efficient < in.txt) || break
done
