#include <iostream>
#include <fstream> //File Handlinng
#include <iomanip> //floating point values

using namespace std;

void mainmenu();
class management{

public:

    management(){

    mainmenu();
    }
};

class details
{
public:
    static string name,gender;
    int phoneNo;
    int age;
    string add;
    static int cust_id;
    char arr[100];

    void information(){
    cout<<"\n Enter the Customer id:";
    cin>>cust_id;
    cout<<"\n Enter the name:";
    cin>>name;
    cout<<"\n Enter the age:";
    cin>>age;
    cout<<"\n Address :";
    cin>>add;
    cout<<"\n Enter your Gender:";
    cin>>gender;
    cout<<"\n Your Details are saved with us\n"<<endl;
    }
};

int details::cust_id;
string details::name;
string details::gender;

class registration
{
public:
    static int choice;
    int choice1;
    int back1;
    static float charges;

    void flights()
    {
        string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
        for(int a=0;a<6;a++){
            cout<<(a+1)<<".Flight to "<<flightN[a]<<endl;
        }
        cout<<"Welcome to the Airlines!"<<endl;
        cout<<"Press the number of the country of which you want to book the flight: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            {
            cout<<"____________Welcome to Dubai Emirates__________\n"<<endl;
            cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
            cout<<"Following are the flights \n"<<endl;
            cout<<"1.DUB-498"<<endl;
            cout<<"\t08-01-2022 8.00AM 10 hrs Rs.14000"<<endl;
            cout<<"2.DUB-468"<<endl;
            cout<<"\t10-01-2022 10.00AM 11 hrs Rs.14500"<<endl;
            cout<<"3.DUB-448"<<endl;
            cout<<"\t28-01-2022 7.30AM 12 hrs Rs.13500"<<endl;

            cout<<"Select the flight you want to book:";
            cin>>choice1;

            if(choice1==1){
                charges=14000;
                cout<<"You have successfully booked the flight DUB-498"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else if(choice1==2){
                charges=14500;
                cout<<"You have successfully booked the flight DUB-468"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else if(choice1==3){
                charges=13500;
                cout<<"You have successfully booked the flight DUB-448"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else{
                cout<<"Invalid Input,shifting to the previous menu"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the main menu"<<endl;
            cin>>back1;

            if(back1==1){
                mainmenu();
            }
            else{
                mainmenu();
            }
            }
            break;

        case 2:
            cout<<"____________Welcome to Canadian Airlines__________\n"<<endl;
            cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
            cout<<"Following are the flights \n"<<endl;
            cout<<"1.CAN-398"<<endl;
            cout<<"\t04-01-2022 11.00AM 13 hrs Rs.24000"<<endl;
            cout<<"2.CAN-478"<<endl;
            cout<<"\t06-01-2022 5.00AM 14 hrs Rs.18500"<<endl;
            cout<<"3.CAN-418"<<endl;
            cout<<"\t09-01-2022 7.30AM 15 hrs Rs.17000"<<endl;

            cout<<"Select the flight you want to book:";
            cin>>choice1;

            if(choice1==1){
                charges=24000;
                cout<<"You have successfully booked the flight CAN-398"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else if(choice1==2){
                charges=18500;
                cout<<"You have successfully booked the flight CAN-478"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else if(choice1==3){
                charges=17000;
                cout<<"You have successfully booked the flight CAN-418"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else{
                cout<<"Invalid Input,shifting to the previous menu"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the main menu"<<endl;
            cin>>back1;

            if(back1==1){
                mainmenu();
            }
            else{
                mainmenu();
            }
            break;
        case 3:
            cout<<"____________Welcome to UK Airlines__________\n"<<endl;
            cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
            cout<<"Following are the flights \n"<<endl;
            cout<<"1.UK-798"<<endl;
            cout<<"\t17-02-2022 10.00AM 17 hrs Rs.21000"<<endl;
            cout<<"2.UK-778"<<endl;
            cout<<"\t16-04-2022 7.00AM 11 hrs Rs.28500"<<endl;
            cout<<"3.UK-718"<<endl;
            cout<<"\t19-03-2022 9.30AM 13 hrs Rs.27000"<<endl;

            cout<<"Select the flight you want to book:";
            cin>>choice1;

            if(choice1==1){
                charges=21000;
                cout<<"You have successfully booked the flight UK-798"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else if(choice1==2){
                charges=28500;
                cout<<"You have successfully booked the flight UK-778"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else if(choice1==3){
                charges=27000;
                cout<<"You have successfully booked the flight UK-718"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else{
                cout<<"Invalid Input,shifting to the previous menu"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the main menu"<<endl;
            cin>>back1;

            if(back1==1){
                mainmenu();
            }
            else{
                mainmenu();
            }
            break;
        case 4:
            cout<<"____________Welcome to US Airways__________\n"<<endl;
            cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
            cout<<"Following are the flights \n"<<endl;
            cout<<"1.US-898"<<endl;
            cout<<"\t27-02-2022 11.00AM 17 hrs Rs.39000"<<endl;
            cout<<"2.US-878"<<endl;
            cout<<"\t26-04-2022 8.00AM 11 hrs Rs.38500"<<endl;
            cout<<"3.US-818"<<endl;
            cout<<"\t29-03-2022 1.30AM 13 hrs Rs.37000"<<endl;

            cout<<"Select the flight you want to book:";
            cin>>choice1;

            if(choice1==1){
                charges=39000;
                cout<<"You have successfully booked the flight US-898"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else if(choice1==2){
                charges=38500;
                cout<<"You have successfully booked the flight US-878"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else if(choice1==3){
                charges=37000;
                cout<<"You have successfully booked the flight US-818"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else{
                cout<<"Invalid Input,shifting to the previous menu"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the main menu"<<endl;
            cin>>back1;

            if(back1==1){
                mainmenu();
            }
            else{
                mainmenu();
            }
            break;
        case 5:
            cout<<"____________Welcome to AUSTRALIAN Airways__________\n"<<endl;
            cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
            cout<<"Following are the flights \n"<<endl;
            cout<<"1.AUS-998"<<endl;
            cout<<"\t17-02-2022 10.30AM 18 hrs Rs.49000"<<endl;
            cout<<"2.AUS-978"<<endl;
            cout<<"\t16-05-2022 7.30AM 20 hrs Rs.48500"<<endl;
            cout<<"3.AUS-918"<<endl;
            cout<<"\t19-04-2022 4.30AM 23 hrs Rs.47000"<<endl;

            cout<<"Select the flight you want to book:";
            cin>>choice1;

            if(choice1==1){
                charges=49000;
                cout<<"You have successfully booked the flight AUS-998"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else if(choice1==2){
                charges=48500;
                cout<<"You have successfully booked the flight AUS-978"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else if(choice1==3){
                charges=47000;
                cout<<"You have successfully booked the flight AUS-918"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else{
                cout<<"Invalid Input,shifting to the previous menu"<<endl;
                flights();
            }
            cout<<endl;
            cout<<"Press any key to go back to the main menu"<<endl;
            cin>>back1;

            if(back1==1){
                mainmenu();
            }
            else{
                mainmenu();
            }
            break;
        case 6:
            cout<<"____________Welcome to EUROPEAN Airways__________\n"<<endl;
            cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
            cout<<"Following are the flights \n"<<endl;
            cout<<"1.EU-198"<<endl;
            cout<<"\t17-08-2022 9.00AM 15 hrs Rs.29000"<<endl;
            cout<<"2.EU-178"<<endl;
            cout<<"\t19-03-2022 6.30AM 18 hrs Rs.23500"<<endl;
            cout<<"3.EU-118"<<endl;
            cout<<"\t07-06-2022 11.30AM 21 hrs Rs.27000"<<endl;
            cout<<endl;
            cout<<"Select the flight you want to book:";
            cin>>choice1;

            if(choice1==1){
                charges=29000;
                cout<<"You have successfully booked the flight EU-198"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else if(choice1==2){
                charges=23500;
                cout<<"You have successfully booked the flight EU-178"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else if(choice1==3){
                charges=27000;
                cout<<"You have successfully booked the flight EU-118"<<endl;
                cout<<"You can go back to main-menu and take the ticket"<<endl;
            }
            else{
                cout<<"Invalid Input,shifting to the previous menu"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the main menu"<<endl;
            cin>>back1;

            if(back1==1){
                mainmenu();
            }
            else{
                mainmenu();
            }
          break;
        default:
            cout<<"Invalid Input,shifting you to the main menu!"<<endl;
            mainmenu();
            break;
        }
    }

};

float registration::charges;
int registration::choice;

class ticket :public registration,details
{
public:
    void Bill()
    {
    string destination="";
    ofstream outf("records.txt");
        {
            outf<<"-----AIRLINE REGISTRATION FORM----"<<endl;
            outf<<"--------------Ticket--------------"<<endl;
            outf<<"____________________________________"<<endl;


            outf<<"Customer ID:"<<details::cust_id<<endl;
            outf<<"Customer Name:"<<details::name<<endl;
            outf<<"Customer Gender:"<<details::gender<<endl;
            outf<<"\tDescription:"<<endl<<endl;

        if(registration::choice==1)
            {
                destination="Dubai";
            }
        else if(registration::choice==2)
            {
                destination="Canada";
            }
        else if(registration::choice==3)
            {
                destination="UK";
            }
        else if(registration::choice==4)
            {
                destination="US";
            }
        else if(registration::choice==5)
            {
                destination="Australia";
            }
        else if(registration::choice==6)
            {
                destination="Europe";
            }
        outf<<"Destination:\t"<<destination<<endl;
        outf<<"Flight cost:\t"<<registration::charges<<endl;
    }
    outf.close();
    }
    void dispBill()
    {
        ifstream ifs("records.txt");
            {
            if(!ifs){
                cout<<"File Error!"<<endl;
            }
            while(!ifs.eof())
                {
                ifs.getline(arr,100);
                cout<<arr<<endl;
                }
            }
            ifs.close();
    }
};


void mainmenu(){
    int lchoice;
    int schoice;
    int back1;

    cout<<"\t      AIRLINE REGISTRATION FORM\n"<<endl;

    cout<<" ________________________Main Menu______________________"<<endl;

    cout<<"|\t\t\t                                |"<<endl;

    cout<<"|\t\t Press 1 to add Customer Details \t|"<<endl;
    cout<<"|\t\t Press 2 for Flight Registration \t|"<<endl;
    cout<<"|\t\t Press 3 for Ticket and Charges  \t|"<<endl;
    cout<<"|\t\t Press 4 to Exit                 \t|"<<endl;
    cout<<"|\t\t\t\t                        |"<<endl;
    cout<<"|_______________________________________________________|"<<endl;
    cout<<"Enter the Choice: ";
    cin>>lchoice;

    details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
case 1:
    cout<<"------Customers------\n"<<endl;
    d.information();
    cout<<" Press 1 to Go-Back to Main Menu : ";
    cin>>back1;

    if(back1==1)
        {
        mainmenu();
        }
    else
        {
        mainmenu();
        }
        break;

case 2:
    cout<<"--------Book a Flight using this System--------\n"<<endl;
    r.flights();
    break;
case 3:
    cout<<"------GET Your Ticket------\n"<<endl;
    t.Bill();
    cout<<"Your ticket is Printed,you can collect it \n"<<endl;
    cout<<"Press 1 to display your ticket"<<endl;
    cin>>back1;
    if(back1==1){
        t.dispBill();
            cout<<"Press any key to go back to main menu"<<endl;
            cin>>back1;
            if(back1==1){
                mainmenu();
            }
            else{
                mainmenu();
            }
    }
    else{
        mainmenu();
    }
    break;

case 4:
        cout<<"\n\n_______Thank-you_______"<<endl;
        break;
default:
    cout<<"Invalid Input,Please try again!\n"<<endl;
    mainmenu();
    break;

    }

}
int main()
{

    management Mobj;
    return 0;
}
