#include<iostream>
using namespace std;
int factorial(int n){
cout<<"calculating factorial of "<<n<<endl;
if (n==0)
    return 1;
else{
    int smallOutput = n*factorial(n-1);
     cout<<"factorial of "<<n<<"= "<<smallOutput<<endl;
    return smallOutput;
   
}

    }


int main(){

int n;
cin>>n;
int output = factorial(n);
cout<<"Factorial of "<<n<<" is "<<output<<endl;

return 0;
}