# C Programs

Welcome to the C Programs repository! This collection includes various C programs for different tasks.

## Programs

### Task 1: Swaps two numbers without using a temporary variable
   - **File:** `swap_numbers.c`
   - **Description:**
     This program swaps two numbers without using a temporary variable. It takes two integer inputs, performs the swap, and displays the updated values.

### Task 2: Calculate Years, Weeks, and Remaining Days
   - **File:** `calculate_time.c`
   - **Description:**
     This program calculates the number of years, weeks, and remaining days for a given total number of days. It provides a breakdown of the time in a more human-readable format.

### Task 3: Evaluate a Polynomial
   - **File:** `polynomial_evaluation.c`
   - **Description:**
     This program evaluates a polynomial of a specified degree with user-provided coefficients for a given value of x. It computes and displays the result of the polynomial expression.

### Task 4: Determine the middle value among three distinct variables
   - **File:** `middle_value.c`
   - **Description:**
     This program takes three distinct integer inputs (x, y, z) and determines the middle value. It prints 1 if x is the middle value, 2 if y is the middle value, and 3 if z is the middle value.

### Task 5: Check the strength of a password
   - **File:** `password_strength.c`
   - **Description:**
     This program checks the strength of a password based on specific criteria. It verifies the presence of at least one lowercase character, one uppercase character, one special character (!@#$%^&*()-+), a minimum length of 8 characters, and at least one digit.

### Task 6: Calculate if a firm can finish a project on time
   - **File:** `project_completion.c`
   - **Description:**
     This program calculates whether a firm can finish a project on time. It takes the total number of hours needed, the number of days, and the number of workers as input. The program considers training days, normal working hours, and overtime to determine if the project can be completed on time.

### Task 7: Calculate the area of square or circle
   - **File:** `area_calculation.c`
   - **Description:**
     This program calculates the area of a square or circle based on the user's input. It prompts the user to enter the shape ('S' for Square or 'C' for Circle) and the size, and then computes and displays the corresponding area.
  
### Task 8: Print elements with frequency more than one appearance
   - **File:** `frequency_elements_count.c`
   - **Description:**
     This program takes a sorted array with duplicate elements and prints elements with their frequency when the frequency is more than one appearance.

### Task 9: Justify the sentence according to the screen length

   - **File:** `justify_sentence.c`
   - **Description:**
     This program justifies a sentence according to the specified screen length by replacing spaces with stars. It takes a sentence and the screen length as input.
     
### Task 10: Get values from the user and display a 3x3 matrix 
   - **File:** `matrix_display.c`
   - **Description:**
     This program gets values from the user and stores them in a 3x3 matrix. It then displays the matrix.

### Task 11: Write a program to generate the output
   - **File:** `generate_output.c`
   - **Description:**
     This program takes input strings in a specific format and generates the corresponding output by repeating characters based on the given numeric values.

### Task 12: Print the pattern without using arrays

   - **File:** `print_pattern.c`
   - **Description:**
     This program prints a specific pattern without using arrays. It produces a triangular pattern of numbers.

### Task 13: Increment Large Integer
   - **File:** `increment_large_integer.c`
   - **Description:**
     Increment a large integer represented as an array of digits by one and return the resulting array.
   - **Sample Output:**
     ```plaintext
     Example 1:
     Input: [1, 2, 3]
     Output: [1, 2, 4]

     Example 2:
     Input: [9]
     Output: [1, 0]
     ```

### Task 14: Jump Game
   - **File:** `jump_game.c`
   - **Description:**
     Determine if you can reach the last index of an array based on the maximum jump length at each position.
   - **Sample Output:**
     ```plaintext
     Example 1:
     Input: [2, 3, 1, 1, 4]
     Output: true

     Example 2:
     Input: [3, 2, 1, 0, 4]
     Output: false
     ```

### Task 15: Maximum Subarray Sum
   - **File:** `maximum_subarray_sum.c`
   - **Description:**
     Find the subarray with the largest sum in an integer array.
   - **Sample Output:**
     ```plaintext
     Example 1:
     Input: [-2, 1, -3, 4, -1, 2, 1, -5, 4]
     Output: 6

     Example 2:
     Input: [1]
     Output: 1

     Example 3:
     Input: [5, 4, -1, 7, 8]
     Output: 23
     ```

### Task 16: Check Anagram

- **File:** `checkanagram.c`
- **Description:**
  This program checks if two input strings are anagrams. It compares the characters in both strings and determines if they contain the same characters with the same frequencies.

### Task 17: Longest Common Prefix

- **File:** `longest_common_prefix.c`
- **Description:**
  This program finds the longest common prefix among an array of strings. It compares characters at the same position in all strings and determines the common prefix.

### Task 18: Phone Number Letter Combinations

- **File:** `phone_number.c`
- **Description:**
  This program generates all possible letter combinations that can be formed by entering digits on a phone keypad. It uses backtracking to explore all combinations.


### Task 19: Find Duplicates in an Array

- **File:** `Duplicates in an Array.c`
- **Description:**
  This program finds and prints duplicate elements in an array. It uses an array to count the occurrences of each element and identifies duplicates.

### Task 20: Swapping of Two Numbers

#### a) Call By Value

- **File:** `Swapping of Two Numbers.c`
- **Description:**
  This program demonstrates swapping of two numbers using the call-by-value method. It defines a function `swapByValue` that exchanges the values of two variables.

#### b) Call By Reference

- **File:** `Swapping of Two Numbers.c`
- **Description:**
  This program demonstrates swapping of two numbers using the call-by-reference method. It defines a function `swapByReference` that exchanges the values of two variables using pointers.

### Task 21: Union of Two Sorted Arrays

- **File:** `Union of Two Sorted Arrays.c`
- **Description:**
  This program finds and prints the union of two sorted arrays. It compares elements from both arrays and prints them in sorted order, avoiding duplicate elements.

### Task 22: Last Occurrences

- **File:** `last_occurrences.c`
- **Description:**
  This program finds and prints the first and last occurrences of a given element in a sorted array.

### Task 23: N Positive Integer

- **File:** `positive_integer_sum.c`
- **Description:**
  This program checks if there exists a pair of elements in an array whose sum is equal to a given target sum.

### Task 24: Second Largest Without Sorting

- **File:** `second_largest_no_sorting.c`
- **Description:**
  This program finds and prints the second-largest distinct element in an array without sorting the array.

Feel free to explore each program's source code to understand its functionality and purpose.

## How to Run

To compile and run the C programs, follow these general instructions:

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/Tamilselvan6/c_programming.git

2. **Navigate to the Program's Directory:**
   ```bash
   cd c_programming

3. **Compile and Run:**
   ```bash
   gcc swap_numbers.c -o swap_numbers
   ./swap_numbers

## Contributors

- Tamilselvan V

Feel free to contribute to this repository by adding more C programs or improving existing ones. If you encounter any issues or have suggestions, please open an issue or submit a pull request.
Happy coding!

