#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout<<"Constants in C++"<<endl;
    const int x = 3;
    // x = 45; You will get an error because a is a constant
    cout<<"The value of a is: "<<x<<endl;

    cout<<"Manipulators in C++"<<endl;
    int a =3, b=78, c=1233;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;
    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;


    cout<<"operator Precedence"<<endl;
    int d =3, e=4;
    int f = (d*5)+e;
    int g= ((((d*5)+e)-45)+87);
    cout<<f<<endl<<g<<endl;
    return 0;
}
