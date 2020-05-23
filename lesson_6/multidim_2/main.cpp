/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array
**and a vector of size 4.
**Use the dot product to multiply the array by the vector.
**Print the resulting vector.
*/

#include <iostream>

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4.
    //Print the resultant product vector

    int cols = 4;
    int rows = 4;

    int matrix[rows][cols];
    int vector[rows];
    int result[rows];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout<<"Enter the number Matrix["<<i<<"]["<<j<<"]: "<<std::endl;
            std::cin>>matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        std::cout<<"Enter the number Vector["<<i<<"]: "<<std::endl;
        std::cin>>vector[i];
    }

    for (int i = 0; i < rows; i++)
    {
        int sum_line = 0;
        for (int j = 0; j < cols; j++)
        {
            sum_line += (matrix[i][j] * vector[j]);
        }
        result[i] = sum_line;
    }

    std::cout<<"The result is: : "<<std::endl;
    for (int i = 0; i < rows; i++)
    {
        std::cout<<result[i]<<", "<<std::endl;
    }


    return 0;
}
