/*header file for main.cpp*/
#include <iostream>
#include <iomanip>
using namespace std;

class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row,int column);
    int fourInRow(); //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
    ~Gameboard();
};

Gameboard::Gameboard()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            gameSpace[i][j] = '-';
        }
    }
}

void Gameboard::setGameSpace(int row,int column, char value)
{
    gameSpace[row][column] = value;
}

char Gameboard::getGameSpace(int row,int column)
{
    return gameSpace[row][column];
}

int Gameboard::fourInRow()
{
    int xInRow;
    int found = 0;
    for (int i = 0; i < 4; i++)
    {
        xInRow = 0;
        for (int j = 0; j < 4; j++)
        {
            if (gameSpace[i][j] == 'x')
            {
                xInRow++;
            }
        }
        if (xInRow == 4)
        {
            found = 1;
            break;
        }
    }
    return found;
}

void Gameboard::printInfo()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<gameSpace[i][j]<<' ';
        }
        cout<<"\n";
    }
}

Gameboard::~Gameboard()
{
    cout<<"\nDeleting the GameBoard";
}
