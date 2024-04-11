#include <iostream>

using namespace std;

int main()
{
    int rollno;
    float phy,chem,computer;
    cout<<"Enter the rollno of the student :";
    cin>>rollno;
    cout<<"Enter the marks of physics :";
    cin>>phy;
    cout<<"Enter the marks of Chemistry:";
    cin>>chem;
    cout<<"Enter the marks of Computer Application :";
    cin>>computer;
    cout<<"Roll no :"<<rollno<<endl;
    cout<<"Marks of physic :"<<phy<<endl;
    cout<<"Marks of chemistry :"<<chem<<endl;
    cout<<"Marks of computer Application :"<<computer<<endl;
    float total = phy+chem+computer;
    cout<<"Total marks="<<total<<endl;
    float per = total/300;
    float percentage = per*100;
    cout<<"percentage = "<<percentage<<endl;
    if(percentage>=80)
        cout<<"Division = First"<<endl;
    else if(percentage>=70)
        cout<<"Division = second"<<endl;
    else if(percentage>=60)
        cout<<"Division = third"<<endl;
    else
        cout<<"DO HARD WORK"<<endl;


}        
