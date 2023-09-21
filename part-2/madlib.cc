// Jemin Song
// jeminsong0119@csu.fullerton.edu
// @jeminsong
// Partners: @jeminsong

// Jemin Song
// jeminsong0119@csu.fullerton.edu
// @jeminsong
// Partners: @jeminsong

#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
 // Declare a string variable. Name the variable singular_noun and
 // initialize it to some value such as "singular noun"
 // Declare a string variable. Name the variable plural_noun and
 // initialize it to some value such as "plural noun"
 // Declare a string variable. Name the variable present_tense_verb and
 // initialize it to some value such as "present tense verb"
 // Prompt the computer user by printing "Please enter a singular noun: "
 // and store what the computer user enters to the variable singular_noun.
 // Prompt the computer user by printing "Please enter a plural noun: "
 // and store what the computer user enters to the variable plural_noun.
 // Prompt the computer user by printing "Please enter a present tense
 // verb: " and store what the computer user enters to the variable
 // present_tense_verb.
 // Print a single new line ("\n")
 // Reminder: wrap all your lines so they are not longer than 80 columns.
 // 80 columns is this wide..............................................stop!
 // Print "Computers are small enough to fit into a ", singular_noun, and
 // ".\n"
 // Print "Computers can add, multiply, divide, and ",
 // present_tense_verb, and ".\n"
 // Print "People can ", present_tense_verb, " too but computers do it
 // better.\n"
 // Print "Computers have many ", plural_noun, " which gives them the
 // advantage\n"
 // Print "over people for many computational tasks.\n"
    std::string singular_noun = "singular noun";
    std::string plural_noun = "plural noun";
    std::string present_tense_verb = "present tense verb";
    std::cout << "Please enter a singular noun: ";
    std::cin >> singular_noun;
    std::cout << "Please enter a plural noun: ";
    std::cin >> plural_noun;
    std::cout << "Please enter a present tense verb: ";
    std::cin >> present_tense_verb;
    std::cout << "\n";
    std::cout << "Computers are small enough to fit into a "
              << singular_noun << ".\n";
    std::cout << "Computers can add, multiply, divide, and "
              << present_tense_verb << ".\n";
    std::cout << "People can "
              << present_tense_verb
              << " too but computers do it better.\n";
    std::cout << "Computers have many "
              <<plural_noun
              << " which gives them the advantage.\n";
    std::cout << "over people for many computational tasks.\n";
    return 0;
}
