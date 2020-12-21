//C++ Program to Check Whether a character is Vowel or Consonant

//Five alphabets a, e, i, o and u are known as vowels. All other alphabets except these 5 alphabets are known are consonants.
//This program assumes that the user will always enter an alphabet.

//Write a simple C++ program to Check Whether a character is Vowel or Consonant

//Expected input and output

//Enter an alphabet:a
//a is an vowel




#include <iostream>
using namespace std;

int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    std::cout << "Enter an alphabet: ";
    std::cin >> c;

    // evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
    if (isLowercaseVowel || isUppercaseVowel)
        std::cout << c << " is a vowel.";
    else
        std::cout << c << " is a consonant.";

    return 0;
}