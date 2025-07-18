# Stress Testing for Competitive Programming

This repository contains scripts for **stress testing competitive programming solutions**. The goal is to find hidden bugs and edge cases by generating random test inputs, running multiple solutions, and comparing outputs.

---

## ✅ Features

* **Test Case Generator**: Create random inputs within given constraints.
* **Multiple Solutions Comparison**: Compare outputs from a **brute-force (correct)** and an **optimized solution**.
* **Automated Loop**: Continuously run tests until a mismatch is found.
* **Easy Setup**: Simple to use with C++ solutions, can be adapted for other languages.

---

## 📂 Repository Structure

```
Stress-Testing/
│
├── bruteforces.cpp     # Brute-force or correct solution which you create a naive or always corret solution
├── efficient.cpp       # Optimized or suspected buggy solution which you paste your optimise code for determine your test where your code is Wrong
├── gen.cpp             # Generates random test cases
├── checker.sh          # Main stress testing script
├── in.txt              # Wrong answer Test Case 
└── README.md         # Documentation
```

---

## ⚙️ Prerequisites

* **C++ Compiler** (g++)
* Basic knowledge of compiling and running C++ programs.
* Basic Knoladge of running bash file

---

## 🚀 How to Setup and Run

### 1. Clone the Repository and goto this directory

```bash
git clone https://github.com/mostafa-cse/Stress-Testing.git
cd Stress-Testing
```

### 2. Prepare Your Files

* **gen.cpp** → Generates test cases.
* **bruteforces.cpp** → Verified correct solution.
* **efficient.cpp** → Optimized or solution to test.

### 3: Run the bash file in this directory using the terminal

```bash
bash checker.sh
```

When a difference is found, the loop stops and shows the failing case.

---

## 🛠 How It Works

1. Generate random input.
2. Run **bruteforces solution** and **efficient solution** on the same input.
3. Compare outputs.
4. Stop when mismatch occurs → investigate bug.

---

## ✅ Example Output

```
Test #1 : Accepted!
Test #2 : Accepted!
Test #3 : Accepted!
Test #4 : Accepted!
Test #5 : Accepted!
Test #6 : Accepted!
Test #7 : Mismatch found!
Input was:
94414 46193

Bruteforces output:
4361265902

Efficient output:
66298606
```

---

## 🔗 Contribution

Feel free to fork this repo and improve it (e.g.adding better generators).

---
## My Sublime Setup Screenshot :
![Uploading image.png…]()


