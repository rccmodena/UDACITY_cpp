/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include <iostream>

int main()
{
    float result = 0;
    float value;

    for(int i=0; i< 5;i++)
    {
        std::cout<<"Enter a number:\n";
        std::cin>>value;
        result += value;
    }
    std::cout<<"The sum of the numbers is: "<<result<<"\n";
    std::cout<<"The average of the numbers is: "<<(result/5)<<"\n";
    return 0;
}
