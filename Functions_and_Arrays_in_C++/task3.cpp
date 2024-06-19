#include <iostream>

using namespace std;

int main()
{
    int room;
    int floor;
    int days;
    int choose;
    int cost1;

    char board [4][5] = {{'-','-','-','-','-'},{'-','-','-','-','-'},{'-','-','-','-','-'},{'-','-','-','-','-'}};

    for (int i = 0; i < 20; i++)
    {
        cout << "Choose from the menu " << endl;
        cout << "1. Book a Room." << endl;
        cout << "2. Show available Rooms." << endl;
        cout << "3. Exit the program." << endl << endl;

        cin >> choose;

        if (choose == 1)
        {
            cout << "Enter the floor no in which you want to occupy a room: (1 - 4)";
            cin >> floor;

            cout << "Enter the room no in which you want to occupy: (1 - 5)";
            cin >> room;

            cout << "For how many days you want to book room? ";
            cin >> days;

                if ((floor == 1) || (floor == 2))
                {
                    cost1 = 10000 * days;
                    cout << "Room successfully booked on floor " << floor << ", Room " << room << endl;
                    cout << "Your total cost is: " << cost1 << " R.S" << endl; 
                }
                else
                {
                    cost1 = 6000 * days;
                    cout << "Room successfully booked on floor " << floor << ", Room " << room << endl;
                    cout << "Your total cost is: " << cost1 << " R.S" << endl;
                }
           
        }
        else if (choose == 2)
        { 
            if (floor == 1)
            {
                if (room == 1 && board[0][0] == '-')
                board[0][0] = '*';
                else if (room == 2 && board[0][1] == '-')
                board[0][1] = '*';
                else if (room == 3 && board[0][2] == '-')
                board[0][2] = '*';
                else if (room == 4 && board[0][3] == '-')
                board[0][3] = '*';
                else if (room == 5 && board[0][4] == '-')
                board[0][4] = '*';
            }

            if (floor == 2)
            {
                if (room == 1 && board[1][0] == '-')
                board[1][0] = '*';
                else if (room == 2 && board[1][1] == '-')
                board[1][1] = '*';
                else if (room == 3 && board[1][2] == '-')
                board[1][2] = '*';
                else if (room == 4 && board[1][3] == '-')
                board[1][3] = '*';
                else if (room == 5 && board[1][4] == '-')
                board[1][4] = '*';
            }

            if (floor == 3)
            {
                if (room == 1 && board[2][0] == '-')
                board[2][0] = '*';
                else if (room == 2 && board[2][1] == '-')
                board[2][1] = '*';
                else if (room == 3 && board[2][2] == '-')
                board[2][2] = '*';
                else if (room == 4 && board[2][3] == '-')
                board[2][3] = '*';
                else if (room == 5 && board[2][4] == '-')
                board[2][4] = '*';
            }

            if (floor == 4)
            {
                if (room == 1 && board[3][0] == '-')
                board[3][0] = '*';
                else if (room == 2 && board[3][1] == '-')
                board[3][1] = '*';
                else if (room == 3 && board[3][2] == '-')
                board[3][2] = '*';
                else if (room == 4 && board[3][3] == '-')
                board[3][3] = '*';
                else if (room == 5 && board[3][4] == '-')
                board[3][4] = '*';
            }

            for(int i=0; i<4; i++)
            {
                cout << "Floor " << i+1 << " :";
                for(int j=0; j<5; j++)
                {
                    cout <<  board[i][j] << " ";
                }
                cout << endl;
            }         
 
        }
        else 
        {
            break;
        }
    }
    return 0;

}