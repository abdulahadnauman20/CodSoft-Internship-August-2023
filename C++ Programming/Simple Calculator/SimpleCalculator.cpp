#include<iostream>
using namespace std;
int num1;
int num2;
int main()
{
    float num1,num2,choice,result;
    cout<<"Dear User Kindly Add Two Numbers for Mathematical Operation"<<endl;
    cin>>num1>>num2;
    cout<<"Press 1 for Addition\nPress 2 for Subraction\nPress 3 for Multiplication\nPress 4 for Division"<<endl;
    cin>>choice;
    if(choice==1)
    {
        result=num1+num2;
        cout<<result;
    }
        if(choice==2)
    {
        result=num1-num2;
        cout<<result;
    }
        if(choice==3)
    {
        result=num1*num2;
        cout<<result;
    }
        if(choice==4)
    {
        result=num1/num2;
        cout<<result;
    }
}
