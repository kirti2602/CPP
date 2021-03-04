// Program to demonstrate working of pointers with 2 -D  Arrays
#include <bits/stdc++.h> 
using namespace std;

int main(){
    system("CLS");
int A[2][3] = {1, 2, 3, 4, 5, 6};
int (*P)[3] = A;

cout<< A<<endl;          // Prints the address of first array of two integers(base address)
cout<< *A <<endl;       // Prints the address of first array of two integers (base address)
cout<< A+1 <<endl;     // Prints the adress of second array of two integers
cout<< *(A+1) <<endl; // Prints the address of second array of two integers
cout<< *(A+1) + 2 <<endl;   // Prints the address of A[1][2]
cout<< *(*A + 1) <<endl;   //Prints the value at A[0][1]


}



