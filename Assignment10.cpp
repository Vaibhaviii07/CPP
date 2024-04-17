#include <iostream>

using namespace std;

int main()
{
    
    int a[3]={2,5,7};
    int i;
    for(i=0;i<3;i++)
    {
        cout<<"Elments a["<<i<<"] ="<<a[i]<<endl;
    }
    cout<<"The value stored in array is :";
    for(i=0;i<3;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    cout<<"The value stored into the array in reverse are :";
    for(i=2;i>=0;i--)
    {
        cout<<a[i];
    }

}