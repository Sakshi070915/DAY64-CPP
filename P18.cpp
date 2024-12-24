#include <iostream>
using namespace std;

int fact(int a){
    if(a<=1){
        return a;
    }
    return a*fact(a-1);
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"The factorial of "<<num<<" is: "<<fact(num);
    return 0;
}
/ Overloading of template function.
#include <iostream>
using namespace std;
template <class T>
void display(T x)
{
    cout << "template display:" << x << "\n";
}
void display(int x)
{
    cout << "Explicit display:" << x << "\n";
}
int main()
{
    display(100);
    display(12.34);
    display('c');
    return 0;
}