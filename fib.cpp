#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}


int fact(int n){

    if(n<=1){
        return 1;
    }

    return n*fact(n-1);
}

int main(){


    int n;
    cout<<"enter a no. :"<<endl;
    cin>>n;

    // cout<<" the factorial of " << n << " is " <<fact(n);
     cout<<" the fib at position of " << n << " is " <<fib(n);
    

return 0;
}