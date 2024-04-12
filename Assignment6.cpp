#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the number for table :";
    cin>>b;
    for(c=1;c<=10;c++)
    {
        for(a=1;a<=b;a++)
        {
            cout<<a<<"*"<<c<<"="<<c*a<<"\t\t";
        }
        cout<<endl;
    }
}