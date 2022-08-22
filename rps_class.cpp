#include "rps.h"

using namespace std;

int main(){
    Game rps;
    cout << "welcome to rps v2.0 \n";
    while(rps.game_run){
        cout << "Player 1, ";
        Player p1;
        cout << "Player 2, ";
        Player p2;
        rps.win_statement(rps.win_check(p1.move, p2.move));
    }
}
