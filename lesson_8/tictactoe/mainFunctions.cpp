#include <iostream>

using namespace std;

void enterPlayers(Player *players)
{
    string playerName;
    cout<<"Enter 'x' player name:"<<endl;
    players[0].setSymbol('x');
    cin>>playerName;
    players[0].setName(playerName);

    cout<<"Enter 'o' player name:"<<endl;
    players[1].setSymbol('o');
    cin>>playerName;
    players[1].setName(playerName);
}

int verifyRow(int rowIn)
{
    if (rowIn < 1 || rowIn > 4)
    {
        cout<<"Row must be between 1 and 4!!"<<endl;
        return 0;
    }
    return 1;
}

int verifyCol(int colIn)
{
    if (colIn < 1 || colIn > 4)
    {
        cout<<"Columns must be between 1 and 4!!"<<endl;
        return 0;
    }
    return 1;
}

int play(Player *players, const int nPlayer, Gameboard &gBoard)
{
    int row;
    int col;
    int result = 0;
    while (true)
    {
        while (true)
        {
          cout<<players[nPlayer].getName()<<", enter a row: ";
          cin>>row;
          if (verifyRow(row))
          {
              break;
          }
        }

        while (true)
        {
          cout<<players[nPlayer].getName()<<", enter a column: ";
          cin>>col;
          if (verifyRow(col))
          {
              break;
          }
        }
        if (gBoard.getGameSpace(row - 1, col - 1) == '-')
        {
            gBoard.setGameSpace(row - 1, col -1, players[nPlayer].getSymbol());
            break;
        }
        else
        {
            cout<<"This position is already occupied!!\n";
        }
    }

    result = gBoard.fourInCol(players[nPlayer].getSymbol());

    if (result == 0)
    {
        result = gBoard.fourInRow(players[nPlayer].getSymbol());
    }

    if (result == 0)
    {
        result = gBoard.fourInDiag(players[nPlayer].getSymbol());
    }

    if (result == 0)
    {
        if (gBoard.endGame() == 1)
        {
            result = 2;
        }
    }

    return result;
}
