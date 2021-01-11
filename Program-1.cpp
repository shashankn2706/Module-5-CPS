//Complete the following missing statements in the below sample code which performs addition of two numbers.
// 1)Initially, read two numbers from the standard input
// 2)Perform the addition operation.
// 3)Finally, display the result on the screen.

//Expected input & output:
//Enter two integers: 2 3
//The sum of two numbers is 5

#include<iostream>
int main()
{
    int x, y, s;    
    std::cout << "Enter two numbers: ";
    std::cin >> x>>y;


    // sum of two numbers in stored in variable s    
  //COMPLETE THE CODE TO PERFORM ADDITION OF TWO NUMBERS
s = x+y;
    // Prints the result
    std::cout << x << " + " <<  y << " = " << s;   
//WRITE THE STATEMENT WHICH PRINTS THE RESULT AND DISPLAY THE SAME
    return 0;
}
