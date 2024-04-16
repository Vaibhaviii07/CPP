#include <iostream>
using namespace std;
class Employee
{
    string name;
    int year;
    int salary;
    string address;
    public:
    void setinfo()
    {
        cout<<"Enter name of employee :";
        cin>>name;
        cout<<"Enter year of joining :";
        cin>>year;
        cout<<"Enter salary of employee :";
        cin>>salary;
        cout<<"Enter address of employee :";
        cin>>address;
    }
    void getinfo()
    {
        cout<<"NAME   "<<"YEAR OF JOINING   "<<"SALARY     "<<"ADDRESS"<<endl<<name<<"\t"<<year<<"\t\t"<<salary<<"\t\t"<<address<<endl;
    }
};           
int main()
{
     Employee e1;
     e1.setinfo();
     e1.getinfo();

}