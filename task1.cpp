#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(static_cast<unsigned int>(time(nullptr)));
    int randomnumber=rand()%100+1;
    int guess=0;
    cout<<"guess the number between 1 and 100:";
    while(guess!=randomnumber){
        cin>>guess;
        if(guess>randomnumber){
            cout<<"too high! Try again:";
        }else if(guess<randomnumber){
            cout<<"too low! Try again:";
        }else{
            cout<<"congratulations! you guessed the correct answer:"<<randomnumber<<endl;
        }
    }
    return 0;
}