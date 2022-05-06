#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void adminLogIn();
void signUp();

int main()
{
    string user_Name;
    string password;
    char choice;
    char L, S;
    cout << "what do you want Login Or SignUp" << endl;
    cout << "please enter L for login and S for signUp : ";
    cin >> choice;

    if (choice == 'L'){ 
        cout<<"wellcome to the login page "<<endl;  
      adminLogIn();  
    }
    else if (choice == 'S'){
        cout << "wellcome to the SignUp page"<<endl<<endl;
        signUp();

     }else
        cout << "Please Enter a valid character  ";
    return 0;
    }

void adminLogIn(){
    string user_Name;
    string password;
    cout<<"Enter your user Name : ";
    cin>>user_Name;
    cout<<"Enter your password : ";
    cin>>password;
    if(user_Name == "admin" && password == "12345")
    cout<<endl<<"Admin Logged in successfully : "<<endl;
    else
    cout<<"sorry invalid person ";

}


void signUp(){
string name;
string user_Name;
string password;
int phoneNumber;

cout<<"Enter your Name : ";
cin>>name;
cout<<"Enter a user name  : ";
cin>>user_Name;
cout<<"Enter a password : ";
cin>>password;
cout<<"Enter a phone Number : ";
cin>>phoneNumber;
cout<<endl<<endl<<"congratulations account created successfully "<<endl;

}
