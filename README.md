# 🍬 Pinata Candy CLI App

## About the Project

This is a simple command-line application written in **C++**, designed to calculate the **maximum number of candies** you can get by bursting a sequence of pinatas in the best possible order.

The program receives an **array of numbers as input**, each representing the value of a pinata, and outputs the **maximum candies** you can earn using dynamic programming.

---

## Description

Welcome to **Pinata Candy CLI App**!  
In this exciting tool, you're given a sequence of pinatas, each with a candy value. Your goal is to smash them in the optimal order to **collect the maximum number of candies possible**!

---

## Problem Objective

🎯 Smash pinatas in an optimal order to collect the most candies.

🍭 When you smash pinata `i`, you get:  
`left * current * right` candies.  
Where:
- `left` is the value of the pinata on the left (`1` if out of bounds),
- `right` is the value on the right (`1` if out of bounds).

🧠 Uses memoization (DP) to ensure optimal performance.

---

## Controls (CLI Input)

- 📥 Input:  
  - Number of pinatas (int)  
  - Sequence of space-separated integers representing pinatas

- 📤 Output:  
  - Maximum number of candies you can get

---

## Example

```plaintext
Enter the number of pinatas: 4  
Enter pinatas values separated by spaces: 3 1 5 8  
🎉 Max candies you can get: 167 🎉
# PinataGame
