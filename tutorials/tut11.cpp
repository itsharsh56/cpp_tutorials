#include<iostream>
using namespace std;

int main()
{
cout<<"break statement"<<endl;
for (int i = 0; i < 40; i++)
    {
        if(i==2)
        {
            break;
        }
        cout<<i<<endl;
    }
cout<<"continue statement"<<endl;
for (int i = 0; i < 40; i++)
    {
        if(i==2)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
