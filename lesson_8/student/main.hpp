/*Header file for main.cpp*/

#include<string>
#include<iostream>

void sortByName(std::string *name, int *id, int *gradDate);
void sortByNumber(std::string *name, int *id, int *gradDate);
void sortByGradDate(std::string *name, int *id, int *gradDate);

void sortByName(std::string *name, int *id, int *gradDate)
{
    std::string aux_name;
    int aux_id;
    int aux_grad;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5-i; j++)
        {
            if (name[j] > name[j+1])
            {
                aux_name = name[j+1];
                name[j+1] = name[j];
                name[j] = aux_name;

                aux_id = id[j+1];
                id[j+1] = id[j];
                id[j] = aux_id;

                aux_grad = gradDate[j+1];
                gradDate[j+1] = gradDate[j];
                gradDate[j] = aux_grad;
            }
        }
    }

    std::cout<<"Order by Name: \n\n";
    for(int i = 0; i < 5; i++)
    {
        std::cout<<"student"<<(i+1)<<": Name: "<<name[i]<<", ID#"<<id[i]<<", Grad. Date: "<<gradDate[i]<<std::endl;
    }
    std::cout<<"\n";
}

void sortByNumber(std::string *name, int *id, int *gradDate)
{
    std::string aux_name;
    int aux_id;
    int aux_grad;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5-i; j++)
        {
            if (name[j] > name[j+1])
            {
                aux_name = name[j+1];
                name[j+1] = name[j];
                name[j] = aux_name;

                aux_id = id[j+1];
                id[j+1] = id[j];
                id[j] = aux_id;

                aux_grad = gradDate[j+1];
                gradDate[j+1] = gradDate[j];
                gradDate[j] = aux_grad;
            }
        }
    }

    std::cout<<"Order by Name: \n\n";
    for(int i = 0; i < 5; i++)
    {
        std::cout<<"student"<<(i+1)<<": Name: "<<name[i]<<", ID#"<<id[i]<<", Grad. Date: "<<gradDate[i]<<std::endl;
    }
    std::cout<<"\n";
}

void sortByGradDate(std::string *name, int *id, int *gradDate)
{
    std::string aux_name;
    int aux_id;
    int aux_grad;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5-i; j++)
        {
            if (name[j] > name[j+1])
            {
                aux_name = name[j+1];
                name[j+1] = name[j];
                name[j] = aux_name;

                aux_id = id[j+1];
                id[j+1] = id[j];
                id[j] = aux_id;

                aux_grad = gradDate[j+1];
                gradDate[j+1] = gradDate[j];
                gradDate[j] = aux_grad;
            }
        }
    }

    std::cout<<"Order by Graduate Date: \n\n";
    for(int i = 0; i < 5; i++)
    {
        std::cout<<"student"<<(i+1)<<": Name: "<<name[i]<<", ID#"<<id[i]<<", Grad. Date: "<<gradDate[i]<<std::endl;
    }
    std::cout<<"\n";
}
