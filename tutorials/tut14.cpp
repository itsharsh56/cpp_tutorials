#include<iostream>
using namespace std;

typedef struct employee  //typedef is used to create temporary datatype for any variable.
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;
union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};
int main()
{
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==2)<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl; 
    union money m2;
    m2.rice = 34;
    m2.car = 'c';
    cout<<m2.car<<endl;
    ep harry;
    struct employee shubham;
    struct employee rohanDas;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000;
    cout<<"The value is "<<harry.eId<<endl; 
    cout<<"The value is "<<harry.favChar<<endl; 
    cout<<"The value is "<<harry.salary<<endl; 
    return 0;
}
