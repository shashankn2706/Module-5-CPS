//Design and develop a C++ program to Print ASCII Value.

//The objective of the program is to display the ASCII value of the character.

//Instructions

//Read a character from the standard input.
//Display the ASCII value of the entered character using standard output

//Expected input and output
//Input: Enter a character  p
//Output: The ASCII value of entered character p is 112

#include <iostream>
using namespace std;

int main()
{
 char c;
 std::cout << "Enter a character: ";
 std::cin >> c;
 std::cout << "ASCII Value of " << c << " is " << int(c);
 return 0;
}