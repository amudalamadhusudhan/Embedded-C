# C

**DAY2:Data types and operators**
1. Develop a C program to perform operations (+,*,-, / and %) on two whole numbers. Identify suitable data types to represent the numbers and resultant values
2. Write a program to demonstrate bitwise operators
3. Develop a C program to add two operands and store the result in one of the operand using addition assignment operator.( a+=b is same as a=a+b)
4. Write a C program to find the maximum of 2 numbers using Conditional operator.
5. A C program contains the following declarations and initial assignments: 

int  i= 8, j = 5; 
float  x = 0.005,  y = 0.01; 
char c = ‘c’, d = ‘d’; 
Determine the value of each of the following expressions. 
(3*i*j)%(2*d) 
(i*j)%(c+2*d) / (x*y) 
5 * (i + j) > 'c' 
2*x+ (y== 0) 
(x > y) && (i > 0) || (j < 5) 
6.  Write a program to find the area and the perimeter of a circle. 
    Take radius “r” as input.
7. Develop a C program to calculate simple interest using the formula I=PTR/100. 

**Day3 Assignments**
1. Develop a C program which adds all numbers from 1 to N, except those which are divisible by 5. Implement this using for loop and continue statement. 
2. Develop a C program to find sum of all odd numbers upto N using while loop. 
3. Write a program to find whether given number is palindrome or not. 
4. Write a program in C to display the pattern like right angle triangle as shown pattern below.

1
12
123
1234

5. Write a C program to display the pattern like right angle triangle as shown pattern below.

1
22
333
4444

6. Write a C program to display the pattern like right angle triangle as shown pattern below.
1
2 3
4 5 6
7 8 9 10


**Day4 Assignments**
Functions
1. Write a swap function to perform the swap operation.
2. Write a program to find the GCD of two numbers.
Take two integers as input, find the GCD and return it to main.
3. Write a program to print the prime Fibonacci numbers in a given range.
4. Take the range of numbers as input and print all the prime Fibonacci numbers as output. Use Functions. Try with non-recursive and recursive functions.

5. Write a program to reverse an integer number.
Use recursion.

6. Write a recursive function to find factorial of a number. 

7. Write a function to swap contents of two variables using functions 

**Day5 Assignments**
 Arrays
1. Write a C program to find the sum of all array elements.
2.  Write a C program to count the frequency of each number in a 1-D array.
All the elements in the array are integers.
3. Write a C Program to display one dimensional array elements with addresses
4. Write a C Program to Find Greatest Element in Array in one dimensional array 
5. Write a C Program to Reversing the 1-D Array Elements 
6. Write a C Program to sort elements in 1-D Array
7. Write a program to remove the duplicate elements in an integer array.
8.  Write a C Program to display two-dimensional array elements with addresses
9. Write a C program to copy the elements of one 2-D array to another 2-D array.
10.  Write a C program to sum two 2-D matrices
11.  Write a C program to print the transpose and inverse matrices of a given matrix.
12. Write a C Program to display three-dimensional array elements with addresses


**Day6 Assignments**
 Strings
1. Write a C program to perform the following operations on two strings using intrinsic functions.
Concatenate two strings
Find the length of each string
Compare two strings
Copy string
Find whether string1 is the subset of the second string or not(strstr)
2. Write a C program to perform the following operations on two strings without using string library functions.
Concatenate two strings
Find the length of each string
Compare two strings
Copy string
Reverse the string

3. Write a program to convert lower case string to upper case string and vice versa. 
4. Write a program to print out all rotations of a string typed in. For eg:if the input is “Space”, the output should be: space paces acesp cespa espac.
5. Write a C Program to Count the Number of Vowels, Consonants, digits and remaining characters in given string
6. Write a C program to remove characters in a given string except alphabets

 **DAY7**
 Pointers
1. Write a C program that declares and initializes (to any value you like) a char, an int, a double and a float. Your program should then print the address of, and value stored in, each of the variables. 
Use the format string "%u" [%p in hex] to print the addresses as unsigned integers. 
Hint: You can use the character “&” to find addresses.

2. Write a C program to declare an integer and an integer pointer to it. Initialize the integer variable. Print the value of the int variable using pointer variable.
Hint: You can use dereferencing operator *.

**Day8 Assignments**
 Pointers
1. Write a program to perform the swap operation 
Write a swap function and use call by reference.
2.  Write a C program to read through an array of any type using pointers. Copy the elements of the first array to second array using pointers.
Hint: a[i] = *(a+i)
3. Write a program in C to store n elements(read from standard input) in an array and print the elements using pointer
4. A C program contains the following declaration 
int x[8]= {10,20,30,40,50,60,70,80}; 
What is the value of x? (and understand)
What is the value of (x+2)? (and understand)
What is the value of *x? 
What is the value of (*x+2)? 
What is the value of *(x+2)?. 

Pointers and strings 

5. C program to search element in array (1-D)using pointers
6. Write a C program to print all elements of two dimensional array using pointers.
7. Implement string library functions strlen, strcpy, strcat, strcmp with same return values and all error handling features using pointers. 
8. Write a C program to find reverse of a string using pointers.
9. Write a program in C to count the number of vowels and consonants in a string using a pointer.



**DAY9 PART1**

1.  Lower case to Uppercase: Convert a string from lower case to uppercase using pointers. Write a separate function to do the conversion. Do not use intrinsic functions. 
2. Uppercase to Lower case: Convert a string from upper case to lowercase using pointers. Write a separate function to do the conversion. Do not use intrinsic functions. 
3. Write a C program to demonstrate double pointer.
(Practice all double pointer programs covered in class ppt)

4. Write a program to read n number of strings using two-dimensional character array, sort them and display the sorted list of strings on the screen. (use strcmp and strcpy library functions) 

5. Write a C program with a function any (s1, s2). This function returns the first location (index of location) in the string s1 which matches with any string in s2 otherwise return NULL. Do not use string library functions (strstr).


**Day9 Part2**
1. A C program contains the following declaration 

float table[2][3] = { { 1.1,1.2,1.3},{2.1,2.2,2.3}}; 
a) What is the meaning of a table? 
b) What is the meaning of (table+1)? 
c) What is the meaning of *(table+1)? 
d) What is the meaning of (*(table+1)+1)? 
e) What is the meaning of (*(table)+1)? 
f) What is the value of *(*(table+1) +1)? 
g) What is the value of *(*(table)+1)? 
h) What is the value of *(*(table+1)? 
i) What is the value of *(*(table) + 1)+1? 

2. A C program contains the following declaration 

char *color[6] = {“red”, “green”, “blue”, “white”, “black”, “yellow”}; 
a. What is the meaning of color? 
b. What is the meaning of (color+2); 
c. What is the value of *color? 
d. What is the value of *(color+2)? 
e. How do color[5] and *(color + 5) differ?. 

**Day10 Assignments**
1.  Student record management System 
Write a C program to keep records and perform statistical analysis for a class of 5 students.  The information of each student contains: 
RollNumber
Name
Sex
Exam Score.  
Do following operations
1. Add student records
2. View all student records
3. Show student who gets the maximum score
4. Show student who gets the minimum score

2. Define structure with two members (one int and other char). Also define union with two members (one int and other char). Print the sizes of structure and union in number of bytes. Initialize union/structures members and print.

3. Define a structure “complex” (use typedef) to read two complex numbers and perform addition, subtraction of these two complex numbers and display the result.

4. Write a program to read and print an Employee’s details using Structure.
Use array of structures and pointer to the array of structures concepts.


**DAY11**

1. Write a program to read and print an Employee’s details using Structure.
Use array of structures and pointer to the array of structures concepts.

2. Write c programs to demonstrate various storages classes 

3. Write a program to demonstrate integer, float, character and string constants.

**Day 12 Assignments**
C Preprocessor:
1.  Write a program to find the volume of a sphere using macros.
Pass the radius as the argument to the macro.

2. Write a program to perform addition of two int or char or float numbers.
If we need to do the addition of two integers then it should compile the code related to the addition of integers.
If we need to do the addition of two float then it should compile the code related to the addition of float numbers.
Use conditional compilation

3. Develop programs to demonstrate the functionality of preprocessor operator ## and also conditional compilation. 

**Day-13 Assignments**
 
1. Write a program to read the Roll No, name and marks of a student and store it in a text file.
If the file already exists, add information to it.
2. Write a menu driven C program to implement “wc” (i.e NO. of lines, No. of characters and No. of words in given text file) utility of Linux.  
  	  Take file as an input and print the following:
a) Number of characters
b) Number of lines
c) Number of words
3. Write a program that will concatenate two files, that is append the contents of one file at the end of another file and write the results into a third file.
4. Write a program to read the Roll No, name and marks of a student and store it in to a binary file and read student records and print on standard output (use fwrite and fread library functions).
5. Write a C program to demonstrate functionality of the fseek library function. (Use SEEK_SET, SEEK_CUR, SEEK_END. )

**Day 14 Assignments**
Command line arguments:
1. Write a program to find the smallest and greatest integers among all integers, which are provided through the command line.
2. Write a program to read (from standard input) the Roll No, name and marks of a student and store it in a text file (Note: Provide text file name through command line).
If the file already exists, add information to it.


Makefile
3. Write a Make file for cleaning and building executables from multiple c source files, and header files 


















