#include <iostream>

using namespace std;

int main()
{
    int n1,n2=0,cube;
    cout<<"Enter any number :";
    cin>>n2;
    for(n1=1;n1<=n2;n1++)
    {
        cube = n1*n1*n1;
        cout<<"Number is :"<<n1<<"and cube of the"<<n1<<"is :"<<cube<<endl;
    }

}