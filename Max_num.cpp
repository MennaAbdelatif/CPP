#include<iostream>
using namespace std;
int main()
{
int n1,n2,n3;
cout<<"Enter the three numbers: ";
cin>>n1>>n2>>n3;
if(n1>n2 && n1>n3)
{
    cout<<"The maximum number is: "<<n1;
}
 if(n2>n1 && n2>n3)
{
    cout<<"The maximum number is: "<<n2;
}
 if(n3>n1 && n3>n2)
{
    cout<<"The maximum number is: "<<n3;
}
}