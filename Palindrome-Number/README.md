# Palindrome Number

**Difficulty:** Easy

## Problem
Given an integer x, determine whether it reads the same forwards and backwards (a palindrome), without converting it to a string.

## Example
Input: x = 121
Output: true

Input: x = -121
Output: false
Explanation: Reading right to left, it becomes 121-, which isn't the same as left to right.

Input: x = 10
Output: false

## Constraints
- -2^31 <= x <= 2^31 - 1

## Approach
Reverse half of the number mathematically and compare it to the remaining half, avoiding string conversion.

🔗 [Problem Link](https://leetcode.com/problems/palindrome-number/)