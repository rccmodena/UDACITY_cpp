#include "mainClasses.cpp"
#include "mainFunctions.cpp"

int main()
{
    Gameboard board;
    Player players[2];
    enterPlayers(players);

    board.printInfo();

    int playerNumber = 0;
    int result = 0;
    while (true)
    {
        result = play(players, playerNumber, board);
        board.printInfo();
        if (result == 1)
        {
            cout<<"Player "<<players[playerNumber].getName()<<" won!!!"<<endl;
            break;
        }
        if (result == 2)
        {
            cout<<"Tie game!"<<endl;
            break;
        }
        if (playerNumber == 0)
        {
            playerNumber = 1;
        }
        else
        {
            playerNumber = 0;
        }
    }
    return 0;
}
