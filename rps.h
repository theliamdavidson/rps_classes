#include <iostream>
#include <string>
#ifndef rps_H
#define rps_H
using namespace std;
class Game
{
    private:
        int letter_check(char num){
            switch(num){
                case 'S':
                    return 1;
                case 'P':
                    return 2;
                case 'R':
                    return 4;
                default:
                    return 3;
            }
        }
        int win_check(char in1, char in2){
            
        }
    public:
        int game_run = 1;
};
class Player
{
    private:
        char move;
    public: 
        Player(){
            cout << "enter your move: (R, P, or S) \n";
            cin >> move;
        }
};

#endif