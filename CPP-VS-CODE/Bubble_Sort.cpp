#include <bits/stdc++.h> 
using namespace std;

void swap(int *x,int *y){
    int temp = *x;
    *x= *y;
    *y = temp;
}


void Bubble_Sort(int A[],int n){

for(int i=0; i< n-1; i++){
   int flag = 0;
    for(int j=0; j< n-i-1;j++){
        if(A[j]>A[j+1])
        swap(&A[j], &A[j+1]); 
        flag = 1;
    }
if(flag==0) break;
}
    }


int main(){
system("CLS");
int A[5] = {6,7,4,8,3};
Bubble_Sort(A, 5);
for(int i=0; i<5; i++){
    cout<<A[i]<<" ";
}
return 0;
}