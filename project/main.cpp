#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void Login();
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

      Login();
        

    }
    else if (choice == 'S'){
        cout << "wellcome to the SignUp page";

  
     }else
        cout << "Please Enter a valid character  ";
    return 0;
}

void Login(){
    string user_Name;
    string password;
    cout<<"Enter your user Name : ";
    cin>>user_Name;
    cout<<"Enter your password : ";
    cin>>password;

    cout<<endl<<endl<<"Logged in successfully : "<<endl;

}


