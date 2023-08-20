---
theme: seriph
background: /img/texas.png
class: text-center
highlighter: shiki
lineNumbers: false
transition: slide-left
css: unocss
title: COMP 1400 Lab 5 (Section 53)
---

<style>
@import '/backgrounds.css';
</style>

# **COMP-1400**: Lab 5 - Section 53

**Presented by Jeremie Bornais**

*This is our last lab* 😭

---

<style>
    li {
        font-size: 16px;
        line-height: 1.35rem !important;
    }
    p {
        font-size: 16px;
    }
</style>

# 1. Lab Requirements

- You have **90 minutes** to complete the lab. The last **30 minutes** of the lab is for the TAs to evaluate
and discuss your answers.
- You **MUST** submit a valid source file to bright space (screenshots or images are not accepted)
- You are **NOT ALLOWED** to change your code during the **last 30 minutes**.
- Maker sure to continuously show your progress to the lab TA.
- You are only allowed to use your personal notes and lecture notes/slides.
- The **TAs cannot** help fix your code or give you hints during the lab session.
- You may not ask other students for help as well.
- The objective is to independently tackle the programming questions and reinforce your understanding of the concepts covered in class.
- Remember to rely solely on your personal notes and lecture note
- Any external sources **are not allowed** (e.g. internet search, external references).
- Work through the exercises using the knowledge and materials provided during the lab session.

**NOTE**: Failing to adhere to the rules and instructions mentioned above may result in the invalidation of your lab submission and could lead to receiving a **zero scores**. Following the guidelines and completing the lab requirements within the specified time frame is crucial while continuously demonstrating your progress to the lab TAs. If you have any questions or need clarification, do not hesitate to seek assistance from the TAs.

---

# 2. Lab Questions

Write a C program that performs the following tasks:

1. Find the Cheapest Item: Implement a function called findCheapestItem that allows the user to enter an item category (represented by a character) and the price of the item (represented by a float). The function should determine the item category and price of the cheapest item entered.

- Prompt the user to enter item categories and their prices until they enter '0' as the item category.
- Use the findCheapestItem function to find the category and price of the cheapest item.
- Display the category and price of the cheapest item to the user.

<br/>

2. Sorting Three Variables: Implement a function called sortVariables that takes three integer parameters and sorts them in ascending order. The function should modify the input variables in-place.

- Prompt the user to enter three integer values.
- Use the sortVariables function to sort the three input values.
- Display the sorted values to the user.

<br/>

3. Calculate the Average: Implement a function called calculateAverage that takes a positive integer n as a parameter. The function should recursively calculate and return the average of all positive numbers less than n.

- In the main function, prompt the user to enter a positive integer n.
- Use the calculateAverage function to calculate the average of all positive numbers less than n using recursion.
- Display the calculated average to the user.

---

Your program should demonstrate a good understanding of decision-making, loops, functions, call-by-value, call-by-reference, and casting.

Finally, use the following main function to test and demonstrate your implementation

```c
int main() {
   char category;
   float price;
   // findCheapestItem();
   printf("Cheapest item:\n");
   printf("Category: %c\n", category);
   printf("Price: %.2f\n", price);
   int a, b, c;
   printf("Enter three integers: ");
   scanf("%d %d %d", &a, &b, &c);
   // sortVariables();
   printf("Sorted values: %d %d %d\n", a, b, c);
   int number;
   printf("Enter a positive integer: ");
   scanf("%d", &number);
   // float average = calculateAverage();
   printf("Average of all positive numbers less than %d: %.2 f\n", number, average);
   return 0;
}
```

---

Sample Input/Output:

```
Enter the item category (or '0' to stop): A
Enter the price of the item: 10.5
Enter the item category (or '0' to stop): B
Enter the price of the item: 5.2
Enter the item category (or '0' to stop): C
Enter the price of the item: 8.7
Enter the item category (or '0' to stop): 0
Cheapest item:
Category: B
Price: 5.20

Enter three integers: 15 9 23
Sorted values: 9 15 23

Enter a positive integer: 7
Average of all positive numbers less than 7: 3.00
```

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

## Evaluation Scheme

| Item                          | Percentage |
|-------------------------------|------------|
| Attendance and Participation  | 10%        |
| Code Correctness              | 80%        |
| Lab Discussion                | 10%        |
| Total                         | 100%       |
