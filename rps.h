#include <iostream>
#include <cctype>
#ifndef rps_H
#define rps_H
using namespace std;
class Game
{      
    public:
        int win_check(int p1, int p2){
            if(p1 == p2){
                return 0;
            }
            switch(p1){
                case 'R':
                    if(p2 == 'P'){
                        return 2;
                    }
                    else{
                        return 1;
                    }
                case 'P':
                    if(p2 == 'R')
                        return 1;
                    else{
                        return 2;
                    }
                case 'S':
                    if(p2 == 'R'){
                        return 2;
                    }
                    else{
                        return 1;
                    }
                default:
                    return 3;
            }
        }
        void win_statement(int winner){
            char user_num;
            switch(winner){
                case 0:
                    cout << "There's a tie!"<< endl;
                    break;
                case 1:
                    cout << "Player 1 wins!" << endl;
                    break;
                case 2:
                    cout << "Player 2 wins!" << endl;
                    break;
                default:
                    cout << "You broke my game! time to die!";
                    break;
            }
            cout << "Play again? (y/n)";
            cin >> user_num;
            if(toupper(user_num) != 'Y'){
                game_run = 0;
            }
        }
        int game_run = 1;
};
class Player: private Game
{
    public:
        char move;
        Player(){
            cout << "enter your move: (R, P, or S) \n";
            cin >> move;
            //move = letter_check(toupper(let2num));
        }        
};

#endif