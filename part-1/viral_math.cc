// jeminsong
// jeminsong0119@csu.fullerton.edu
// @jeminsong0119
// partners:

#include <iostream>
int main(int argc, char const *argv[]) {
  // Declare an integer variable. Name the variable solution and
  // Initialize it to some value such as 0.
  int solution = 0;
  // Write an expression where solution is on the left hand side of the
  // assignment opertor (=) and on the right hand side write the expression
  // 8 ÷ 2(2 + 2) in a way that C++ will understand it.
  solution = 8 / 2 * (2 + 2);
  std::cout << "The answer is " << solution << ".\n";
  // Using std::cout and the insertion operator (<<) write a statement
  // Which will print out the message "The answer is " followed by the value of
  // The variable named solution. End the expression with a period (.) and new
  // Line character ("\n").
  return 0;
}