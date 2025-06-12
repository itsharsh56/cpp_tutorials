#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "my name is harsh.";
    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); // Write operation
    out<<st;
    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample60.txt"); // Read operation
    cout<<st;

    return 0;
}
