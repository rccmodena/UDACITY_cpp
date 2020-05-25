#include <iostream>
using namespace std;

class Player
{
    string name;
    char symbol;
  public:
    Player();
    void setName(string nameIn);
    string getName();
    void setSymbol(char symbolIn);
    char getSymbol();
    void printInfo();
    ~Player();
};

Player::Player()
{
    name = "Unkown";
    symbol = '?';
}

void Player::setName(string nameIn)
{
    name = nameIn;
}

string Player::getName()
{
    return name;
}

void Player::setSymbol(char symbolIn)
{
    symbol = symbolIn;
}

char Player::getSymbol()
{
    return symbol;
}

void Player::printInfo()
{
    cout<<name<<" - "<<symbol<<endl;
}

Player::~Player()
{
    cout<<"\nDeleting Player!";
}

class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard();
    void setGameSpace(int row,int column, char value);
    char getGameSpace(int row,int column);
    int endGame();
    int fourInRow(const char symbol);
    int fourInCol(const char symbol);
    int fourInDiag(const char symbol);
    void printInfo();
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

int Gameboard::endGame()
{
    int found = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (gameSpace[i][j] == '-')
            {
                found = 0;
                break;
            }
        }
    }
    return found;
}

int Gameboard::fourInRow(const char symbol)
{
    int xInRow;
    int found = 0;
    for (int i = 0; i < 4; i++)
    {
        xInRow = 0;
        for (int j = 0; j < 4; j++)
        {
            if (gameSpace[i][j] == symbol)
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
    cout<<"fourInRow: "<<found<<endl;
    return found;
}

int Gameboard::fourInCol(const char symbol)
{
    int xInCol;
    int found = 0;
    for (int j = 0; j < 4; j++)
    {
        xInCol = 0;
        for (int i = 0; i < 4; i++)
        {
            if (gameSpace[i][j] == symbol)
            {
                xInCol++;
            }
        }
        if (xInCol == 4)
        {
            found = 1;
            break;
        }
    }
    cout<<"fourInCol: "<<found<<endl;
    return found;
}

int Gameboard::fourInDiag(const char symbol)
{
    int xInDiag = 0;
    int found = 0;

    for (int i = 0; i < 4; i++)
    {
        if (gameSpace[i][i] == symbol)
        {
            xInDiag++;
        }
    }
    if (xInDiag == 4)
    {
        found = 1;
    }
    else
    {
        xInDiag = 0;
        for (int i = 0; i < 4; i++)
        {
            if (gameSpace[3-i][i] == symbol)
            {
                xInDiag++;
            }
        }
        if (xInDiag == 4)
        {
            found = 1;
        }
    }

    cout<<"fourInDiag: "<<found<<endl;
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
