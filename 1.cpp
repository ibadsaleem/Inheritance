//Muhammad Ibad Saleem 19K0220 
//Task 1



#include <iostream>
#include <string>
using namespace std;

class Marks{                //Class 1 Base Class
int rollno;
string name;
public:
float marks;                        //making marks publically so can be use in other class without mutator and accessor

Marks(){}
Marks(int x, string n, float m)
{
    rollno=x;
    name=n;
    marks=m;
}
void setname(string a)
{
    name=a;
}
void setrn(int a)
{
    rollno=a;
}


};

class Phy:public Marks              //Inheriting Publically Marks into Physics  //Class 2 
{
    
    public:
    float T=0.0;
    void Pmarks()
    {
        cout<<"\nEnter Physics Marks: ";
        cin>>marks;
         T=T+marks;
    }
};

class Chem:public Marks         //Inheriting Publically Marks into Chem     //Class 3
{
    
    public:
    float T=0.0;
    void Cmarks()
    {
        cout<<"Enter Chemistry Marks: ";
        cin>>marks;
         T=T+marks;
    }
};

class Maths:public Marks            //Inheriting Publically Marks into Maths    //Class 4
{
    
    public:
    float T=0.0;
    void Mmarks()
    {
        cout<<"Enter Mathematics Marks: ";
        cin>>marks;
        T=T+marks;
    }
};

int main()              //Main
{
    system("cls");
    string n;
    int roll=1000;
    Marks M1;
    Phy P1;
    Chem C1;
    Maths m1;
    int s;
    cout<<"Enter Number of Students: ";
    cin>>s;
    for (int i=0;i<s;i++)
    {
        cout<<"\nEnter Student "<<i+1<<" Name: ";   
        cin >> n;
        M1.setname(n);
        cout<<"\nRoll Number: "<<roll;
        roll++;
        M1.setrn(roll);
        m1.Mmarks();
        C1.Cmarks();
        P1.Pmarks();
    }
    cout<<"\nAverage Marks of Class For Mathematics: "<<m1.T/s;
    cout<<"\nAverage Marks of Class For Chemistry: "<<C1.T/s;
    cout<<"\nAverage Marks of Class For Physics: "<<P1.T/s<<endl;

}