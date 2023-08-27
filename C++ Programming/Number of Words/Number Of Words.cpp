#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    ifstream filee;
    string filename,word;
    int wordcount = 0;

    cout << "Kindly Enter File Name ";
    cin>>filename;

    filee.open(filename.c_str());

    while(!filee.eof())
    {               
        filee >> word; 
        wordcount++;
    }

    cout << "Number of words in file is " << wordcount;
    filee.close();

    return 0;
}
