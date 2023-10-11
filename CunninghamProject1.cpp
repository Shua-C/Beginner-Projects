
#include <iostream>
#include <iomanip>
using namespace std;

const double tuition_per_credit_hour = 263.00;
const double overall_fees_for_registration = 162.50;

int main(){

    string first_name, last_name;
    int id_number;
    double scholarship, total_due, tuition;


            cout<<setw(27)<<"**********"<<"WELCOME TO THE SEMESTER"<<"**********"<<"\n\n";
            cout<<"Please enter your first name, followed by your last name, and your student ID number."<<endl;
            cout<<"Do not include the A or leading 0s in your ID.";

            cout<<"\n\n";
        
                cin>>first_name>>last_name>>id_number;

            cout<<"\nDid you receive a scholarship, if so please enter that amount or enter 0."<<endl;
                cin>>scholarship;


                cout<<"\n\n\n\n";

                tuition = 6 * tuition_per_credit_hour;
                total_due = (tuition + overall_fees_for_registration) - scholarship;

            cout<<setprecision(2)<<showpoint<<fixed;

            cout<<"Dear "<<first_name<<" "<<last_name<<" "<<"("<<id_number<<")"<<endl;
            cout<<"Thank you for entering your information, below is a your class listing and bill for the Spring 2023 semester.\n\n\n";

            cout<<setw(16)<<"**********"<<"COURSE DETAILS"<<"**********"<<"\n\n";

            cout<<"Prefix"<<setw(7)<<"No."<<setw(8)<<"Title"<<setw(33)<<"Credit Hour"<<endl;

            cout<<"*******************************************************"<<endl;

            cout<<setw(1)<<""<<"CS"<<setw(10)<<"310"<<setw(3)<<""<<setw(9)<<"Computer Ethics"<<setw(19)<<"1"<<endl;

            cout<<setw(1)<<""<<"MA"<<setw(10)<<"308"<<setw(3)<<""<<setw(9)<<"Discrete Math"<<setw(21)<<"3"<<endl;

            cout<<"ITE"<<setw(10)<<"308"<<setw(3)<<""<<setw(9)<<"Network Architectures"<<setw(13)<<"2"<<"\n\n\n";

            cout<<"Total Enrollment Hours:"<<setw(27)<<"6"<<"\n\n\n";

            cout<<setw(1)<<""<<"**********"<<"BILLING INFORMATION"<<"**********"<<endl;

            cout<<setw(3)<<""<<"Tuition"<<setw(30)<<tuition<<endl;

            cout<<setw(6)<<""<<"Fees"<<setw(30)<<overall_fees_for_registration<<endl;

            cout<<"Scholarship"<<setw(29)<<scholarship<<"\n\n";

            cout<<"Total Due:"<<setw(30)<<total_due<<endl;
    return 0;
}