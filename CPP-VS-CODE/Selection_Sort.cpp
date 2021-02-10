#include<iostream>
using namespace std;

int Selection_Sort(int A[], int n){
int iMin,temp;
for(int i=0; i<n-1; i++){
    iMin = i;
    for(int j= i+1; j<n; j++){
        if(A[j]< A[iMin])
            iMin = j;
    }
temp= A[i];
A[i]= A[iMin];
A[iMin]= temp;
}
    }

int main(){
system("CLS");
int A[] = {4,3,2,1};
Selection_Sort(A, 4);
for(int i=0; i<4; i++)
    cout<<A[i]<<" ";

return 0;

}