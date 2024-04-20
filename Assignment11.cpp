#include <iostream>
using namespace std;
class Student {
public:
    string name;
    int roll_no;
   
    void setData() {
        cout<<"Enter your name :";
        cin>>name;
        cout<<"Enter your roll_no :";
        cin>>roll_no;
    }
    // void getData()
    // {
    //     cout<<"Your name :"<<name<<endl;
    //     cout<<"Your roll_no :"<<roll_no<<endl;
    // }
};
class Clerk :public Student
{
    int fees;
    int result;
    public:
    void setInfo()
    {
        cout<<"Enter fees of Student:";
        cin>>fees;
        cout<<"Enter result of Student :";
        cin>>result;
    }
    void getInfo()
    {
        cout<<"Your name :"<<name<<endl;
        cout<<"Your roll_no :"<<roll_no<<endl;
        cout<<"fees of Student:"<<fees<<endl;
        cout<<"result of Student :"<<result<<endl;
    }
};

int main() {
    
    Clerk c;
    c.setData();
    c.setInfo();
    c.getInfo();
    return 0;
}
