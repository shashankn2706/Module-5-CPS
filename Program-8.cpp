//C++ Program to check a given whether a given number is odd or even

//Integers which are perfectly divisible by 2 are called even numbers and those integers which are not perfectly divisible by 2 are not known as odd number.

//Instructions
//Write a program using C++ to check a given whether a given number is odd or even
//Enter any number from the standard input
//check the given number is odd or even

//Expected input and output
//Enter a given number- 3
//3 is an odd number

#include <iostream>
using namespace std;

int main()
{
    int n;

    std::cout << "Enter an integer: ";
    std::cin >> n;

    if ( n % 2 == 0)
        std::cout << n << " is even.";
    else
        std::cout << n << " is odd.";

    return 0;
}