#include<iostream> 
using namespace std;
int c = 45;
int main()
{
    cout<<"Build in Data types"<<endl;
    int a, b, c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c<<endl;

    cout<<"Float, double and long double Literals"<<endl;
    float d=34.4F;
    long double e = 34.4L; 
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;  
    
    cout<<"Reference Variables"<<endl;
    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;
    
    cout<<"Typecasting"<<endl;
    int f= 45;   
    float g = 45.46;
    cout<<"The value of f is "<<(float)f<<endl;
    cout<<"The value of f is "<<float(f)<<endl;
    cout<<"The value of g is "<<(int)g<<endl;
    cout<<"The value of g is "<<int(g)<<endl;
    int h = int(g);
    cout<<"The expression is "<<f + g<<endl;
    cout<<"The expression is "<<f + int(f)<<endl;
    cout<<"The expression is "<<f + (int)g<<endl;
    return 0;
}
