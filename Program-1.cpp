//Develop a C++ program to add two integer numbers.

//Instructions

//In this program, the user enters two integer number of his choice with the help of standard input.
//The addition operation is performed.
//The Output for this program is the sum of two entered numbers that will be displayed on the standard output.


//Expected input and output
//Input: Enter two numbers: 2 3
//Output: The sum of two numbers is 5
#include <iostream>
int main()
{
    int x,y,s;
    cout << "Enter two integers: ";
    cin >> x >> y;
    // sum of two numbers in stored in variable sumOfTwoNumbers
    s = x + y;
    // Prints sum 
    cout << x << " + " <<  y << " = " << s;     
    return 0;
}
