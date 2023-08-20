---
theme: seriph
background: /dewhurst.jpg
class: text-center
highlighter: shiki
lineNumbers: false
transition: slide-left
css: unocss
title: COMP 1400 Lab 3 (Section 53)
style: |

---

# **COMP-1400**: Lab 3 - Section 53

**Presented by Jeremie Bornais**

---
class: kobtibg
---

<style>
    .kobtibg {
        background: linear-gradient(rgba(0, 0, 0, 0.7), rgba(0, 0, 0, 0.7)), 
        url('/kobman.gif') center / cover;
    }
</style>

# 0. Purpose

This lab aims to strengthen your programming skills by practicing the art of breaking down large programming questions into small, manageable parts or features. You will need this for the course assignment. In addition, this lab will provide an opportunity to reinforce your understanding and application of input validation, decision-making, and loop structures in the C programming language.

## Today's Schedule

| Time        | Activity                         |
|-------------|----------------------------------|
| 10:00-10:50 | Lab Introduction                 |
| 10:50-12:20 | Work on Problem (90 minutes)     |
| 12:20-12:50 | Grading (no working on problem!) |

---
class: jovicbg
---

<style>
    li {
        font-size: 16px;
    }
    .jovicbg {
        background: linear-gradient(rgba(0, 0, 0, 0.8), rgba(0, 0, 0, 0.8)), 
        url('/jovic.png') center / cover;
    }
</style>

# 1. Lab Requirements

- The lab consists of one programming question you must complete before the lab concludes.
- You have 90 minutes to complete the programming question. The last 30 minutes of the lab is for the TAs to evaluate and discuss your answers.
- You MUST submit a valid source file to bright space (screenshots or images are not accepted)
- You are NOT ALLOWED to change your code during the last 30 minutes.
- Maker sure to continuously show your progress to the lab TA. The program is divided into five features; when you complete a feature, demonstrate it to the TAs.
- While working on the questions, you can seek instructor assistance and guidance. You are allowed to refer to the lecture notes and your personal notes and conduct internet searches for assistance. However, it is important to note that directly copying and pasting code from the internet is strictly
prohibited. Please ensure you understand and implement the solutions in your own words and code.

**NOTE**: Failing to adhere to the rules and instructions mentioned above may result in the invalidation of your lab submission and could lead to receiving a zero scores. It is crucial to follow the guidelines and complete the lab requirements within the specified time frame while continuously demonstrating your progress to the lab TAs. If you have any questions or need clarification, do not hesitate to seek assistance from the TAs.

---

# 2. Lab Questions

1.Write a C program for a number guessing game. The program should generate a random target number within a specified range. Use the provided code snippet in Listing 1 as a starting point.

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int min_range, max_range, target_number;

    // Prompt the user to enter the range limits
    printf("Enter the range limits (minimum and maximum ): ");
    scanf("%d %d", &min_range, &max_range);

    // Generate a random target number within the specified range
    srand(time(0));
    target_number = (rand() % (max_range - min_range + 1)) + min_range;
    printf("random target number %d\n", target_number);

    return 0;
}
```

**Listing 1: Generate Random Number within a Range**

---

(a) (10 points) The program should prompt users to enter the minimum and maximum range limits.  
The program should validate that the input range is correct.

```
Example:
    Enter the range limits (minimum and maximum): 50 30
    Invalid input.
    Enter the range limits (minimum and maximum): 30 50
    Enter your guess: 40
```

(b) (10 points) Modify the program rather than printing the generated random number on the screen, it should ask the user to guess the generated number.   Ensure the program give the appropriate feedback to the user.

```
Example 01:
    Enter the range limits (minimum and maximum): 1 100
    Guess the number between 1 and 100
    Enter your guess: 50
    Congratulations! You guessed the number 50 correctly
Example 02:
    Enter the range limits (minimum and maximum): 20 80
    Guess the number between 20 and 80
    Enter your guess: 22
    Sorry! incorrect guess, the generated number is 73
```

---

\(c) (15 points) Enhance the program to give a hint to the user when the user’s guess is incorrect.

```
Enter the range limits (minimum and maximum): 1 100
Guess the number between 1 and 100
Enter your guess: 50
Try a higher number.
Enter your guess: 75
Try a lower number.
Enter your guess: 60
Try a higher number.
Enter your guess: 65
Congratulations! You guessed the number 65 correctly.
```

(d) (15 points) Extend the program to display the number of attempts the user needed to guess the number correctly.

```
Enter the range limits (minimum and maximum): 10 20
Guess the number between 10 and 20
Enter your guess: 5
Try a higher number.
Enter your guess: 25
Try a lower number.
Enter your guess: 15
Congratulations! You guessed the number 15 correctly in 3 attempts.
```

---

(e) (10 points) Modify the program to terminate immediately if the user made 10 incorrect guesses

```
Enter the range limits (minimum and maximum): 10 20
Guess the number between 10 and 20
Enter your guess: 5
Try a higher number.
Enter your guess: 15
Try a lower number.
Enter your guess: 12
Try a lower number.
Enter your guess: 11
Try a higher number.
Enter your guess: 14
Try a lower number.
Enter your guess: 13
Try a higher number.
Enter your guess: 16
Try a lower number.
Enter your guess: 17
Try a lower number.
Enter your guess: 18
Try a lower number.
Enter your guess: 19
Try a lower number.
Sorry, you have reached the maximum number of guesses.
The target number was 20.
```

---

# 3. Submission Instructions

1. For each question, submit one source file containing your C program implementation.
2. Submit the source code files to bright space; you could either Submit individual files or a single compressed file.
3. Ensure that your submission is completed before the end of the lab.
4. Ask the instructors to review your files/solution before you submit your answer to bright space

---

# 4. Evaluation and Feedback

- As part of the lab, you will be required to showcase your code to the instructors.
- The instructors will thoroughly test and evaluate your code during the lab session, and a grade will be assigned accordingly.
- It is expected that the instructors may inquire about the topics covered in the lab and seek explanations regarding your code.
- Your program will be assessed based on factors such as accuracy, code quality, adherence to guidelines, and efficiency.

---

## Evaluation Scheme:

| Item                          | Percentage |
|-------------------------------|------------|
| Attendance and Participation  | 5%         |
| Code Quality and Style        | 5%         |
| Code Syntax                   | 5%         |
| Code Correctness              | 60%        |
| Lab Discussion                | 25%        |
| Total                         | 100%       |
