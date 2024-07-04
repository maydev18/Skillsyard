#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int pcChoice(){
    int c = rand()%3;
    if(c == 0){
        cout << "Computer played stone" << endl;
    }
    else if(c == 1){
        cout << "Computer played paper" << endl;
    }
    else{
        cout << "Computer played scissors" << endl;
    }
    return c;
}
void leaderBoard(int pcWin , int userWin){
    cout << "--------------------------------" << endl;
    cout << "--------------------------------" << endl;
    cout << "Computer - " << pcWin << endl;
    cout << "You - " << userWin << endl;
    cout << "--------------------------------" << endl;
    cout << "--------------------------------" << endl;
}
// 0 = stone , 1 = paper , 2 = scissors
int main(){
    srand(time(0));
    cout << "**************************************" << endl;
    cout << "Welcome to stone paper scissor game" << endl;
    cout << "**************************************" << endl;
    int round = 5 , pcWin = 0 , userWin = 0;
    for(int i = 1 ; i <= 5 ; i++){
        cout << "The current round is : " << i << endl;
        int userChoice = -1;

        cout << "Press 0 for stone " << endl << "Press 1 for paper" << endl << "Press 2 for scissors" << endl;
        cout << "please enter your choice : ";
        cin >> userChoice;

        if(userChoice < 0 || userChoice > 2){
            cout << "You have entered a wrong value, please restart the game again" << endl;
            break;
        }
        int computerChoice = pcChoice();
        if(userChoice == computerChoice){
            pcWin++;
            userWin++;
            cout << "The current round resulted in a draw" << endl;
        }
        else{
            if(userChoice == 0){
                if(computerChoice == 1){
                    pcWin++;
                    cout << "Computer won the current round" << endl;
                }
                else{
                    userWin++;
                    cout << "You won the current round" << endl;
                }
            }
            else if(userChoice == 1){
                if(computerChoice == 0){
                    userWin++;
                    cout << "you won the current round" << endl;
                }
                else{
                    pcWin++;
                    cout << "Computer won the current round" << endl;
                }
            }
            else{
                if(computerChoice == 0){
                    pcWin++;
                    cout << "Computer won the current round" << endl;
                }
                else{
                    userWin++;
                    cout << "You won the current round" << endl;
                }
            }
        }
        leaderBoard(pcWin , userWin);
    }
    if(userWin > pcWin){
        cout << "You won the game, see you next time " << endl;
    }
    else if(pcWin > userWin){
        cout << "Computer won the game , better luck next time" << endl;
    }
    else{
        cout << "The game has drawn" << endl;
    }
    return 0;
}