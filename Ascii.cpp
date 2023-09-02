#include<iostream>
using namespace std;
int main()
{
    int i;
     cout<< "ASCII Table:"<<endl;
     cout<<"ASCII"<<" |"<<"  "<<"Char"<<endl;
    for(i=0;i<=255;i++)
    {
        cout<< "|"<<"   "<< i <<" |   " << char (i)<<"  |"<<endl;
    }
}