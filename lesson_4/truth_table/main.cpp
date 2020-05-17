/*Goal: use logical and relational operators in a C++ program.
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include <iostream>

int main()
{
    using namespace std;

    //instead of printing 0 and 1, create an array where
    //0 = False, 1 = True
    string TorF[] = {"False", "True"};
    bool A;
    bool B;
    bool C;
    bool Q;

    //Print the title
    cout<<"| A\t";
    cout<<"| B\t";
    cout<<"| C\t";
    cout<<"| (A && B && C)\t";
    cout<<"| (!B || !C)\t";
    cout<<"| (A && (!B || !C))\t";
    cout<<"| Q\t|"<<'\n';

    A = 1;
    B = 1;
    C = 1;
    Q = (A and B and C) or (A and( (not B) or (not C)));
    cout<<"| "<<TorF[A]<<"\t";
    cout<<"| "<<TorF[B]<<"\t";
    cout<<"| "<<TorF[C]<<"\t";
    cout<<"| "<<TorF[(A && B && C)]<<"\t\t";
    cout<<"| "<<TorF[(!B || !C)]<<"\t\t";
    cout<<"| "<<TorF[(A && (!B || !C))]<<"\t\t\t";
    cout<<"| "<<TorF[Q]<<"\t|\n";

    A = 1;
    B = 1;
    C = 0;
    Q = (A and B and C) or (A and( (not B) or (not C)));
    cout<<"| "<<TorF[A]<<"\t";
    cout<<"| "<<TorF[B]<<"\t";
    cout<<"| "<<TorF[C]<<"\t";
    cout<<"| "<<TorF[(A && B && C)]<<"\t\t";
    cout<<"| "<<TorF[(!B || !C)]<<"\t\t";
    cout<<"| "<<TorF[(A && (!B || !C))]<<"\t\t\t";
    cout<<"| "<<TorF[Q]<<"\t|\n";

    A = 1;
    B = 0;
    C = 1;
    Q = (A and B and C) or (A and( (not B) or (not C)));
    cout<<"| "<<TorF[A]<<"\t";
    cout<<"| "<<TorF[B]<<"\t";
    cout<<"| "<<TorF[C]<<"\t";
    cout<<"| "<<TorF[(A && B && C)]<<"\t\t";
    cout<<"| "<<TorF[(!B || !C)]<<"\t\t";
    cout<<"| "<<TorF[(A && (!B || !C))]<<"\t\t\t";
    cout<<"| "<<TorF[Q]<<"\t|\n";

    A = 1;
    B = 0;
    C = 0;
    Q = (A and B and C) or (A and( (not B) or (not C)));
    cout<<"| "<<TorF[A]<<"\t";
    cout<<"| "<<TorF[B]<<"\t";
    cout<<"| "<<TorF[C]<<"\t";
    cout<<"| "<<TorF[(A && B && C)]<<"\t\t";
    cout<<"| "<<TorF[(!B || !C)]<<"\t\t";
    cout<<"| "<<TorF[(A && (!B || !C))]<<"\t\t\t";
    cout<<"| "<<TorF[Q]<<"\t|\n";

    A = 0;
    B = 1;
    C = 1;
    Q = (A and B and C) or (A and( (not B) or (not C)));
    cout<<"| "<<TorF[A]<<"\t";
    cout<<"| "<<TorF[B]<<"\t";
    cout<<"| "<<TorF[C]<<"\t";
    cout<<"| "<<TorF[(A && B && C)]<<"\t\t";
    cout<<"| "<<TorF[(!B || !C)]<<"\t\t";
    cout<<"| "<<TorF[(A && (!B || !C))]<<"\t\t\t";
    cout<<"| "<<TorF[Q]<<"\t|\n";

    A = 0;
    B = 1;
    C = 0;
    Q = (A and B and C) or (A and( (not B) or (not C)));
    cout<<"| "<<TorF[A]<<"\t";
    cout<<"| "<<TorF[B]<<"\t";
    cout<<"| "<<TorF[C]<<"\t";
    cout<<"| "<<TorF[(A && B && C)]<<"\t\t";
    cout<<"| "<<TorF[(!B || !C)]<<"\t\t";
    cout<<"| "<<TorF[(A && (!B || !C))]<<"\t\t\t";
    cout<<"| "<<TorF[Q]<<"\t|\n";

    A = 0;
    B = 0;
    C = 1;
    Q = (A and B and C) or (A and( (not B) or (not C)));
    cout<<"| "<<TorF[A]<<"\t";
    cout<<"| "<<TorF[B]<<"\t";
    cout<<"| "<<TorF[C]<<"\t";
    cout<<"| "<<TorF[(A && B && C)]<<"\t\t";
    cout<<"| "<<TorF[(!B || !C)]<<"\t\t";
    cout<<"| "<<TorF[(A && (!B || !C))]<<"\t\t\t";
    cout<<"| "<<TorF[Q]<<"\t|\n";

    A = 0;
    B = 0;
    C = 0;
    Q = (A and B and C) or (A and( (not B) or (not C)));
    cout<<"| "<<TorF[A]<<"\t";
    cout<<"| "<<TorF[B]<<"\t";
    cout<<"| "<<TorF[C]<<"\t";
    cout<<"| "<<TorF[(A && B && C)]<<"\t\t";
    cout<<"| "<<TorF[(!B || !C)]<<"\t\t";
    cout<<"| "<<TorF[(A && (!B || !C))]<<"\t\t\t";
    cout<<"| "<<TorF[Q]<<"\t|\n";

    return 0;
}
