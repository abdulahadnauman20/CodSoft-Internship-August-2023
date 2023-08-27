#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    cout<<"It is a Random Number Generator Guessing Game"<<endl;
    int yourguess,tries=0,actualnumber;
    srand(time(0));
    actualnumber=rand()%100+1;
    cout<<"Dear User Kindly Enter your Guess Number"<<endl;
    while (yourguess!=actualnumber)
    {
        cin>>yourguess;
        tries++;
        if(yourguess>actualnumber)
        {
            cout<<"To High Guess Nuumber"<<endl;
        }
        else if(yourguess<actualnumber)
        {
            cout<<"To Low Guess Number"<<endl;
        }
        else
        {
            cout<<"Congratulations You Guessed it Right"<<endl;
            cout<<"You Guessed it Right in "<<tries<<"th try"<<endl;
        }
    }
    
}