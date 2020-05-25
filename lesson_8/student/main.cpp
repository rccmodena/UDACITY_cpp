/*Goal: sort students by multiple data vaule
**
**student1: Name: Joe Lime, ID#15, Grad. Date: 2019
**student2: Name: Bob Green, ID#3, Grad. Date: 2020
**student3: Name: SallyAnne Green , ID#1, Grad. Date: 2017
**student4: Name: Annie Blue, ID#10, Grad. Date: 2020
**student5: Name: Jose Lemon, ID#25, Grad. Date: 2016
*/

#include"main.hpp"
#include<string>

using namespace std;

int main()
{
    std::string name[5];
    int id[5];
    int gradDate[5];

    name[0] = "Joe Lime";
    id[0] =  15;
    gradDate[0] = 2019;

    name[1] = "Bob Green";
    id[1] =  3;
    gradDate[1] = 2020;

    name[2] = "SallyAnne Green";
    id[2] =  1;
    gradDate[2] = 2017;

    name[3] = "Annie Blue";
    id[3] =  10;
    gradDate[3] = 2020;

    name[4] = "Jose Lemon";
    id[4] =  25;
    gradDate[4] = 2016;

    sortByName(name, id, gradDate);
    sortByNumber(name, id, gradDate);
    sortByGradDate(name, id, gradDate);

    return 0;
}
