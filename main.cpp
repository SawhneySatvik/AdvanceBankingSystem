#include<iostream>
#include<iomanip>
#include<fstream>
#include<cctype>

using namespace std;

class BankAccount{

    long int AccNo;
    char Name[50];
    char Type;
    double MoneyDep;

    public:

    void CreateAccount(){
        system("cls");
        cout<<"Enter the account number: ";
        cin>>AccNo;
        cout<<"Enter the name of account holder: ";
        cin.ignore();
        cin.getline(Name,50);
        cout<<"Enter the type of account you wish to open (savings-s/pf-p): ";
        Type=toupper(Type);
        cin>>Type;
        cout<<"Enter the initial amunt to be deposited: ";
        cin>>MoneyDep;
        cout<<"Congratulations!! Your account is know opened."<<endl;
        cout<<"=============================================="<<endl;
    }
