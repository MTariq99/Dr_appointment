#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void adminLogIn();
void signUp();
void viewPatientsRequests();

int main()
{
    string user_Name;
    string password;
    int choice;
cout<<endl<<"               Doctor appointment application                 "<<endl; 
cout<<"--------------------------------------------------------------------"<<endl<<endl; 
    cout <<"  1 : signUp "<<endl;
    cout<<"  2 : Login "<<endl;
    cout<<"  3 : appointment "<<endl;
    cout<<"Enter a number accordingly : ";
    cin >> choice;

    while (choice == 1){ 
          cout << "wellcome to the SignUp page"<<endl<<endl;
        signUp();
        break;
    }
    while (choice == 2){
      cout<<"wellcome to the login page "<<endl;  
      adminLogIn(); 
      break;


     }
     while(choice == 3){
         cout<<"Wellcome to the appointment page  ";
     break;
     }
    
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
    cout<<endl<<"Admin Logged in successfully  "<<endl;
    else if(user_Name == "patient" && password == "123")
    cout<<"Patient logged in successfully";
    else if(user_Name == "doctor" && password == "4321")
    cout<<"doctor logged in successfully";
    else 
    cout<<"please create your account ";

}



void signUp(){
string name;
string user_Name;
string password;
int phoneNumber;

  ofstream MyFile("DR_appointment/patients.txt");
 cout<<"Enter your Name : ";
cin>>name;
cout<<"Enter a user name  : ";
cin>>user_Name;
cout<<"Enter a password : ";
cin>>password;
cout<<"Enter a phone Number : ";
cin>>phoneNumber;
cout<<endl<<endl<<"congratulations account created successfully "<<endl;
  MyFile.close();
}

void viewPatientsRequests(){
    



}
