#include <iostream>
using namespace std;

int fib(int a ){
    if(a<=1){
        return a;
    }
    return fib(a-2)+fib(a-1);
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    cout<<"The fibonacci series is: ";
    for(int i=0;i<num;i++){
        cout<<fib(i)<<" ";
    }

    return 0;
}