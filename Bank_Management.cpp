#include<iostream>
using namespace std;
class Account
{
public:
    char name[20];
    int account_number;
    char account_type[1];

    void getAccountDetails()
    {
        cout<<"Enter your name : ";
        cin>>name;
        cout << "Enter your account number : ";
        cin>>account_number;
    }

    void displayDetails()
    {
        cout<<"Name : " <<name<<endl;
        cout<<"Account Number : " <<account_number<<endl;
    }
};
class current : public Account
{
public:
    int balance = 3219;
    int deposite, withdraw;

    void c_display()
    {
        cout<<"Your account balance :"<<balance;
    }
    void c_deposite()
    {
        cout<<"Enter amount to deposite : ";
        cin>>deposite;

        balance += deposite;
        cout<<"Balance amount is : "<<balance;
    }
    void c_withdraw()
    {
        cout<<"Enter amount to withdraw : ";
        cin>>withdraw;
        if (balance > 1000)
        {
            balance -= withdraw;
            cout<<"Balance amount is : "<<balance;
        }
        else
        {
            cout<<"Insufficient balance\n";
        }
    }
    void c_exit(){
        cout<<"Thank you for using our sevice........!";
    }
};
class saving : public Account
{

public:
    int balance = 5000;
    int deposite, withdraw;

    void s_display()
    {
        cout<<"Your account balance :"<<balance;
    }
    void s_deposite()
    {
        cout<<"Enter amount to deposite : ";
        cin>>deposite;

        balance += deposite;
        cout<<"Balance amount is : "<<balance;
    }
    void s_withdraw()
    {
        cout<<"Enter amount to withdraw : ";
        cin>>withdraw;
        if (balance > 500)
        {
            balance -= withdraw;
            cout<<"Balance amount is : "<<balance;
        }
        else
        {
            cout<<"Insufficient balance\n";
        }
    }
    void s_exit(){
        cout<<"Thank you for using our service.......!";
    }
};

int main()
{
    saving s;
    current c;
    char ch;
    int n;
    cout<<"Enter your account type : \n";
    cout<<"Enter 's' for saving account or 'c' for current account : ";
    cin>>ch;
    if (ch == 's' || ch == 'S')
    {
        s.getAccountDetails();

        s.displayDetails();

        while(1){
        cout<<"Enter 1 for display amount \nEnter 2 for deposite money \nEnter 3 for withdraw money \nEnter 4 for exit\n";
        cin>>n;
        switch (n)
        {
        case 1:
            s.s_display();
            break;
        case 2:
            s.s_deposite();
            break;
        case 3:
            s.s_withdraw();
            break;
        case 4:
            s.s_exit();
            break;    
        default:
            cout<<"You have entered wrong input";
        }
      }
    }

    if (ch == 'c' || ch == 'C')
    {
         c.getAccountDetails();

        c.displayDetails();
        while(1){
        cout << "Enter 1 for display amount \n Enter 2 for deposite money \n Enter 3 for withdraw money \n Enter 4 for exit";
        cin>>n;
    
        switch (n)
        {
        case 1:
            c.c_display();
            break;
        case 2:
            c.c_deposite();
            break;
        case 3:
            c.c_withdraw();
            break;
        case 4:
            c.c_exit();    
        default:
            cout<<"You have entered wrong input";
        }
      }
   }
}