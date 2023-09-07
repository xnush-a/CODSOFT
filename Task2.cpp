#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void random()
{
    int guess,score=0;
    srand(time(NULL));
    int num=rand() % 10 + 1;
    do{
        cout<<"Enter your guess(1-10): ";
        cin>>guess;
        if(guess>num)
        cout<<"Too High!"<<endl;
        else if(guess<num)
        cout<<"Too Low!"<<endl;
        else
        cout<<"CORRECT GUESS!"<<endl;
        score++;
    }while(guess!=num);
    cout<<"* * * * * * * * * * * * * *"<<endl;
    cout<<"* The number is     : "<<num<<"   *"<<endl;
    cout<<"* Number of Guesses : "<<score<<"   *"<<endl;
    cout<<"* * * * * * * * * * * * * *"<<endl;
}
int main()
{
    int l;
    while(1)
    {
        cout<<"Enter :1 to start game,and\n       0 to end"<<endl;
        cin>>l;
        if(l==0)
        break;
        if(l==1)
        {
            random();
        }
    }  
    return 0;
}