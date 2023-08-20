---
theme: seriph
background: /img/hibamid.gif
class: text-center
highlighter: shiki
lineNumbers: false
transition: slide-left
css: unocss
title: COMP 1400 Lab 4 (Section 53)
---

<style>
@import '/backgrounds.css';
</style>

# **COMP-1400**: Lab 4 - Section 53

**Presented by Jeremie Bornais**

---
class: kobti
---

# 0. Purpose

This lab aims to strengthen your programming skills by completing simple programming questions independently without using external sources. **You are only allowed to use your personal notes and lecture notes/slides. You may ask the TAs for hints, but they will not fix your code.**

## Today's Schedule

| Time        | Activity                         |
|-------------|----------------------------------|
| 10:00-10:50 | Lab Introduction                 |
| 10:50-12:20 | Work on Problem (90 minutes)     |
| 12:20-12:50 | Grading (no working on problem!) |

---
class: zain
---

<style>
    li {
        font-size: 16px;
    }
</style>

# 1. Lab Requirements

- The lab consists of four small programming questions you must complete before the lab concludes.
- You have 90 minutes to complete the programming question. The last 30 minutes of the lab is for the TAs to evaluate and discuss your answers.
- You MUST submit a valid source file to bright space (screenshots or images are not accepted)
- You are NOT ALLOWED to change your code during the last 30 minutes.
- Maker sure to continuously show your progress to the lab TA.
- While working on the questions, you can seek instructor assistance and guidance. You are allowed to refer to the lecture notes and your personal notes. **YOU ARE NOT ALLOWED CONDUCT INTERNET SEARCHES FOR ASSISTANCE. YOU MAY ASK THE TAs FOR HELP**


**NOTE**: Failing to adhere to the rules and instructions mentioned above may result in the invalidation of your lab submission and could lead to receiving a zero scores. It is crucial to follow the guidelines and complete the lab requirements within the specified time frame while continuously demonstrating your progress to the lab TAs. If you have any questions or need clarification, do not hesitate to seek assistance from the TAs.

---
class: monke
---
# 2. Lab Questions

Each question is worth 20 points and requires you to implement a function and a main function/program to test this function. The use of functions is mandatory. Failing to use a function might result in a zero score for the question.

## 1. (20 points) 

Write a C program to calculate the digit sum of a positive integer using an iterative approach. The digit sum of a number is the sum of its individual digits. If the sum of the digits is greater than nine, the process is repeated until a single-digit sum is obtained. For example, the sum of the digits for
786 is 7+8+6=21, and the sum of the digits for 21 is 3 so the digit sum of 786 is 3.

Implement a function `int calculateDigitSum(int number)` that takes a positive integer number as input and calculates the digit sum using an iterative approach. The function should return the singledigit sum.

Your program should prompt the user to enter a positive integer, call the `calculateDigitSum` function to calculate the digit sum iteratively and display the result.

---

## Question 1 Sample Output

<br/>

```
Example 1
Enter a positive integer: 152
The digit sum of 152 is 8.

Example 2
Enter a positive integer: 12345
The digit sum of 12345 is 6.

Example 3
Enter a positive integer: 7
The digit sum of 7 is 7
```

---

## 2. (40 points over 2 sub-questions)

Write a C program that calculates the PFactorial of a positive integer n using the PFact function. The PFactorial, denoted as `PFact(n)`, is the product of all positive prime integers less than or equal to n, where n is greater than or equal to 2.

Implement the following functions:

### 2-1. (20 points) `int isPrime(int number)`:

This function takes an integer number as input and returns 1 if the number is prime, and 0 otherwise.

### 2-2. (20 points) `int calculatePFact(int n)`: 

This function takes a positive integer n as input and calculates the PFactorial using an iterative approach. It iterates from 2 to n, checks if each number is prime using the isPrime function, and multiplies the prime numbers together to calculate the PFactorial. The function returns the calculated PFactorial.

Your program should prompt the user to enter a positive integer n (greater than or equal to 2), call the calculatePFact function to calculate the PFactorial, and display the result.

---

## Question 2 Sample Output

<br/>

```
Example 1
Enter a positive integer (>= 2): 10
PFact (10) = 210

Example 2
Enter a positive integer (>= 2): 15
PFact (15) = 30030

Example 3
Enter a positive integer (>= 2): 5
PFact (5) = 30
```

**NOTE:** In the lab PDF, Example 3's output says "5", but the output is actually 30. `(2*3*5 = 30)`

---

## 3. (20 points) 

Write a C program that takes three integers as input and determines if any two of the numbers are divisible by the third one. Implement a function `int areTwoDivisible(int num1, int num2, int num3)` that checks if any two of the numbers are divisible by the third one. The function should return 1 if the condition is met and 0 otherwise.

Your program should prompt the user to enter three integers, call the areTwoDivisible function to check if any two numbers are divisible by the third one, and display the result accordingly.

```
Example 01
Enter three numbers: 10 5 20
Any two of the numbers are divisible by the third one.

Example 02
Enter three numbers: 4 3 9
No two numbers are divisible by the third one.

Example 03
Enter three numbers: 2 8 12
Any two of the numbers are divisible by the third one.
```

---
class: bones
---

# 3. Submission Instructions

1. For each question, submit one source file containing your C program implementation.
2. Submit the source code files to bright space; you could either Submit individual files or a single compressed file.
3. Ensure that your submission is completed before the end of the lab.
4. Ask the instructors to review your files/solution before you submit your answer to bright space

<br/>

# 4. Evaluation and Feedback

- As part of the lab, you will be required to showcase your code to the instructors.
- The instructors will thoroughly test and evaluate your code during the lab session, and a grade will be assigned accordingly.
- It is expected that the instructors may inquire about the topics covered in the lab and seek explanations regarding your code.
- Your program will be assessed based on factors such as accuracy, code quality, adherence to guidelines, and efficiency.

---
class: akshat
---

## Evaluation Scheme

| Item                          | Percentage |
|-------------------------------|------------|
| Attendance and Participation  | 10%        |
| Code Correctness              | 80%        |
| Lab Discussion                | 10%        |
| Total                         | 100%       |
