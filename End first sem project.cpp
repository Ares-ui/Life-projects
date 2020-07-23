#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

  string adm;
    string user;
    string newuser;//newuser account
    string userpass;
    string admpass;
    string newpass;//newuser password
    int bnkaccount;
    int bnkaccount2;
    int bnkaccountnew;
    string user2;
    string user2pass;
     string username[3]{"admin","martin","victor"};
     string password[3]{"admin123","martin1234","kingvictor"};
   int useraccount;//money in user account
   int user2account;//money in user2 account
   int newaccount;//money in new users account
   string enterusername;
   string enterpassword;

void maincode();
void loginconfirm();
void usersearch(string look)
{
     ifstream fin;//reading from the file

    fin.open("usersDB.txt");

    fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;

    for(int i=0;i<100;i++)
        {
    if (look==user||look==user2||look==newuser){
        cout<<"User found" <<endl;
        break;}

       else if(look!=user||look!=user2||look!=newuser)
       {
            cout<<"User not found" <<endl;
        cout<<"Enter name of user to be searched for in database: ";
        cin>>look;
        if (look==user2||look==user||look==newuser)
            cout<<"User found" <<endl;
            break;
       }

            }

    fin.close();

    system("pause");
    system("cls");
}

int main()
{
    int option;
    int option2;
string query;

    ifstream fin;//reading from the file
    ofstream fout;//writing to the file

    fin.open("usersDB.txt");

    fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;

    cout<<"*****Welcome to BBIT2020 E-CASH SERVICES*****" <<endl;
    cout<<"1. Normal user login\n";
    cout<<"2. Administrator login\n";
    cout<<"3. Search\n";

    cout<<"Choose an option to proceed:";
    cin>>option;
    cout<<"----------------------------------------------------------\n";

    while(option>3||option<1){
        cout<<"Invalid option!" <<endl;
        cout<<"Choose an option to proceed: ";
        cin>>option;
        if(option!=true){
            cout<<"***System error***" <<endl;

            system("pause");
        system("cls");
     maincode();}

        }

    switch(option)
    {
    case 1:
        cout<<"Welcome to the Registration and Deposit page" <<endl;
        cout<<"Enter username and password." <<endl;
        break;

    case 2:
        cout<<"Welcome to the Registration and Deposit page" <<endl;
        cout<<"Enter administrator username and password." <<endl;
        break;

    case 3:
     cout<<"Enter name of user to be searched for in database: ";
     cin>>query;
     usersearch(query);
     maincode();
    }

    cout<<"Enter username:";
    cin>>enterusername;
    cout<<"Enter password:";
    cin>>enterpassword;
    cout<<"----------------------------------------------------------\n";

loginconfirm();

fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;

    cout<<"Enter option to proceed:";
    cin>>option2;

    int money;//deposit amount
    long int id;
    string email;
    int amount;//withdraw amount
    int age;
    string gender;

    while(option2>5){
         cout<<"Invalid option!" <<endl;
     cout<<"Enter option to proceed: ";
     cin>>option2;}

 if(enterusername==user){
                switch(option2)
                {

        case 1:
            cout<<"Enter amount you would like to withdraw: ";
            cin>>amount;
            while(amount>useraccount||amount<0)
            {
                cout<<"Error!"<<setw(20)<<"Insufficient funds\n";
                cout<<"Enter amount you would like to withdraw: ";
                cin>>amount;
            }
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==userpass)
                 cout<<"You have withdrawn: " <<amount <<" Your new amount is: " <<useraccount-amount <<endl;

if(enterpassword!=userpass)
                for(int i=0;i<=100;i++)
                    {
                        bnkaccount=useraccount-amount;

                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==userpass)
                              cout<<"You have withdrawn: " <<amount <<" Your new amount is: " <<useraccount-amount <<endl;
                            break;
                    }

                    fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;

            bnkaccount=useraccount-amount;

             fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<bnkaccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;

        case 2:
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==userpass)
                cout<<"You have "<<useraccount  <<" in your account" <<endl;
            if(enterpassword!=userpass)
                for(int i=0;i<=100;i++)
                    {
                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==userpass)
                        cout<<"You have "<<useraccount  <<" in your account" <<endl;
                            break;
                    }

    fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;


             fout.open("usersDB.txt");

           fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<bnkaccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;

        case 3:
            cout<<"Type in email address:";
        cin>>email;
        cout<<"A verification link has been sent to your email.Click it for verification" <<endl;
        cout<<"Verification successful!" <<endl;
        cout<<"Enter new password: ";
        cin>>password[1];
        cout<<"Confirm new password: ";
        cin>>password[1];
        cout<<"You have successfully changed your password!\n";
         fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<bnkaccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;
    fout.close();

        system("pause");
     system("cls");
     maincode();

        break;

        case 4:
            cout<<"Enter current username:\n";
            cin>>username[1];
            cout<<"Enter new username\n";
            cin>>username[1];
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==userpass)
                cout<<"Username is now: " <<username[1] <<endl;
            if(enterpassword!=userpass)
            {
                for(int i=0;i<=100;i++){
                cout<<"Incorrect password" <<endl;
                cout<<"Enter password";
                cin>>enterpassword;
                if(enterpassword==userpass)
                cout<<"Username is now: " <<username[1] <<endl;
                    break;
            }}

             fout.open("usersDB.txt");

           fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<bnkaccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;
                }}
              else if(enterusername==user2)
                {
                    switch (option2){
                        case 1:
            cout<<"Enter amount you would like to withdraw: ";
            cin>>amount;
            while(amount>user2account||amount<0)
            {
                cout<<"Error!"<<setw(20)<<"Insufficient funds\n";
                cout<<"Enter amount you would like to withdraw: ";
                cin>>amount;
                if(amount<user2account)
                    break;
            }
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==user2pass)
                  cout<<"You have withdrawn: " <<amount <<" Your new amount is: " <<user2account-amount <<endl;
            else if(enterpassword!=user2pass)
                {
                    for(int i=0;i<=100;i++)
                    {
                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==user2pass)
                        cout<<"You have withdrawn: " <<amount <<" Your new amount is: " <<user2account-amount <<endl;
                            break;
                    }
                }

            else{
                    bnkaccount2=user2account-amount;
                    for(int i=0;i<=5;i++)
                    {
                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==user2pass)
                            break;
                    }
                    }
            bnkaccount2=user2account-amount;

    fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;

             fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<bnkaccount2 <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;

        case 2:
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==user2pass)
                cout<<"You have "<<user2account  <<" in your account" <<endl;
            if(enterpassword!=user2pass)
                for(int i=0;i<=5;i++)
                    {
                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==user2pass)
                        cout<<"You have "<<user2account  <<" in your account" <<endl;
                            break;
                    }

    fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;

             fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<bnkaccount2 <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;
    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;

        case 3:
            cout<<"Type in email address:";
        cin>>email;
        cout<<"A verification link has been sent to your email.Click it for verification" <<endl;
        cout<<"Verification successful!" <<endl;
        cout<<"Enter new password: ";
        cin>>password[2];
        cout<<"Confirm new password: ";
        cin>>password[2];
        cout<<"You have successfully changed your password!\n";
         fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<bnkaccount2 <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

        system("pause");
     system("cls");
     maincode();

        break;

        case 4:
            cout<<"Enter current username:\n";
            cin>>username[2];
            cout<<"Enter new username\n";
            cin>>username[2];
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==user2pass)
                cout<<"Username is now: " <<username[2] <<endl;
            if(enterpassword!=user2pass)
                for(int i=0;i<=5;i++)
                    {
                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==user2pass)
                        cout<<"Username is now: " <<username[2] <<endl;
                            break;
                    }

             fout.open("usersDB.txt");

         fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<bnkaccount2 <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;
            }
                }

                else if(enterusername==newuser){
                switch(option2)
                {

        case 1:
            cout<<"Enter amount you would like to withdraw: ";
            cin>>amount;
            while(amount>newaccount||amount<0)
            {
                cout<<"Error!"<<setw(20)<<"Insufficient funds\n";
                cout<<"Enter amount you would like to withdraw: ";
                cin>>amount;
            }
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==newpass)
                 cout<<"You have withdrawn: " <<amount <<" Your new amount is: " <<newaccount-amount <<endl;

if(enterpassword!=newpass)
                for(int i=0;i<=100;i++)
                    {
                        bnkaccountnew=newaccount-amount;

                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==newpass)
                              cout<<"You have withdrawn: " <<amount <<" Your new amount is: " <<newaccount-amount <<endl;
                            break;
                    }

                    fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;

            bnkaccountnew=newaccount-amount;

             fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<bnkaccountnew <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;

        case 2:
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==newpass)
                cout<<"You have "<<newaccount  <<" in your account" <<endl;
            if(enterpassword!=newpass)
                for(int i=0;i<=100;i++)
                    {
                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==newpass)
                        cout<<"You have "<<newaccount  <<" in your account" <<endl;
                            break;
                    }

    fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;


             fout.open("usersDB.txt");

           fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<bnkaccountnew <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;

        case 3:
            cout<<"Type in email address:";
        cin>>email;
        cout<<"A verification link has been sent to your email.Click it for verification" <<endl;
        cout<<"Verification successful!" <<endl;
        cout<<"Enter new password: ";
        cin>>newpass;
        cout<<"Confirm new password: ";
        cin>>newpass;
        cout<<"You have successfully changed your password!\n";
         fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<bnkaccountnew <<endl;
    fout.close();

        system("pause");
     system("cls");
     maincode();

        break;

        case 4:
            cout<<"Enter current username:\n";
            cin>>newuser;
            cout<<"Enter new username\n";
            cin>>newuser;
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==newpass)
                cout<<"Username is now: " <<newuser <<endl;
            if(enterpassword!=newpass)
            {
                for(int i=0;i<=100;i++){
                cout<<"Incorrect password" <<endl;
                cout<<"Enter password";
                cin>>enterpassword;
                if(enterpassword==newpass)
                cout<<"Username is now: " <<newuser <<endl;
                    break;
            }}

             fout.open("usersDB.txt");

           fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<bnkaccountnew <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;
                }}

                else {
    switch(option2)
    {

    case 1:
        cout<<"Enter name of client:";
        cin>>enterusername;

        if(enterusername==user)
        {
        cout<<"Enter amount you want to deposit:";
        cin>>money;
        cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<useraccount+money <<endl;

        else{
            for(int i=0;i<=100;i++)
            {
                cout<<"Incorrect password" <<endl;
                cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<useraccount+money <<endl;
        break;
            }}

        bnkaccount=useraccount+money;

         fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<bnkaccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

        system("pause");
     system("cls");
     maincode();
        }
        else if(enterusername==user2)
        {
           cout<<"Enter amount you want to deposit:";
        cin>>money;
        cout<<"Enter password: ";
        cin>>enterpassword;
        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<user2account+money <<endl;

        else{
            for(int i=0;i<=100;i++)
            {
                 bnkaccount2=user2account+money;
                cout<<"Incorrect password" <<endl;
                cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<user2account+money <<endl;

        break;
            }}

        bnkaccount2=user2account+money;

         fout.open("usersDB.txt");

fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<bnkaccount2 <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

        system("pause");
     system("cls");
     maincode();
       break;
        }

        else if(enterusername==newuser)
        {
        cout<<"Enter amount you want to deposit:";
        cin>>money;
        cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<newaccount+money <<endl;

        else{
            for(int i=0;i<=100;i++)
            {
                cout<<"Incorrect password" <<endl;
                cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<newaccount+money <<endl;
        break;
            }}

        bnkaccountnew=newaccount+money;

         fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<bnkaccountnew <<endl;

    fout.close();

        system("pause");
     system("cls");
     maincode();
        }

       else if(enterusername!=user||enterusername!=user2||enterusername!=newuser)
        {
            while(enterusername!=user||enterusername!=user2||enterusername!=newuser){
            cout<<"User not found!" <<endl;
            cout<<"Try again" <<endl;
            cout<<"Enter name of client:";
        cin>>enterusername;
        if(enterusername==user){
            cout<<"Enter amount you want to deposit:";
        cin>>money;
        cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<useraccount+money <<endl;

        else{
            for(int i=0;i<=100;i++)
            {
                bnkaccount=useraccount+money;

                cout<<"Incorrect password!" <<endl;
                cout<<"*Try again*" <<endl;
                cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<useraccount+money <<endl;
        break;
            }}

        bnkaccount=useraccount+money;

         fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<bnkaccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

        system("pause");
     system("cls");
     maincode();
            break;
        }
            if(enterusername==user2)
            {
                cout<<"Enter amount you want to deposit:";
        cin>>money;
        cout<<"Enter password: ";
        cin>>enterpassword;
        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<user2account+money <<endl;

        else{
            for(int i=0;i<=100;i++)
            {
                cout<<"Incorrect password" <<endl;
                cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<user2account+money <<endl;

        break;
            }}

        bnkaccount2=user2account+money;

         fout.open("usersDB.txt");

fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<bnkaccount2 <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

        system("pause");
     system("cls");
     maincode();
       break;
            }

            if(enterusername==newuser)
            {
                cout<<"Enter amount you want to deposit:";
        cin>>money;
        cout<<"Enter password: ";
        cin>>enterpassword;
        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<newaccount+money <<endl;

        else{
            for(int i=0;i<=100;i++)
            {
                cout<<"Incorrect password" <<endl;
                cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<newaccount+money <<endl;

        break;
            }}

        bnkaccountnew=newaccount+money;

         fout.open("usersDB.txt");

fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<bnkaccountnew <<endl;

    fout.close();

        system("pause");
     system("cls");
     maincode();
       break;
            }
        }}
break;
    case 2:
        cout<<"Type in new user's username:";
        cin>>newuser;
        cout<<"Type in new user's password: ";
        cin>>newpass;
        cout<<"Enter age: ";
        cin>>age;
        if(age>=18)
        {
            cout<<"Male/Female?\n";
            cin>>gender;
            cout<<"Enter ID number: ";
        cin>>id;
        cout<<newuser <<" has now been registered as a user of BBIT2020 E-CASH SERVICES" <<endl;
        }

        else
        {
            cout<<"User is not old enough";
        }
         fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();


system("pause");
     system("cls");
     maincode();

        break;

    case 3:
        cout<<"Type in email address:";
        cin>>email;
        cout<<"A verification link has been sent to your email.Click it for verification" <<endl;
        cout<<"Verification successful!" <<endl;
        cout<<"Enter new password: ";
        cin>>password[0];
        cout<<"Confirm new password: ";
        cin>>password[0];
        cout<<"You have successfully changed your password!\n";
         fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

        system("pause");
     system("cls");
     maincode();

        break;

        case 4:
            cout<<"Enter current username:\n";
            cin>>username[0];
            cout<<"Enter new username\n";
            cin>>username[0];
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==admpass)
                cout<<"Admin username is now " <<username[0] <<endl;
             if(enterpassword!=admpass)
                for(int i=0;i<=5;i++)
                    {
                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==admpass)
                        cout<<"Admin username is now " <<username[0] <<endl;
                            break;
                    }

             fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

        break;

        case 5:
            char shutdown;
            cout<<"Shutdown the system? y/n" <<endl;
            cin>>shutdown;
            if(shutdown=='y')
            {
                system("cls");
            }
            if(shutdown=='n')
            {
                system("cls");
                maincode();
            }
break;
            }}

 return 0;
    }
void loginconfirm()
{
    ifstream fin;//reading from the file

    fin.open("usersDB.txt");

fin>>adm>>admpass>>user>>userpass>>bnkaccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;


for(int i=0;i<5;i++)
{
    if(enterusername==adm && enterpassword==admpass)
        {
            cout<<"Welcome admin" <<endl;
            cout<<"1. Deposit money for client\n";
            cout<<"2. Register new client\n";
            cout<<"3. Reset your password\n";
            cout<<"4. Change username\n";
            cout<<"5. Shutdown the system\n";

            break;
    }

 if(enterusername==user && enterpassword==userpass)
    {
        cout<<"Welcome new user" <<endl;
         cout<<"1. Withdraw cash\n";
         cout<<"2. Check balance\n";
         cout<<"3. Reset your password\n";
         cout<<"4. Change username\n";
         break;
    }

    if(enterusername==user2 && enterpassword==user2pass)
    {
        cout<<"Welcome new user" <<endl;
         cout<<"1. Withdraw cash\n";
         cout<<"2. Check balance\n";
         cout<<"3. Reset your password\n";
         cout<<"4. Change username\n";
         break;
    }

     if(enterusername==newuser && enterpassword==newpass)
    {
        cout<<"Welcome new user" <<endl;
         cout<<"1. Withdraw cash\n";
         cout<<"2. Check balance\n";
         cout<<"3. Reset your password\n";
         cout<<"4. Change username\n";
         break;
    }

    else{
     cout<<"Incorrect username or password\n";
    cout<<"Enter username:";
    cin>>enterusername;
    cout<<"Enter password:";
    cin>>enterpassword;
    if(enterusername==adm && enterpassword==admpass)
    {
       cout<<"Welcome admin" <<endl;
            cout<<"1. Deposit money for client\n";
            cout<<"2. Register new client\n";
            cout<<"3. Reset your password\n";
            cout<<"4. Change username\n";

            break;
    }
    if(enterusername==user && enterpassword==userpass || enterusername==user2 && enterpassword==user2pass || enterusername==newuser && enterpassword==newpass)
        {
        cout<<"Welcome new user" <<endl;
         cout<<"1. Withdraw cash\n";
         cout<<"2. Check balance\n";
         cout<<"3. Reset your password\n";
         cout<<"4. Change username\n";
         break;
        }
    }
}

    fin.close();
}

void maincode()
{
 int option;
    int option2;
string query;

    ifstream fin;//reading from the file
    ofstream fout;//writing to the file

    fin.open("usersDB.txt");

    fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;

    cout<<"*****Welcome to BBIT2020 E-CASH SERVICES*****" <<endl;
    cout<<"1. Normal user login\n";
    cout<<"2. Administrator login\n";
    cout<<"3. Search\n";

    cout<<"Choose an option to proceed:";
    cin>>option;
    cout<<"----------------------------------------------------------\n";

    while(option>3||option<1){
        cout<<"Invalid option!" <<endl;
        cout<<"Choose an option to proceed: ";
        cin>>option;
        if(option!=true){
            cout<<"***System error***" <<endl;

            system("pause");
        system("cls");
     maincode();}

        }

    switch(option)
    {
    case 1:
        cout<<"Welcome to the Registration and Deposit page" <<endl;
        cout<<"Enter username and password." <<endl;
        break;

    case 2:
        cout<<"Welcome to the Registration and Deposit page" <<endl;
        cout<<"Enter administrator username and password." <<endl;
        break;

    case 3:
     cout<<"Enter name of user to be searched for in database: ";
     cin>>query;
     usersearch(query);
     maincode();
    }

    cout<<"Enter username:";
    cin>>enterusername;
    cout<<"Enter password:";
    cin>>enterpassword;
    cout<<"----------------------------------------------------------\n";

loginconfirm();

fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;

    cout<<"Enter option to proceed:";
    cin>>option2;

    int money;//deposit amount
    long int id;
    string email;
    int amount;//withdraw amount
    int age;
    string gender;

    while(option2>5){
         cout<<"Invalid option!" <<endl;
     cout<<"Enter option to proceed: ";
     cin>>option2;}

 if(enterusername==user){
                switch(option2)
                {

        case 1:
            cout<<"Enter amount you would like to withdraw: ";
            cin>>amount;
            while(amount>useraccount||amount<0)
            {
                cout<<"Error!"<<setw(20)<<"Insufficient funds\n";
                cout<<"Enter amount you would like to withdraw: ";
                cin>>amount;
            }
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==userpass)
                 cout<<"You have withdrawn: " <<amount <<" Your new amount is: " <<useraccount-amount <<endl;

if(enterpassword!=userpass)
                for(int i=0;i<=100;i++)
                    {
                        bnkaccount=useraccount-amount;

                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==userpass)
                              cout<<"You have withdrawn: " <<amount <<" Your new amount is: " <<useraccount-amount <<endl;
                            break;
                    }

                    fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;

            bnkaccount=useraccount-amount;

             fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<bnkaccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;

        case 2:
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==userpass)
                cout<<"You have "<<useraccount  <<" in your account" <<endl;
            if(enterpassword!=userpass)
                for(int i=0;i<=100;i++)
                    {
                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==userpass)
                        cout<<"You have "<<useraccount  <<" in your account" <<endl;
                            break;
                    }

    fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;


             fout.open("usersDB.txt");

           fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<bnkaccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;

        case 3:
            cout<<"Type in email address:";
        cin>>email;
        cout<<"A verification link has been sent to your email.Click it for verification" <<endl;
        cout<<"Verification successful!" <<endl;
        cout<<"Enter new password: ";
        cin>>password[1];
        cout<<"Confirm new password: ";
        cin>>password[1];
        cout<<"You have successfully changed your password!\n";
         fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<bnkaccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;
    fout.close();

        system("pause");
     system("cls");
     maincode();

        break;

        case 4:
            cout<<"Enter current username:\n";
            cin>>username[1];
            cout<<"Enter new username\n";
            cin>>username[1];
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==userpass)
                cout<<"Username is now: " <<username[1] <<endl;
            if(enterpassword!=userpass)
            {
                for(int i=0;i<=100;i++){
                cout<<"Incorrect password" <<endl;
                cout<<"Enter password";
                cin>>enterpassword;
                if(enterpassword==userpass)
                cout<<"Username is now: " <<username[1] <<endl;
                    break;
            }}

             fout.open("usersDB.txt");

           fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<bnkaccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;
                }}
              else if(enterusername==user2)
                {
                    switch (option2){
                        case 1:
            cout<<"Enter amount you would like to withdraw: ";
            cin>>amount;
            while(amount>user2account||amount<0)
            {
                cout<<"Error!"<<setw(20)<<"Insufficient funds\n";
                cout<<"Enter amount you would like to withdraw: ";
                cin>>amount;
                if(amount<user2account)
                    break;
            }
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==user2pass)
                  cout<<"You have withdrawn: " <<amount <<" Your new amount is: " <<user2account-amount <<endl;
            else if(enterpassword!=user2pass)
                {
                    for(int i=0;i<=100;i++)
                    {
                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==user2pass)
                        cout<<"You have withdrawn: " <<amount <<" Your new amount is: " <<user2account-amount <<endl;
                            break;
                    }
                }

            else{
                    bnkaccount2=user2account-amount;
                    for(int i=0;i<=5;i++)
                    {
                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==user2pass)
                            break;
                    }
                    }
            bnkaccount2=user2account-amount;

    fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;

             fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<bnkaccount2 <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;

        case 2:
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==user2pass)
                cout<<"You have "<<user2account  <<" in your account" <<endl;
            if(enterpassword!=user2pass)
                for(int i=0;i<=5;i++)
                    {
                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==user2pass)
                        cout<<"You have "<<user2account  <<" in your account" <<endl;
                            break;
                    }

    fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;

             fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<bnkaccount2 <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;
    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;

        case 3:
            cout<<"Type in email address:";
        cin>>email;
        cout<<"A verification link has been sent to your email.Click it for verification" <<endl;
        cout<<"Verification successful!" <<endl;
        cout<<"Enter new password: ";
        cin>>password[2];
        cout<<"Confirm new password: ";
        cin>>password[2];
        cout<<"You have successfully changed your password!\n";
         fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<bnkaccount2 <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

        system("pause");
     system("cls");
     maincode();

        break;

        case 4:
            cout<<"Enter current username:\n";
            cin>>username[2];
            cout<<"Enter new username\n";
            cin>>username[2];
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==user2pass)
                cout<<"Username is now: " <<username[2] <<endl;
            if(enterpassword!=user2pass)
                for(int i=0;i<=5;i++)
                    {
                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==user2pass)
                        cout<<"Username is now: " <<username[2] <<endl;
                            break;
                    }

             fout.open("usersDB.txt");

         fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<bnkaccount2 <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;
            }
                }

                else if(enterusername==newuser){
                switch(option2)
                {

        case 1:
            cout<<"Enter amount you would like to withdraw: ";
            cin>>amount;
            while(amount>newaccount||amount<0)
            {
                cout<<"Error!"<<setw(20)<<"Insufficient funds\n";
                cout<<"Enter amount you would like to withdraw: ";
                cin>>amount;
            }
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==newpass)
                 cout<<"You have withdrawn: " <<amount <<" Your new amount is: " <<newaccount-amount <<endl;

if(enterpassword!=newpass)
                for(int i=0;i<=100;i++)
                    {
                        bnkaccountnew=newaccount-amount;

                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==newpass)
                              cout<<"You have withdrawn: " <<amount <<" Your new amount is: " <<newaccount-amount <<endl;
                            break;
                    }

                    fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;

            bnkaccountnew=newaccount-amount;

             fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<bnkaccountnew <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;

        case 2:
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==newpass)
                cout<<"You have "<<newaccount  <<" in your account" <<endl;
            if(enterpassword!=newpass)
                for(int i=0;i<=100;i++)
                    {
                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==newpass)
                        cout<<"You have "<<newaccount  <<" in your account" <<endl;
                            break;
                    }

    fin>>adm>>admpass>>user>>userpass>>useraccount>>user2>>user2pass>>user2account>>newuser>>newpass>>newaccount;


             fout.open("usersDB.txt");

           fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<bnkaccountnew <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;

        case 3:
            cout<<"Type in email address:";
        cin>>email;
        cout<<"A verification link has been sent to your email.Click it for verification" <<endl;
        cout<<"Verification successful!" <<endl;
        cout<<"Enter new password: ";
        cin>>newpass;
        cout<<"Confirm new password: ";
        cin>>newpass;
        cout<<"You have successfully changed your password!\n";
         fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<bnkaccountnew <<endl;
    fout.close();

        system("pause");
     system("cls");
     maincode();

        break;

        case 4:
            cout<<"Enter current username:\n";
            cin>>newuser;
            cout<<"Enter new username\n";
            cin>>newuser;
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==newpass)
                cout<<"Username is now: " <<newuser <<endl;
            if(enterpassword!=newpass)
            {
                for(int i=0;i<=100;i++){
                cout<<"Incorrect password" <<endl;
                cout<<"Enter password";
                cin>>enterpassword;
                if(enterpassword==newpass)
                cout<<"Username is now: " <<newuser <<endl;
                    break;
            }}

             fout.open("usersDB.txt");

           fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<bnkaccountnew <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

            break;
                }}

                else {
    switch(option2)
    {

    case 1:
        cout<<"Enter name of client:";
        cin>>enterusername;

        if(enterusername==user)
        {
        cout<<"Enter amount you want to deposit:";
        cin>>money;
        cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<useraccount+money <<endl;

        else{
            for(int i=0;i<=100;i++)
            {
                cout<<"Incorrect password" <<endl;
                cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<useraccount+money <<endl;
        break;
            }}

        bnkaccount=useraccount+money;

         fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<bnkaccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

        system("pause");
     system("cls");
     maincode();
        }
        else if(enterusername==user2)
        {
           cout<<"Enter amount you want to deposit:";
        cin>>money;
        cout<<"Enter password: ";
        cin>>enterpassword;
        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<user2account+money <<endl;

        else{
            for(int i=0;i<=100;i++)
            {
                 bnkaccount2=user2account+money;
                cout<<"Incorrect password" <<endl;
                cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<user2account+money <<endl;

        break;
            }}

        bnkaccount2=user2account+money;

         fout.open("usersDB.txt");

fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<bnkaccount2 <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

        system("pause");
     system("cls");
     maincode();
       break;
        }

        else if(enterusername==newuser)
        {
        cout<<"Enter amount you want to deposit:";
        cin>>money;
        cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<newaccount+money <<endl;

        else{
            for(int i=0;i<=100;i++)
            {
                cout<<"Incorrect password" <<endl;
                cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<newaccount+money <<endl;
        break;
            }}

        bnkaccountnew=newaccount+money;

         fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<bnkaccountnew <<endl;

    fout.close();

        system("pause");
     system("cls");
     maincode();
        }

       else if(enterusername!=user||enterusername!=user2||enterusername!=newuser)
        {
            while(enterusername!=user||enterusername!=user2||enterusername!=newuser){
            cout<<"User not found!" <<endl;
            cout<<"Try again" <<endl;
            cout<<"Enter name of client:";
        cin>>enterusername;
        if(enterusername==user){
            cout<<"Enter amount you want to deposit:";
        cin>>money;
        cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<useraccount+money <<endl;

        else{
            for(int i=0;i<=100;i++)
            {
                bnkaccount=useraccount+money;

                cout<<"Incorrect password!" <<endl;
                cout<<"*Try again*" <<endl;
                cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<useraccount+money <<endl;
        break;
            }}

        bnkaccount=useraccount+money;

         fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<bnkaccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

        system("pause");
     system("cls");
     maincode();
            break;
        }
            if(enterusername==user2)
            {
                cout<<"Enter amount you want to deposit:";
        cin>>money;
        cout<<"Enter password: ";
        cin>>enterpassword;
        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<user2account+money <<endl;

        else{
            for(int i=0;i<=100;i++)
            {
                cout<<"Incorrect password" <<endl;
                cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<user2account+money <<endl;

        break;
            }}

        bnkaccount2=user2account+money;

         fout.open("usersDB.txt");

fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<bnkaccount2 <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

        system("pause");
     system("cls");
     maincode();
       break;
            }

            if(enterusername==newuser)
            {
                cout<<"Enter amount you want to deposit:";
        cin>>money;
        cout<<"Enter password: ";
        cin>>enterpassword;
        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<newaccount+money <<endl;

        else{
            for(int i=0;i<=100;i++)
            {
                cout<<"Incorrect password" <<endl;
                cout<<"Enter password: ";
        cin>>enterpassword;

        if(enterpassword==admpass)
        cout<<money <<" has been deposited to BBIT2020, new balance is "<<newaccount+money <<endl;

        break;
            }}

        bnkaccountnew=newaccount+money;

         fout.open("usersDB.txt");

fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<bnkaccountnew <<endl;

    fout.close();

        system("pause");
     system("cls");
     maincode();
       break;
            }
        }}
break;
    case 2:
        cout<<"Type in new user's username:";
        cin>>newuser;
        cout<<"Type in new user's password: ";
        cin>>newpass;
        cout<<"Enter age: ";
        cin>>age;
        if(age>=18)
        {
            cout<<"Male/Female?\n";
            cin>>gender;
            cout<<"Enter ID number: ";
        cin>>id;
        cout<<newuser <<" has now been registered as a user of BBIT2020 E-CASH SERVICES" <<endl;
        }

        else
        {
            cout<<"User is not old enough";
        }
         fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();


system("pause");
     system("cls");
     maincode();

        break;

    case 3:
        cout<<"Type in email address:";
        cin>>email;
        cout<<"A verification link has been sent to your email.Click it for verification" <<endl;
        cout<<"Verification successful!" <<endl;
        cout<<"Enter new password: ";
        cin>>password[0];
        cout<<"Confirm new password: ";
        cin>>password[0];
        cout<<"You have successfully changed your password!\n";
         fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

        system("pause");
     system("cls");
     maincode();

        break;

        case 4:
            cout<<"Enter current username:\n";
            cin>>username[0];
            cout<<"Enter new username\n";
            cin>>username[0];
            cout<<"Enter password: ";
            cin>>enterpassword;
            if(enterpassword==admpass)
                cout<<"Admin username is now " <<username[0] <<endl;
             if(enterpassword!=admpass)
                for(int i=0;i<=5;i++)
                    {
                        cout<<"Incorrect password" <<endl;
                        cout<<"Try again" <<endl;
                        cout<<"Enter password: ";
                        cin>>enterpassword;
                        if(enterpassword==admpass)
                        cout<<"Admin username is now " <<username[0] <<endl;
                            break;
                    }

             fout.open("usersDB.txt");

            fout <<username[0] <<endl;
             fout <<password[0] <<endl;
            fout <<username[1] <<endl;
            fout <<password[1] <<endl;
            fout <<useraccount <<endl;
            fout <<user2 <<endl;
            fout <<user2pass <<endl;
            fout <<user2account <<endl;
            fout <<newuser <<endl;
            fout <<newpass <<endl;
            fout <<newaccount <<endl;

    fout.close();

            system("pause");
     system("cls");
     maincode();

        break;

        case 5:
            char shutdown;
            cout<<"Shutdown the system? y/n" <<endl;
            cin>>shutdown;
            if(shutdown=='y')
            {
                system("cls");
            }
            if(shutdown=='n')
            {
                system("cls");
                maincode();
            }
break;
            }}
}
