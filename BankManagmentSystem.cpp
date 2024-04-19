#include<iostream>
#include<string>
using namespace std;

int w=1;
class Account
{
    string F_name;
    string L_name;
    string M_name;
    string Address;
    string Username;
    long Password;
    double current_balance=0;
    double deposit_amount=0;
    double withdrawal_amount=0;
    double amount_transfearred=0;
    string reciver_name;
    string new_Name;
    string Acc_type;
    string new_Acctype;
    double new_Password;
    string new_firstName;
    string new_LastName;
    string new_MotherName;
    string new_Address;
    string new_UserName;
    string verify_Username;
    long verify_Password;
    long Acc_Balance=0;
    long curr_Acc_Balance=0;

    public:
    
        void login ()
        {
            cout<<"USERNAME :";
            cin>>Username;
            cout<<"Password :";
            cin>>Password;
            cout<<"ACCOUNT CREATED SUCCESSFULLY....!"<<endl;
            cout<<endl;
        }
        void create_Acc()
        {
            cout<<"--------CREATE ACCOUNT-------"<<endl;
            cout<<"First Name :";
            cin>>F_name;
            cout<<"ok.."<<endl;
            cout<<"Last Name :";
            cin>>L_name;
            cout<<"ok.."<<endl;
            cout<<"Mother Name :";
            cin>>M_name;
            cout<<"ok.."<<endl;
            cout<<"Address :";
            cin>>Address;
            cout<<"ok.."<<endl;
            cout<<"Select Account Type:"<<endl;
            cout<<"1.Saving Account"<<endl<<"2.Current Account:"<<endl<<"0.Back to Main Menu"<<endl;
            int choice;
            cout<<"choice:";
            cin>>choice;
            switch(choice)
            {
            case 1:
                cout<<"1.Saving Account"<<endl;
                cout<<"Saving Account ok...."<<endl;
               login();
                break;
            case 2:
                cout<<"2.Current Account"<<endl;
                login();
                break;
            case 0:
                cout<<"0.Back to Main Menu"<<endl;
                break;
            default:
                cout<<"INVALID INFO"<<endl;
            }
        }


    void check_balance()
    {
        cout<<"SNO   TRANSACTION AMOUNT \t"<<endl;
        cout<<"1.    "<<"DEPOSIT \t\t"<<deposit_amount<<endl;
        cout<<"2.    "<<"WITHDRAWAL \t"<<withdrawal_amount<<endl;
        cout<<"3.    "<<"TRANSFER TO "<<reciver_name<<"\t"<<amount_transfearred<<endl;
        cout<<"--------------------------"<<endl;
        Acc_Balance=curr_Acc_Balance;
        cout<<"  ACCOUNT BALANCE :\t"<<Acc_Balance<<endl;
        cout<<endl;
        cout<<"Ok...."<<endl;
        cout<<"-----------------------------------------"<<endl;

    }
    void Deposit()
    {
        cout<<"CURRENT BALANCE :"<<curr_Acc_Balance<<endl;
        cout<<"ENTER DEPOSIT AMOUNT :";
        cin>>deposit_amount;
        cout<<endl;
        curr_Acc_Balance=curr_Acc_Balance+deposit_amount;
        cout<<"The Current Balance is:"<<curr_Acc_Balance<<endl;
        cout<<"-----------------------------------------"<<endl;
    }
    void Withdrawal()
    {

        cout<<"CURRENT BALANCE :"<<curr_Acc_Balance<<endl;
        cout<<"ENTER WITHDRAWAL AMOUNT :";
        cin>>withdrawal_amount;
        if(curr_Acc_Balance-withdrawal_amount<10)
        {
            cout<<"Current Balance is Low You cannot Withdrawal Ammount"<<endl;
        }
        else
        {
        cout<<endl;
        cout<<"CASH WITHDRAWAL SUCCESSFUL..."<<endl;
        cout<<"ok..."<<endl;
        curr_Acc_Balance=curr_Acc_Balance-withdrawal_amount;
        cout<<"The Current Balance is:"<<curr_Acc_Balance<<endl;
        }
        cout<<"-----------------------------------------"<<endl;
    }
    void Transfer()
    {
        cout<<"CURRENT BALANCE :"<<curr_Acc_Balance<<endl;
        cout<<"ENTER THE AMOUNT TO BE TRANSFERRED :";
        cin>>amount_transfearred;
         if(curr_Acc_Balance-amount_transfearred<10)
        {
            cout<<"Current Balance is Low You cannot Transfer Ammount"<<endl;
        }
        else
        {
        cout<<"TRANSFEARRED TO (username of person)";
        cin>>reciver_name;
        cout<<endl<<endl;
        curr_Acc_Balance=curr_Acc_Balance-amount_transfearred;
        cout<<"AMOUNT SUCCESSFULLY TRANSFERRED...."<<endl<<endl;
        cout<<"ok..."<<endl;
        cout<<"The Current Balance is:"<<curr_Acc_Balance<<endl;
        }
        cout<<"-----------------------------------------"<<endl;
    }
    void Acc_info()
    {
        int i,n=0;
        cout<<"AccountType :"<<Acc_type;
        cout<<endl;
        cout<<"UserName :";
        cin>>verify_Username;
        cout<<"Password :";
        cin>>verify_Password;
        if(Password==verify_Password&&Username==verify_Username)
        {
            cout<<"First Name :"<<F_name<<endl;
            cout<<"Last Name :"<<L_name<<endl;
            cout<<"Mother Name :"<<M_name<<endl;
            cout<<"Address :"<<Address<<endl;
        }
        else
        {
            cout<<"Enter vaild password"<<endl;
        }

        cout<<"-----------------------------------------"<<endl;
    }
    void Update()
    {
        cout<<"1. AccountType"<<endl<<"2. UserName"<<endl<<"3. Password"<<endl<<"4. First Name"<<endl<<"5. Last Name"<<endl<<"6. Mother Name"<<endl<<"7. Address"<<endl<<"0.EXIT"<<endl;
        int choice;
        cout<<"ENETR YOUR CHOICE:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"1. AccountType"<<endl;
                {
                cout<<"-----ACCOUNTTYPE CHANGE-----"<<endl<<endl;
                cout<<"Current AccountType is "<<Acc_type<<endl;
                cout<<"Enter new AccountType :";
                cin>>new_Acctype;
                cout<<"Do you really want to change"<<Acc_type<<"to"<<new_Acctype<<"(y/n)"<<endl;
                char choice;
                cout<<"ENETR YOUR CHOICE:";
                cin>>choice;
                cout<<endl;
                switch(choice)
                {
                case 'y':
                    {
                        Acc_type=new_Acctype;

                        cout<<"......ok Account type is Updated"<<endl;
                        cout<<"Your updated Account type is:"<<Acc_type<<endl;
                         break;
                    }
                    break;
                case 'n':
                    cout<<"The information is not Updated"<<endl;
                    break;
                default:
                    cout<<"INVALID INFO"<<endl;
                    cout<<"-----------------------------------------"<<endl;
                }
                }
                break;
            case 2:
                cout<<"2. UserName"<<endl;
                {
                cout<<"-----USERNAME CHANGE-----"<<endl<<endl;
                cout<<"Current name is "<<Username<<endl;
                cout<<"Enter new Name :";
                cin>>new_UserName;
                cout<<"Do you really want to change"<<Username<<"to"<<new_UserName<<"(y/n)"<<endl;
                char choice;
                cout<<"ENETR YOUR CHOICE:";
                cin>>choice;
                cout<<endl;
                switch(choice)
                {
                case 'y':
                    {
                        Username=new_UserName;

                        cout<<"......ok UserName is Updated"<<endl;
                        cout<<"Your updated Username is :"<<Username<<endl;
                        break;
                    }
                case 'n':
                    cout<<"The information is not Updated"<<endl;
                    break;
                default:
                    cout<<"INVALID INFO"<<endl;
                    cout<<"-----------------------------------------"<<endl;
                }

                }
                break;
            case 3:
                cout<<"3. PASSWORD"<<endl;
                {
                cout<<"-----PASSWORD CHANGE-----"<<endl<<endl;
                cout<<"Current password is "<<Password<<endl;
                cout<<"Enter new Password :";
                cin>>new_Password;
                cout<<"Do you really want to change"<<Password<<"to"<<new_Password<<"(y/n)"<<endl;
                char choice;
                cout<<"ENETR YOUR CHOICE:";
                cin>>choice;
                cout<<endl;
                switch(choice)
                {
                case 'y':
                    {
                        Password=new_Password;

                        cout<<"......ok password is Updated"<<endl;
                        cout<<"Your updated Password is :"<<Password<<endl;
                        cout<<"-----------------------------------------"<<endl;
                         break;
                    }
                case 'n':
                    cout<<"The information is not Updated"<<endl;
                    break;
                default:
                    cout<<"INVALID INFO"<<endl;
                    }
                }
                break;
            case 4:
                cout<<"4. FIRST NAME"<<endl;
                {
                cout<<"-----FIRST NAME CHANGE-----"<<endl<<endl;
                cout<<"Current first name is "<<F_name<<endl;
                cout<<"Enter new first Name :";
                cin>>new_firstName;
                cout<<"Do you really want to change"<<F_name<<"to"<<new_firstName<<"(y/n)"<<endl;
                char choice;
                cout<<"ENETR YOUR CHOICE:";
                cin>>choice;
                cout<<endl;
                switch(choice)
                {
                case 'y':
                    {
                        F_name=new_firstName;
                        cout<<"......ok First name is Updated"<<endl;
                        cout<<"Your updated First Name is :"<<F_name<<endl;
                         break;
                    }
                case 'n':
                    cout<<"The information is not Updated"<<endl;
                    break;
                default:
                    cout<<"INVALID INFO"<<endl;
                    cout<<"-----------------------------------------"<<endl;
                }
                }
                break;
            case 5:
                cout<<"5. Last Name"<<endl;
                {
                cout<<"-----LAST NAME CHANGE-----"<<endl<<endl;
                cout<<"Current last name is "<<L_name<<endl;
                cout<<"Enter new last Name :";
                cin>>new_LastName;
                cout<<"Do you really want to change"<<L_name<<"to"<<new_LastName<<"(y/n)"<<endl;
                char choice;
                cout<<"ENETR YOUR CHOICE:";
                cin>>choice;
                cout<<endl;
                switch(choice)
                {
                case 'y':
                    {
                    L_name=new_LastName;

                        cout<<"......ok Last Name is Updated"<<endl;
                        cout<<"Your updated Last name is :"<<L_name<<endl;
                         break;
                    }
                case 'n':
                    cout<<"The information is not Updated"<<endl;
                    break;
                default:
                    cout<<"INVALID INFO"<<endl;
                    cout<<"-----------------------------------------"<<endl;
                }

                }
                break;
            case 6:
                cout<<"6. Mother Name"<<endl;
                {
                cout<<"-----MOTHER NAME CHANGE-----"<<endl<<endl;
                cout<<"Current name of mother is "<<M_name<<endl;
                cout<<"Enter new mother Name :";
                cin>>new_MotherName;
                cout<<"Do you really want to change"<<M_name<<"to"<<new_MotherName<<"(y/n)"<<endl;
                char choice;
                cout<<"ENETR YOUR CHOICE:";
                cin>>choice;
                cout<<endl;
                switch(choice)
                {
                case 'y':
                    {
                      M_name=new_MotherName;

                        cout<<"......ok Mother Name is Updated"<<endl;
                        cout<<"Your updated Mother name is :"<<M_name<<endl;
                         break;
                    }
                case 'n':
                    cout<<"The information is not Updated"<<endl;
                    break;
                default:
                    cout<<"INVALID INFO"<<endl;
                    cout<<"-----------------------------------------"<<endl;
                }

                }
                break;
            case 7:
                cout<<"Address"<<endl;
                {
                cout<<"-----ADDRESS CHANGE-----"<<endl<<endl;
                cout<<"Current Address is "<<Address<<endl;
                cout<<"Enter new Address :";
                cin>>new_Address;
                cout<<"Do you really want to change"<<Address<<"  to  "<<new_Address<<"(y/n)"<<endl;
                char choice;
                cout<<"ENETR YOUR CHOICE:";
                cin>>choice;
                cout<<endl;
                switch(choice)
                {
                case 'y':
                    {
                        Address=new_Address;
                        cout<<"......ok Address is Updated"<<endl;
                        cout<<"Your updated Address is :"<<Address<<endl;
                         break;
                    }
                case 'n':
                    cout<<"The information is not Updated"<<endl;
                    break;
                default:
                    cout<<"INVALID INFO"<<endl;
                    cout<<"-----------------------------------------"<<endl;
                }

                }

                break;
            default:
                cout<<"INVALID CHOICE"<<endl;
                break;

        }
    }
    int Login_Acc(string v_Username,long v_Password)
    {
       int x=0;
            if(Password == v_Password  && Username.compare(v_Username) == 0 )
            {
                x=1;
                cout<<"LOGIN SUCCESSFUL...."<<endl<<endl;
                cout<<"Welcome "<<F_name<<endl;

                while(w)
                {
                cout<<"1. CHECK BALANCE"<<endl<<"2. DEPOSIT CASH"<<endl<<"3. WITHDRAWAL CASH"<<endl<<"4. TRANSFER MONEY"<<endl<<"5. ACCOUNT INFO"<<endl<<"6. UPDATE INFO"<<endl<<"0.EXIT"<<endl;
                int choice;
                cout<<endl;
                cout<<"ENETR YOUR CHOICE:";
                cin>>choice;
                    switch(choice)
                    {
                        case 1:
                            cout<<"-----BALANCE DASHBOARD----"<<endl<<endl;
                            check_balance();
                            break;
                        case 2:
                            cout<<"-----DEPOSIT CASH-----"<<endl<<endl;
                            Deposit();
                            break;
                        case 3:
                            cout<<"------WITHDRAWAL CASH------"<<endl<<endl;
                            Withdrawal();
                            break;
                        case 4:
                            cout<<"------TRANSFER MONEY-------"<<endl<<endl;
                            Transfer();
                            break;
                        case 5:
                            cout<<"-------ACCOUNT INFO--------"<<endl<<endl;
                            Acc_info();
                            break;
                        case 6:
                            cout<<"------- UPDATE INFO---------"<<endl;
                             Update();
                            break;
                        case 0:
                            cout<<" T H A N K  Y O U!"<<endl<<"FOR USING SYSTEM"<<endl;
                            w=0;
                            break;
                        default:
                            cout<<"INVALID CHOICE"<<endl;
                            break;
                    }

                }
        }
       return x;
      }
};

int main()
{
    int size=20;
    string verify_Username;
    long verify_Password;
    Account A[size];
    int i,z=0,n=0;
             while(w)
             {
                int choice;
                    cout << "1. CREATE NEW ACCOUNT" << endl<< "2. LOGIN" << endl<< "0. EXIT" << endl;

                    cout << "ENTER YOUR CHOICE: ";
                    cin >> choice;
                    switch(choice)
                    {
                        case 1:
                            cout<<"1. CREATE NEW ACCOUNT"<<endl;

                            if(n<size)
                            {
                                A[n].create_Acc();
                                n++;
                            }
                            else
                            {
                                cout<<"OUT OF SIZE"<<endl;
                            }
                            break;
                        case 2:
                            cout<<"2. LOGIN"<<endl;

                             cout<<"UserName :";
                                  cin>>verify_Username;
                                  cout<<"Password :";
                                  cin>>verify_Password;

                            for(i=0;i<=n;i++)
                            {
                               z= A[i].Login_Acc(verify_Username,verify_Password);

                               if(z==1)
                                break;
                            }
                            break;
                        case 0:
                            cout<<" T H A N K  Y O U!"<<endl<<"FOR USING SYSTEM"<<endl;
                            w=0;
                            break;
                        default:
                            cout<<"INVALID CHOICE"<<endl;
                            break;
                    }
                }
}
