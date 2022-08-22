#include <iostream>
#include <cctype>
#ifndef rps_H
#define rps_H
using namespace std;
class Game
{
    private:
        
    public:
        int letter_check(char let2num){
            switch(let2num){

                case 'S':
                    return 1;
                case 'P':
                    return 2;
                case 'R':
                    return 4;
                default:
                    cout << "FAILURE DETECTED: " << let2num;
                    return 3;
            }
        }
        int win_check(int p1, int p2){
            if(p1 == p2){
                return 0;
            }
            switch(p1){
                case 4:
                    if(p2 == 2){
                        return 2;
                    }
                    else{
                        return 1;
                    }
                case 2:
                    if(p2 == 4)
                        return 1;
                    else{
                        return 2;
                    }
                case 1:
                    if(p2 == 4){
                        return 2;
                    }
                    else{
                        return 1;
                    }
                default:
                    return 3;
            }
            /*
            psudeo code
            situation 4:
            2 loss
            1 win
            situation 2:
            4 win
            1 loss
            situation 1:
            4 loss
            2 win
            */
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

    public:
        int game_run = 1;
};
class Player: private Game
{
    private:
        char let2num = 'i';  
        
    public:
        int move;
        Player(){
            cout << "enter your move: (R, P, or S) \n";
            cin >> let2num;
            move = letter_check(toupper(let2num));
        }
        
};

#endif