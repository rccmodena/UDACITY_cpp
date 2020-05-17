/*GOAL: Practice writing to the console and learn
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/

#include <iostream>

int main()
{
    using namespace std;

    cout<<"int size: "<<sizeof(int)<<"\n";
    cout<<"short size: "<<sizeof(short)<<"\n";
    cout<<"long size: "<<sizeof(long)<<"\n";
    cout<<"char size: "<<sizeof(char)<<"\n";
    cout<<"float size: "<<sizeof(float)<<"\n";
    cout<<"double size: "<<sizeof(double)<<"\n";
    cout<<"bool size: "<<sizeof(bool)<<"\n";
}
