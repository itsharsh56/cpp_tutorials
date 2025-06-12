#include<iostream>
using namespace std;
int glo=6; // global variables 
void sum()
{
    cout<<glo;
}
int main()
{
    int glo=9; // local variable
    int a=14,b=15; // integer type variable 
    float pi=3.14; //float type variable 
    char c='H'; //character type variable 
    glo=78; // value of glo is updated from 9 to 78
    bool is_true = true; //boolean type variable
    cout<<"\n The value of a is "<<a<<"\n The value of b is "<<b<<"\n The value of pi is "<<pi<<"\n The value of c is "<<c<<endl;
    sum(); // glo will carry 6
    cout<<glo<<is_true; // glo will carry 78
    return 0;
}