/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include "main.hpp"

int main()
{
    Cat cat1;
    cat1.setName("Cat 1");
    cat1.setBreed("Breed 1");
    cat1.setAge(1);
    cat1.printInfo();
    return 0;
}
