#include <iostream>

using namespace std;

int main()
{
    int a[3]={2,5,8};
    int i;
    int sum;
    for(i=0;i<3;i++)
    {
        cout<<"Elements a["<<i<<"]"<<"="<<a[i]<<endl;
        sum+=a[i];
    }
    cout<<"Sum ="<<sum<<endl;
}