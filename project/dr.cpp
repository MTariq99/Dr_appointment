#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

 int bookAnAppointment();

int main(){
    string user_Name;
    string password;
    string choice;
    cout<< endl  << "               Doctor appointment application                 " << endl;
    cout << "--------------------------------------------------------------------" << endl<< endl;
    cout << "  1 : signUp " << endl;
    cout << "  2 : Login " << endl;
    cout<<"please enter login or signup : ";
    cin>>choice;

    if(choice == "login"){
    string user_Name;
    string password;
    string userChoice;
    cout << "Enter your user Name : ";
    cin >> user_Name;
    cout << "Enter your password : ";
    cin >> password;
    if (user_Name == "admin" && password == "12345")
        cout << endl
             << "Admin Logged in successfully  " << endl;
    else if (user_Name == "patient" && password == "123")
{       cout << "Patient logged in successfully"<<endl;
        cout<<"do you  want to book an appointment"<<endl;
        cout<<" want to see existing slots "<<endl;
        cin>>userChoice;
        if(userChoice== "appointment"){
                system("cls");

    cout << "\n ----- Book your appointment for particular time slot ---- \n";
    cout << "\n ----- Available slots are---- \n";

    ifstream read;
    read.open("appointment.dat");

    int hoursbook = 8;

    int arr[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int recordFound = 0;

    if (read)
    {
        string line;
        char key = 'A';
        int i = 9;

        while (getline(read, line))
        {
            char temp = line[0];
            int index = (temp);
            arr[index] = 1;
            recordFound = 1;
        }
        if (recordFound == 1)
        {
            cout << "\n Appointment List by Hours:";
            char key = 'A';
            int hours = 9;
            for (int i = 0; i <= 12; i++)
            {
                if (i == 0)
                {
                    if (arr[i] == 0)
                        cout << "\n " << key << "-> 0" << hours << " - Available";
                    else
                        cout << "\n " << key << "-> 0" << hours << " - Booked";
                }

                else
                {
                    if (arr[i] == 0)
                        cout << "\n " << key << "->" << hours << " - Available";
                    else
                        cout << "\n " << key << "->" << hours << " - Booked";
                }
                hours++;
                key++;
            }
        }

        read.close();
    }
    if (recordFound == 0)
    {
        cout << "\n Appointment Available for following hours :";
        char key = 'A';
        for (int i = 9; i <= 21; i++)
        {
            if (i == 9)
                cout << "\n " << key << " -> 0" << i << " - Available";
            else
                cout << "\n " << key << " -> " << i << " - Available";
            key++;
        }
    }

    char choice;
    cout << "\n\n Choose your slot: ";
    cin >> choice;

    if (!(choice >= 'A' && choice <= 'Z'))
    {
        cout << "\n Error : Invalid Selection";
        cout << "\n Please selction correct value from menu A- Z";
        cout << "\n Press any key to continue";
        getchar();
        getchar();
        system("cls");
        bookAnAppointment();
    }

    int index = (choice - 65);
    int isBooked = 1;
    if (arr[index] == 0)
        isBooked = 0;

    if (isBooked == 1)
    {
        cout << "\n Error : This Appointment  slot is already booked";
        cout << "\n Please select different slot time !!";
        cout << "\n Press any key to continue!!";
        getchar();
        getchar();
        system("cls");
        bookAnAppointment();
    }

    string name;
    cout << "\n Enter your Name:";
    cin >> name;

    ofstream out;
    out.open("appointment.dat", ios::app);

    if (out)
    {
        out << choice << ":" << name.c_str() << "\n";
        out.close();
        cout<< "\n Appointment is Successfully Booked for Hours : " << (choice - 65) + 9 << " !!";
    }
    else
    {
        cout<< "\n Error while saving booking";
    }

    cout<< "\n Please any key to continue..";
    getchar();
    getchar();
  } else if(userChoice=="existingslots"){
    system("cls");

    cout << "\n ----- List of Available Appointments ---- \n";
    // check if record already exist..
    ifstream read;
    read.open("appointment.dat");

    int hoursbook = 8;

    int arr[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int recordFound = 0;

    if (read)
    {
        string line;
        char key = 'A';
        int i = 9;

        while (getline(read, line))
        {
            char temp = line[0];
            int index = (temp - 65);
            arr[index] = 1;
            recordFound = 1;
        }
        if (recordFound == 1)
        {
            cout << "\n Appointment List by hours:";
            char key = 'A';
            int hours = 9;
            for (int i = 0; i <= 12; i++)
            {
                if (i == 0)
                {
                    if (arr[i] == 0)
                        cout << "\n " << key << "-> 0" << hours << " - Available";
                    else
                        cout << "\n " << key << "-> 0" << hours << " - Booked";
                }

                else
                {
                    if (arr[i] == 0)
                        cout << "\n " << key << "->" << hours << " - Available";
                    else
                        cout << "\n " << key << "->" << hours << " - Booked";
                }
                hours++;
                key++;
            }
        }

        read.close();

        if (recordFound == 0)
        {
            cout << "\n Appointment Available for following hours :";
            char key = 'A';
            for (int i = 9; i <= 21; i++)
            {
                if (i == 9)
                    cout << "\n " << key << " -> 0" << i << " - Available";
                else
                    cout << "\n " << key << " -> " << i << " - Available";
                key++;
            }
        }
    }
    ofstream out;
    out.open("appointment.dat", ios::app);

    cout << "\n Please any key to continue..";
    getchar();
    getchar();

  }


    }


}    else if (user_Name == "doctor" && password == "4321"){
        cout << "doctor logged in successfully";

}
return 0;
}


int bookAnAppointment(){


    system("cls");

    cout << "\n ----- Book your appointment for particular time slot ---- \n";
    cout << "\n ----- Available slots are---- \n";

    ifstream read;
    read.open("appointment.dat");

    int hoursbook = 8;

    int arr[13] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int recordFound = 0;

    if (read)
    {
        string line;
        char key = 'A';
        int i = 9;

        while (getline(read, line))
        {
            char temp = line[0];
            int index = (temp);
            arr[index] = 1;
            recordFound = 1;
        }
        if (recordFound == 1)
        {
            cout << "\n Appointment List by Hours:";
            char key = 'A';
            int hours = 9;
            for (int i = 0; i <= 12; i++)
            {
                if (i == 0)
                {
                    if (arr[i] == 0)
                        cout << "\n " << key << "-> 0" << hours << " - Available";
                    else
                        cout << "\n " << key << "-> 0" << hours << " - Booked";
                }

                else
                {
                    if (arr[i] == 0)
                        cout << "\n " << key << "->" << hours << " - Available";
                    else
                        cout << "\n " << key << "->" << hours << " - Booked";
                }
                hours++;
                key++;
            }
        }

        read.close();
    }

    if (recordFound == 0)
    {
        cout << "\n Appointment Available for following hours :";
        char key = 'A';
        for (int i = 9; i <= 21; i++)
        {
            if (i == 9)
                cout << "\n " << key << " -> 0" << i << " - Available";
            else
                cout << "\n " << key << " -> " << i << " - Available";
            key++;
        }
    }

    char choice;
    cout<<"\n\n Choose your slot: ";
    cin >> choice;

    if (!(choice >= 'A' && choice <= 'Z'))
    {
        cout << "\n Error : Invalid Selection";
        cout << "\n Please selction correct value from menu A- Z";
        cout << "\n Press any key to continue";
        getchar();
        getchar();
        system("cls");
        bookAnAppointment();
    }

    int index = (choice - 65);
    int isBooked = 1;
    if (arr[index] == 0)
        isBooked = 0;

    if (isBooked == 1)
    {
        cout << "\n Error : This Appointment  slot is already booked";
        cout << "\n Please select different slot time !!";
        cout << "\n Press any key to continue!!";
        getchar();
        getchar();
        system("cls");
        bookAnAppointment();
    }

    string name;
    cout << "\n Enter your Name:";
    cin >> name;

    ofstream out;
    out.open("appointment.dat", ios::app);

    if (out)
    {
        out << choice << ":" << name.c_str() << "\n";
        out.close();
        cout << "\n Appointment is Successfully Booked for Hours : " << (choice - 65) + 9 << " !!";
    }
    else
    {
        cout << "\n Error while saving booking";
    }

    cout << "\n Please any key to continue..";
    getchar();
    getchar();

    return 0;
}