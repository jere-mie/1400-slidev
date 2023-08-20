---
theme: seriph
background: /codebg.jpg
class: text-center
highlighter: shiki
lineNumbers: false
transition: slide-left
css: unocss
title: COMP 1400 Lab 2 (Section 53)
---

# **COMP-1400**: Lab 2 - Section 53

**Presented by Jeremie Bornais**

---

# 0. Purpose

This lab aims to introduce the the C library `math.h` and its common built-in functions. In addition the lab introduces the concept of random number generation. This lab will help the students practice decision making in C.

# 1. General Information

- This lab contains a tutorial on working with the math.h library in C and using C to generate random numbers. Complete the tutorial with the lab instructors. The lab consists of four programming questions you must complete before the lab concludes.
- The lab consists of three programming questions that you are required to complete before the lab concludes.
- While working on the questions, you can seek instructor assistance and guidance. You are allowed to refer to the lecture notes and your personal notes and conduct internet searches for assistance. However, it is important to note that directly copying and pasting code from the internet is strictly prohibited. Please ensure you understand and implement the solutions in your own words and code.

---

# 2 Lab Tutorial

## 2.1 C Math Functions

The math.h header file in C is a standard library that provides various mathematical functions and constants.

It is typically used when mathematical operations need to be performed in C programs. Here are some commonly used functions and constants provided by math.h:

### Mathematical Constants:

- `M_PI`: Represents the value of pi (π).
- `M_E`: Represents the base of the natural logarithm (e).

---

### Trigonometric Functions:

- `sin(x)`: Calculates the sine of the angle x (in radians).
- `cos(x)`: Calculates the cosine of the angle x (in radians).
- `tan(x)`: Calculates the tangent of the angle x (in radians).
- `asin(x)`: Calculates the arcsine (inverse sine) of x, returning the result in radians.
- `acos(x)`: Calculates the arccosine (inverse cosine) of x, returning the result in radians.
- `atan(x)`: Calculates the arctangent (inverse tangent) of x, returning the result in radians.

<br/>

### Exponential and Logarithmic Functions:

- `exp(x)`: Calculates the exponential of x ($e^x$).
- `log(x)`: Calculates the natural logarithm of x ($\ln(x)$).
- `log10(x)`: Calculates the base-10 logarithm of x ($\log_{10}(x)$).
- `pow(x, y)`: Calculates the value of x raised to the power of y ($x^y$).

---

### Square Root and Absolute Value:

- `sqrt(x)`: Calculates the square root of x.
- `fabs(x)`: Calculates the absolute value of x.

<br/>

### Other Mathematical Functions:

- `ceil(x)`: Rounds x up to the nearest integer.
- `floor(x)`: Rounds x down to the nearest integer.
- `round(x)`: Rounds x to the nearest integer.
- `fmod(x, y)`: Calculates the remainder of x divided by y.

These are just a few examples of the functions and constants provided by `math.h`.

They can be used in C programs to perform a wide range of mathematical calculations.

---

### 2.1.1 Examples

Write the following examples, compile, and run the programs. Make sure to report and fix any style, syntax or logical errors.

**Example 1: Square Root Program**

```c
/*
This program calculates the square root of a given number using the sqrt () function.
*/

#include <stdio.h>
#include <math.h>

int main(){
    double number, result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    result = sqrt(number);

    printf("Square root: %.2lf\n", result);
    return 0;
}
```

---

**Example 2: Calculating the Area of a Circle**

```c
/* 
This program calculates the area of a circle using the M_PI constant from math.h. 
*/

#include <stdio.h>
#include <math.h>

int main(){
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = M_PI * pow(radius, 2);

    printf("Area of the circle: %.2lf\n", area);

    return 0;
}
```

---

**Example 3: Solving a Quadratic Equation**

```c {all} {maxHeight:'400px'}
/* 
This program solves a quadratic equation of the form ax ^2 + bx + c = 0 
using the sqrt () and pow () functions from math .h.
*/

#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant > 0){
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Root 1: %.2lf\n", root1);
        printf("Root 2: %.2lf\n", root2);
    }else if (discriminant == 0){
        root1 = -b / (2 * a);

        printf("Root: %.2lf\n", root1);
    }else{
        printf("No real roots exist.\n");
    }

    return 0;
}
```

---

## 2.2 Generating Random Number

In C, the `rand()` function is commonly used to generate random numbers. However, it is important to note that the `rand()` function does not produce truly random numbers but rather pseudo-random numbers.

Pseudo-random numbers are generated using an algorithm that appears to be random, but the sequence of numbers generated can be replicated if the same seed value is used. 

To initialize the random number generator, the `srand()` function is used. It takes an argument called the **"seed"** which is typically set to the current time using `time(0)` to ensure a different seed value each time the program runs. 

By using different seed values, you can obtain different sequences of pseudo-random numbers.

---

Random number generation is useful in various applications such as:

1. **Simulations**: Random numbers are often used to simulate real-world scenarios or model probabilistic events. For example, in game development, random numbers can be used to create unpredictable behaviors or generate procedural content.
2. **Infromation Security (Cryptography)**: Randomness is crucial in cryptographic algorithms for generating encryption keys, initialization vectors, or nonces. It ensures that the encryption process is secure and resistant to attacks.
3. **AI (Statistical Analysis)**: Random numbers are essential in statistical analysis and research. They can be used to select random samples from a larger population or simulate random variables in statistical models.
4. **Testing and Debugging**: Random inputs are often used in testing and debugging to simulate different scenarios and uncover potential issues. By generating random test cases, you can verify the robustness and correctness of a program.

Overall, random number generation is valuable in many fields where unpredictability, fairness, or statistical
representation is required.

---
layout: two-cols
---

<style>
    .col-right{
        margin-left: 32px;
    }
</style>

### 2.2.1 Examples

**Example 4: Random Number Generator**

```c
/* This program generates a random number between 1 and 100 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Initialize random seed
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    printf("Random number: %d\n", randomNumber);
    return 0;
}
```

::right::

**TO DO:**
1. Execute the above random number generator 5 times and print the output each time.
2. Comment (disable) line number 9 and repeat step 1 again.

**Discussion**
- What is the impact of not initializing a random seed as in line 9
- What are the libraries `stdlib.h` and `time.h` used for in this program?

---

# 3. Lab Questions

1. Change the random generation program from the tutorial to generate generate random real numbers between 0 and 1.

<br/>

2. Write a program that counts the number of odd and even digits in a given positive integer of maximum 4 digits. Prompt the user to enter a positive integer, and using arithmetic operations and decision making, determine and display the count of odd and even digits separately.

---

3. Write a C program that reads three real values from the user and determines if they are approximately equal. The program should compare the differences between the values and a given threshold 't'. If the absolute differences between all pairs of values are less than 't', the program should display a message indicating that the values are approximately equal. Otherwise, it should display a message indicating that the values are not approximately equal.

**Example 01**  
Enter three real values : 5.25 5.30 5.27  
Enter the threshold 't': 0.1  
The values are approximately equal .  

**Example 02**  
Enter three real values : 2.5 4.8 6.3  
Enter the threshold 't': 0.5  
The values are not approximately equal .  

---

# 4. Submission Instructions

1. For each question, submit one source file containing your C program implementation.
2. Submit the source code files to bright space; you could either Submit individual files or a single compressed file.
3. Ensure that your submission is completed before the end of the lab.
4. Ask the instructors to review your files/solution before you submit your answer to bright space

---

# 5. Evaluation and Feedback

- As part of the lab, you will be required to showcase your code to the instructors.
- The instructors will thoroughly test and evaluate your code during the lab session, and a grade will be assigned accordingly.
- It is expected that the instructors may inquire about the topics covered in the lab and seek explanations regarding your code.
- Your program will be assessed based on factors such as accuracy, code quality, adherence to guidelines, and efficiency.

---

## Evaluation Scheme:

| Item                          | Percentage |
|-------------------------------|------------|
| Attendance and Participation  | 25%        |
| Code Quality and Style        | 10%        |
| Code Syntax                   | 20%        |
| Code Correctness              | 20%        |
| Lab Discussion                | 25%        |
| Total                         | 100%       |
