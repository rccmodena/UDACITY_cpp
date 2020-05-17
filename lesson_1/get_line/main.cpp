/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number.
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::string address;
    std::string phone;
    std::cout<<"Tell me your name?: ";
    std::getline(std::cin, name);
    std::cout<<"Tell me your address?: ";
    std::getline(std::cin, address);
    std::cout<<"Tell me your phone number?: ";
    std::getline(std::cin, phone);
    std::cout<<"\n"<<name<<"\n";
    std::cout<<"\t\t"<<address<<"\n";
    std::cout<<"\t\t"<<phone<<"\n";

    std::cout<<"Tell me your name?: ";
    std::getline(std::cin, name);
    std::cout<<"Tell me your address?: ";
    std::getline(std::cin, address);
    std::cout<<"Tell me your phone number?: ";
    std::getline(std::cin, phone);
    std::cout<<"\n"<<name<<"\n";
    std::cout<<"\t\t"<<address<<"\n";
    std::cout<<"\t\t"<<phone<<"\n";
    return 0;
}
