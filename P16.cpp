#include <iostream>
#include <string>
using namespace std;

string Name(string s1,string s2){
    return s1+" "+s2;
}

int main(){
    string firstname;
    string lastname;

    cout<<"Enter the first name: ";
    cin>>firstname;

    cout<<"Enter the last name: ";
    cin>>lastname;

    string fullname = Name(firstname, lastname);

    cout<<"Hello, "<< fullname;
}