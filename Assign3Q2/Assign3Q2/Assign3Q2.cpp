/*
* Created By: Miguel R. Kunkle
* Date: 12/7/2022
* 
* Description: Program takes a user inputted string and puts it into a vector. Then, a recursive function cycles through the vector, comparing its characters until it is either empty
* or one character. By definition, a phrase that is only one character are techincally palindromes.
*/
#include <iostream>
#include <string>
#include <vector>

bool palindrome_test(std::vector<char> text)
{
    if (text.size() <= 1) //base case
    {
        return true;
    }

    else
    {
        if (text.front() == text.back())
        {
            text.pop_back();
            text.erase(text.begin());
            palindrome_test(text); //recursion point
        }

        //returns false if at a point the characters dont match.
        else
        {
            return false;
        }
    }
}


int main()
{
    //user input
    std::string input;
    std::cout << "Please enter your text: ";
    std::cin >> input;

    //create vector for characters
    std::vector<char> text(input.begin(), input.end());

    //output
    if (palindrome_test(text)) //function call
    {
        std::cout << "It is a palindrome." << std::endl;
    }

    else
    {
        std::cout << "It is not a palindrome." << std::endl;
    }

    //print for test
    /*for (int i = 0; i < text.size(); i++)
    {
        std::cout << text.at(i);
        std::cout << " ";
    }*/

}
