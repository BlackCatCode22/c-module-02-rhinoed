[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/y-7esTgm)
# tCppModule02spr25
tCppModule02spr25

Code up these three programs and submit your source code (funWithFunctions.cpp, largestOfThree.cpp, and reversedStrings.cpp) to your remote repo in GitHub Classroom.

1) `reversedStrings.cpp` - You will create a simple program that takes a user's input string and reverses it. For example, if the user inputs "hello", the program will output "olleh".

   **My Solution**
      - I first got the length of the string provided by the user
      - Then I used a for loop to iterate over the length in reverse
      - In each iteration I appended the character at the current index `i - 1` to `reversedString`
      - Once `i` == 1 the index `i - 1` == 0 and the for loop stop
      - I then output the reversed string
   
   [reversedStrings.cpp](reversed_strings/reversedStrings.cpp)
2) `funWithFunctions.cpp` - You will explore the use of functions in C++. You will create a program that involves three distinct functions: `getAnIntFromTheUser`, `compareTwoInts`, and `sumTwoInts`. The program will demonstrate how functions can be used to break down a problem into smaller, manageable parts.

   **My Solution**
     - The functions `getAnIntFromTheUser()`, `compareTwoInts`, and `sumTwoInts` are simple mainly just returning user input
     - These functions are used in the `main()` to output a stream to standard output
     - I used ChatGPT to help me refactor `getAnIntFromTheUser()` to ensure user input that overflows or can't be converted to an Int does stop the function of the program
     
   [funWithFunctions.cpp](fun_with_functions/funWithFunctions.cpp)
3) `largestOfThree.cpp` - This program, titled "largestOfThree.cpp," is designed to help you understand conditional statements in C++. Your task is to write a program that asks the user for three integers, determines the largest among them using nested if statements, and outputs the largest integer.

   **My Solution**
     - I used functions instead of writing everything within the body of `main()`
     - I used three different methods to find the largest of three
     - The first method is a while loop
       - This uses a while loop to get int, compare it to current larges int updates largest int and `i` until `i` == 3
     - The second method is an if else statement
       - This is essentially a nested if else statement, but it uses ternary operators in the internal conditional checks
     - The third method is a recursive function
       - This uses recursion, calling itself with the iteration `i` and current largest `num`

     [largestOfThree.cpp](largest_of_three/largestOfThree.cpp)
 
