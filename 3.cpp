//Muhammad Ibad Saleem 19K0220 
//Task 3


#include <iostream>
using namespace std;
class Birthday                  //Birthday class 1
{
    public:
    int day=1;
    int month=1;
    int year=1970;
};
class Teacher               //class 2
{
    public:
    int num=0;
    string name="ibad";
    char sex='M';
    int modyear=2000;
    int modday=2;
    int modmonth=2;
};
class Professor:public Birthday,public Teacher          //formation of class through inheritance
{
};

int main()
{
    system("cls");
    Professor Prof;             //Num, name, sex, year, month, Day and modified year, month, day
    cout<<"Enter Number: ";
    cin>>Prof.num;
    cout<<"\nEnter Name: ";
    cin>>Prof.name;
    cout<<"\nEnter Sex: ";
    cin>>Prof.sex;
    cout<<"\nEnter Birth Year: ";
    cin>>Prof.year;
    cout<<"\nEnter Birth Month: ";
    cin>>Prof.month;
    cout<<"\nEnter Birth Day: ";
    cin>>Prof.day;
    cout<<"\nEnter Modification Year: ";
    cin>>Prof.modyear;
    cout<<"\nEnter Modification Month: ";
    cin>>Prof.modmonth;
    cout<<"\nEnter Modification Day: ";
    cin>>Prof.modday;
    system("cls");                                            //output
    cout<<"Number: "<<Prof.num;
    cout<<"\nName: "<<Prof.name;
    cout<<"\nSex: "<<Prof.sex;
    cout<<"\nDate of Birth: "<<Prof.modyear<<"/"<<Prof.modmonth<<"/"<<Prof.modday<<endl;
    


    
    
    
    
    
    
    
    
}