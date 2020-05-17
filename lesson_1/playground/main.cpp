/*Put your code here*/

#include "main.hpp"
#include "mainFunctions.cpp"


int main()
{
    float FTemp = getFTemp();
    float CTemp;

    CTemp = (FTemp - 32.0) / (9.0/5.0);
    std::cout << "\n"<<FTemp <<" in farenheit = " <<CTemp<<" in Celcius\n";
    return 0;
}
