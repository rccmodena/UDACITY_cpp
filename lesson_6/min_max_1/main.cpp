/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100.
**We will do it now for practice and again later when we learn arrays and
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include <iostream>

int main()
{
    float value;
    float min = 100;
    float max = 0;
    float sum = 0;

    for (int i=0; i<15; i++)
    {
        std::cout<<"\nEnter a number: ";
        std::cin>>value;
        if (value < min)
        {
            min = value;
        }
        if (value > max)
        {
            max = value;
        }
        sum += value;
    }
    std::cout<<"\n Minimum value: "<<min<<"\n";
    std::cout<<"\n Maximum value: "<<max<<"\n";
    std::cout<<"\n Average: "<<(sum/15)<<"\n";
    return 0;
}
