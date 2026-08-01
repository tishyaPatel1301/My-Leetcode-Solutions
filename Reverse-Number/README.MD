# Reverse Integer

**Difficulty:** Medium

## Problem
Given a signed 32-bit integer x, reverse its digits. If reversing causes the value to go outside the signed 32-bit integer range, return 0.

## Example
Input: x = 123
Output: 321

Input: x = -123
Output: -321

Input: x = 120
Output: 21

## Constraints
- -2^31 <= x <= 2^31 - 1

## Approach
Pop digits from the end using modulo, push them into a result variable, and check for overflow at each step before it happens.

🔗 [Problem Link](https://leetcode.com/problems/reverse-integer/)