/*Goal: Practice array manipulation in C++.
**The user will input 40 integers.
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order
**and print it.
**The each print of the array should separate the numbers in the array by
**one space.
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

int main()
{
    int userInput[40];
    for(int i = 0; i <40; i++)
    {
        std::cout<<"Enter a number: ";
        std::cin>>userInput[i];
        std::cout<<'\n';
    }

    std::cout<<"Numbers original order:\n";

    for(int i = 0; i <40; i++)
    {
        std::cout<<userInput[i]<<" ";
    }

    std::cout<<"\nNumbers reverse order:\n";

    for(int i = 39; i > -1; i--)
    {
        std::cout<<userInput[i]<<" ";
    }

    int temp;
    bool change;
    do
    {
        change = false;
        for(int i = 0; i < (40 - 1); i++)
        {
            if (userInput[i] > userInput[i+1])
            {
                temp = userInput[i+1];
                userInput[i+1] = userInput[i];
                userInput[i] = temp;
                change = true;
            }
        }
    } while (change);

    std::cout<<"\nNumbers ascending order:\n";

    for(int i = 0; i <40; i++)
    {
        std::cout<<userInput[i]<<" ";
    }

    return 0;
}
