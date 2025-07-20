# 🍬 Pinata Candy CLI App

## About the Project

This is a simple command-line application written in **C++**, designed to calculate the **maximum number of candies** you can get by bursting a sequence of pinatas in the best possible order.

The program receives an **array of numbers as input**, each representing the value of a pinata, and outputs the **maximum candies** you can earn using dynamic programming.

---

## Description

Welcome to **Pinata Candy CLI App**!  
In this exciting tool, you're given a sequence of pinatas, each with a candy value. Your goal is to smash them in the optimal order to **collect the maximum number of candies possible**!

---

## Controls (CLI Input)

- 📥 Input:  
  - Number of pinatas (int)  
  - Sequence of space-separated integers representing pinatas

- 📤 Output:  
  - Maximum number of candies you can get

---

## How to Run

```bash
g++ -std=c++11 -o pinata Pinata.cpp
./pinata
```

Example:
```plaintext
Enter the number of pinatas: 4
Enter pinatas values separated by spaces: 3 1 5 8
Max candies you can get: 167
```

---

## 🧮 Time Complexity (Big O)

This solution uses **top-down dynamic programming** with memoization.

- Total subproblems: `O(n^2)`
- Each subproblem iterates over a range → `O(n)`
- Therefore, overall time complexity: **O(n³)**

> Where `n` is the number of pinatas.

Although cubic time may seem high, it performs efficiently for moderate input sizes (`n <= 200`) due to memoization and recursion pruning.

---
