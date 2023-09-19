# Order of Operations

Have you seen the posts or videos on social media where a mathematical expression is given and there is an (emotional) debate over how to solve the formula?

Much of the confusion comes form understanding [order of operations](https://en.wikipedia.org/wiki/Order_of_operations). Some of us learned order of operations as PEMDAS or _Please Excuse My Dear Aunt Sally_. Others learned it as BODMAS. And even others learned it as BEDMAS.

Take for instance the formula 8 ÷ 2(2 + 2) that was [tweeted by pjmdolI](https://twitter.com/pjmdolI/status/1155598050959745026) in July 2019.

Of course this is a contrived example and in practice we would write an expression that uses parentheses to remove any ambiguity. Let's humor the Internet and work through this problem.

First, we tackle the parentheses so 8 ÷ 2(2 + 2) becomes 8 ÷ 2(4) or 8 ÷ 2 × 4. The expression is confusing. Recalling PEMDAS, the _M_ for multiplication comes before the _D_ for division. Some of us may first multiply and then divide resulting in 8 ÷ 2 × 4 = 8 ÷ 8 = 1.

Others will work recall that multiplication and division have the same priority or [precedence](https://en.wiktionary.org/wiki/precedence) which means that you work through the expression from left to right multiplying and dividing as you go along. Applying the rules in this fashion, 8 ÷ 2 × 4 = 4 × 4 = 16.

Which answer is correct? Is it 1 or 16?

C++ has [arithmetic operators](https://en.cppreference.com/w/cpp/language/operator_arithmetic) and has [operator precedence rules](https://en.cppreference.com/w/cpp/language/operator_precedence) governing in what order the operators are applied. As we learn about C++, it is important that we learn how to express our mathematical ideas accurately and concisely.

In this exercise, we will take the infamous formula and write a program to settle whether the answer is 1 or 16. We will need to use integer variables to store the results of our calculations. This means we will use the `int` type.

## Including Header Files

We all like to save time and effort. We buy bread instead of baking it ourselves. We buy our lunch at school instead of packing it ahead of time. And when we program, we like to use code that is provided to us.

In C++, there is a collection of libraries that we call the [C++ Standard Library](https://en.wikipedia.org/wiki/C%2B%2B_Standard_Library). (The C++ Standard Library also includes the [C Standard Library](https://en.wikipedia.org/wiki/C_standard_library).)The C++ Standard Library is provided to us so that we do not have to re-invent very basic and common routines. For example, the C++ Standard Library contains all the mathematical functions that you can find on a fancy scientific calculator. This way you do not need to rewrite functions like sine, cosine, and tangent.

The C++ Standard Library is organized as files that we call [_header files_](https://en.cppreference.com/w/cpp/header). Header files are installed on your computer when you install a compiler. When you need to use a header file, we instruct the C++ preprocess, which is part of the compiler, to copy and paste the contents of the header file into our own file.

In this exercise, we want to print a message to the screen similar to our "Hello World!" program. To do this, we need to use the C++ Standard Library's output functionality.

To do this, we must `#include` the `iostream` header file. The `iostream` header file has all the functionality to enable us to output text to our terminal and to read from the keyboard. This means that at the top of our source code we need to write `#include <iostream>`.

Once we have done that, we can use `std::cout` and the insertion operator `<<` to print messages to the terminal. Later, we will learn to use `std::cin` and the extraction operator `>>` to read data from the keyboard.

## C++ Style & Formatting

[Programming style or coding style](https://en.wikipedia.org/wiki/Programming_style) are a set of conventions or rules that help keep source code consistently organized and formatted. When our C++ source code, also known as code, is well formatted and organized, it is easy to read, understand, and improve our programs.

There are many different C++ styles available. In the C++ community, there is not one, correct style. In other programming language communities, there is a agreement on one widely adopted style.

The style that we have adopted for our course is the [Google C++ coding style](https://google.github.io/styleguide/cppguide.html). The reason we are adopting this style is because Google has published a document that is well organized and well explained to show a learner how to have great programming style.

Remember that every line that starts with `//` is what's called a _comment_. A comment is a message written to the programmer, by the programmer, for the programmer. The computer ignores all comments. Comments makes it easy for a beginner or an expert to read and understand the program.

The formatting makes it clear what steps happen in which order. The indentation shows the hierarchical relationship in the code that some lines are _inside_ of a function. Our text editor uses the formatting and the special meaning of the words to color the text. The colors are not part of the programming language.

Spending the time to format and document your programs are well worth it.

Bookmark the [Google C++ style guide](https://google.github.io/styleguide/cppguide.html). Reference it whenever you are not sure how to format your code.

A few important conventions or rules that we should follow are:

* The assignment operator is `=`. What's on the right hand side of the `=` is _assigned to_ the left hand side. For example, `x = 5;` means that the value `5` is assigned to the variable `x`.

* Place a space before and after binary arithmetic operators. In other words, with addition, subtraction, multiplication, and division operators place a space before and after. For example `5 + 3 * 6 / 2` is correct and `5+3*6/2` is not correct.

* [Snake case](https://en.wikipedia.org/wiki/Snake_case) is how we format variable names. For example if we have a variable that we would like to call _degrees Fahrenheit_, then using snake case it would be formatted as `degrees_fahrenheit`, all lower case and each new word separated by an underscore.

* A constant is a special variable that never changes. It is constant. Examples from our day to day life are Pi, the speed of light, and how many minutes are in a day. We use the special word `const` to label a C++ variable as a constant.

* [Camel case](https://en.wikipedia.org/wiki/Camel_case) is how we format constants, function names, and class names. If it's a constant, then we prefix the name with `k`. For example, _speed of light_ is a universal constant. If we created a constant in C++, we would format the name as `kSpeedOfLight`. Camel case is where each word is capitalized. The lowercase `k` means it is a constant.

## Requirements

Review the C++ source files and identify all the TODOs.

To compile your program, you use the `clang++` command. If your program does not compile, it will receive a 0 score.

To verify that your formatting is conforming to the standards, you have a special tool named `check_formatting` for this assignment. You can use `check_formatting` to check the formatting of your project. Using the feedback from `check_formatting`, make changes to the source code. Continue editing your project until all warnings and errors have been addressed.

Formatting is graded according to the rubric.

## Compiling

Make sure your program is always compiling correctly. Compile early and compile often.

When you make a small change to a C++ source file, save your work, and compile the program. This will tell you immediately if you have made any mistakes.

_Do not write many, many lines of code and then compile._ This is a bad strategy. You will not catch small mistakes until there are many small mistakes. Correcting a small mistake hidden under many other small mistakes is more difficult than you can imagine.

The compiler we are using is `clang++`. To compile your program, use the following command:
```
$ clang++ viral_math.cc
```

If the program compiles correctly, there will be nothing printed to the screen. Instead a new file will be created named `a.out`.

To run the program, use the following command:
```
$ ./a.out 
The answer is 16.
```

The program will execute and print out that the solution to our mathematical question is 16.

If your program does not compile, make sure you undo your changes. _If your program does not compile, then it will receive a 0 grade._

## Formatting

To verify that your formatting is conforming to the standards, you have a special tool named `check_formatting` for this assignment. You can use `check_formatting` to check the formatting of your project. Using the feedback from `check_formatting`, make changes to the source code. Continue editing your project until all warnings and errors have been addressed.

Below is an example of how to run `check_formatting` and the output shows that the project is well formatted (no changes are needed).

```
$ ./check_formatting 
2023-02-09 19:38:46,746 - INFO - Checking format for file: /home/mshafae/cpsc120/cpsc-120-lab-02-team-solo/part-1/viral_math.cc
2023-02-09 19:38:47,702 - INFO - 😀 Formatting looks pretty good! 🥳
2023-02-09 19:38:47,702 - INFO - This is not an auto-grader.
2023-02-09 19:38:47,702 - INFO - Make sure you followed all the instructions and requirements.
```

If we make a change that causes the program to no longer compile, then running `check_formatting` will something similar to the following:

```
$ ./check_formatting 
2023-02-09 21:17:31,481 - INFO - Checking format for file: /home/mshafae/cpsc120/cpsc-120-lab-02-team-solo/part-1/viral_math.cc
2023-02-09 21:17:32,486 - INFO - stderr: /home/mshafae/cpsc120/cpsc-120-lab-02-team-solo/part-1/viral_math.cc:15:1: error: unknown type name 'nt'
nt main(int argc, char const *argv[]) {
^
1 error generated.
2023-02-09 21:17:32,486 - ERROR - /home/mshafae/cpsc120/cpsc-120-lab-02-team-solo/part-1/viral_math.cc is no longer compiling!
2023-02-09 21:17:32,486 - WARNING - A program that does not compile does not get graded.
2023-02-09 21:17:32,486 - WARNING - Use the compiler to see where the program is broken.
2023-02-09 21:17:32,487 - WARNING - You can use git to revert your changes and ask your instructor for help.
```

The error may be different yet the result is the same. The `check_formatting` tool will tell you that the program is no longer compiling. Undo the change you just made and try again.

If you are in the wrong directory, the output will look _identical_ to the example below.

```
$ ./check_formatting 
-bash: ./check_formatting: No such file or directory
``` 

This means you are in the wrong directory. Use the `pwd`, `cd`, and `ls` commands to get yourself in the right directory. Ask your instructor for help if you get stuck. If you experience this problem, add a note about the problem and how to solve it to your notebook.

In most cases, when you run `check_formatting` it will tell you that your formatting needs some work and it will show you what is called a [diff](https://en.wikipedia.org/wiki/Diff). The upper portion is your code and the lower portion is how the program is recommending that you fix it.

In the example below, you can see that the first program does not indent anything so the program recommends that the lines are indented in the second code listing.

```
$ ./check_formatting 
2023-02-09 21:19:26,674 - INFO - Checking format for file: /home/mshafae/cpsc120/cpsc-120-lab-02-team-solo/part-1/viral_math.cc
2023-02-09 21:19:27,712 - ERROR - Error: Formatting needs improvement.
2023-02-09 21:19:27,713 - WARNING - Contextual Diff
*** Student Submission (Yours)

--- Correct Format

***************

*** 13,20 ****

  #include <iostream>
  
  int main(int argc, char const *argv[]) {
! int solution{0};
! std::cout << "The answer is " << solution << ".\n";
! return 0;
  }
  
--- 13,20 ----

  #include <iostream>
  
  int main(int argc, char const *argv[]) {
!   int solution{0};
!   std::cout << "The answer is " << solution << ".\n";
!   return 0;
  }
  
2023-02-09 21:19:27,713 - ERROR - 🤯😳😤😫🤬
2023-02-09 21:19:27,713 - ERROR - Your formatting doesn't conform to the Google C++ style.
2023-02-09 21:19:27,713 - ERROR - Use the output from this program to help guide you.
2023-02-09 21:19:27,713 - ERROR - If you get stuck, ask your instructor for help.
2023-02-09 21:19:27,713 - ERROR - Remember, you can find the Google C++ style online at https://google.github.io/styleguide/cppguide.html.
```

## Don't Forget

Please remember that:

- You need to put a header in every file.
- You need to follow the [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html).
- Remove the word `TODO` in the comments once you have completed the task. You can leave the rest of the comment in place.

## Testing Your Code

Computers only ever do exactly what they are told, exactly the way they are told it, and never anything else. Testing is an important process to writing a program. You need to test for the program to behave correctly and test that the program behaves incorrectly in a predictable way.

As programmers we have to remember that there are a lot of ways that we can write the wrong program and only one to a few ways to write the correct program. We have to be aware of [cognitive biases](https://en.wikipedia.org/wiki/List_of_cognitive_biases) that we may exercise that lead us to believe we have correctly completed our program. That belief may be incorrect and our software may have errors. [Errors in software](https://www.wired.com/2005/11/historys-worst-software-bugs/) may lead to loss of [life](https://www.nytimes.com/2019/03/14/business/boeing-737-software-update.html), [property](https://en.wikipedia.org/wiki/Mariner_1), [reputation](https://en.wikipedia.org/wiki/Pentium_FDIV_bug), or [all of the above](https://en.wikipedia.org/wiki/2009%E2%80%9311_Toyota_vehicle_recalls).

### Test strategy

Start simple, and work your way up. Good tests are specific, cover a broad range of fundamentally different possibilities, can identify issues quickly, easily, and directly, without need for much set up, and can almost be diagnosed by inspection if the code fails to execute the test correctly.

## Example Output

Please ensure your program's output is identical to the example below.

```
$ clang++ viral_math.cc
$ ./a.out 
The answer is 16.
```
