#include <iostream>
#include <string>
#ifndef rps_H
#define rps_H
using namespace std;
class Game
{
    public:
        int letter_check(char let2num){
            switch(let2num){

                case 'S':
                cout << 1 << let2num << endl;
                    return 1;
                case 'P':
                    cout << 2 << let2num << endl;
                    return 2;
                case 'R':
                    cout << 4 << let2num<< endl;
                    return 4;
                default:
                    cout << "default hit" << let2num;
                    return 3;
            }
        }
        int win_check(char in1, char in2){
            return 0;
        }
    public:
        int game_run = 1;
};
class Player: private Game
{
    private:
        char let2num = 'i';  
        int move;
    public:
        
        Player(){
            cout << "enter your move: (R, P, or S) \n";
            cin >> let2num;
            move = letter_check(let2num);
        }
        
};

#endif