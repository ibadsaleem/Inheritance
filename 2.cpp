//Muhammad Ibad Saleem 19K0220 
//Task 2


#include <iostream>
using namespace std;
class Fruit{                                            //Class 1
    public:
    int nf=0;
    int an=0;
    int mn=0; 
};

class Apples: public Fruit                  //Class 2
{
    public:
    void AppleC()
    {
        cout<<"Enter Number Of Apples: ";
        cin>>an;
    }
};
class Mangoes:public Fruit              //Class 3
{
    public:
    void MangoC()
    {
        cout<<"Enter Number Of Mango: ";
        cin>>mn;
    }
};

int main()
{
    system("cls");
    Fruit F1;
    Apples A1;
    Mangoes M1;
    A1.AppleC();
    M1.MangoC();
    F1.nf=A1.an+M1.mn;                                                  //totalling
    cout<<"Total Number Of Fruits: "<<F1.nf;
}