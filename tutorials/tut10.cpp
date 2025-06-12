#include <iostream>

using namespace std;
int main()
{
cout<<"For loop in C++"<<endl;
for (int i = 1; i <= 40; i++)
{
cout<<i<<endl;
}
cout<<"While loop in C++"<<endl;
int i=1;
while(i<=40)
{
    cout<<i<<endl;
    i++;
}
cout<<"do While loop in C++"<<endl;
int x=1;
do
{
    cout<<x<<endl;
    x++;
}
while(x<=40);

return 0;
}
