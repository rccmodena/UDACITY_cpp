/*For this program print for each variable
**print the value of the variable,
**then print the address where it is stored.
*/
#include<iostream>
#include<string>

int main()
{
    std::string name;
    int givenInt;
    float givenFloat;
    double givenDouble;
    std::string givenString;
    char givenChar;

    std::cout<<"integer = \n";
    std::cin>>givenInt;

    std::cout<<"float = \n";
    std::cin>>givenFloat;

    std::cout<<"double = \n";
    std::cin>>givenDouble;
    std::cin.ignore();

    std::cout<<"character = \n";
    std::cin>>givenChar;

    std::cout<<"string = \n";
    std::cin.ignore();
    std::getline (std::cin,givenString);

    std::cout<<"integer = "<<givenInt<<"\n";
    std::cout<<"float = "<<givenFloat<<"\n";
    std::cout<<"double = "<<givenDouble<<"\n";
    std::cout<<"string = "<<givenString<<"\n";
    std::cout<<"character = "<<(char)givenChar<<"\n\n";

    std::cout<<"address integer = "<<&givenInt<<"\n";
    std::cout<<"address float = "<<&givenFloat<<"\n";
    std::cout<<"address double = "<<&givenDouble<<"\n";
    std::cout<<"address string = "<<&givenString<<"\n";
    std::cout<< "address character = " << (void *) &givenChar<<"\n\n";

    int *pointerGivenInt;
    int **pointerPointerGivenInt;
    pointerGivenInt = &givenInt;
    pointerPointerGivenInt = &pointerGivenInt;
    std::cout<< "pointer of givenInt = " << *pointerGivenInt<<"\n";
    std::cout<< "pointer of pointer of givenInt = " << **pointerPointerGivenInt<< "\n";

    return 0;
}
