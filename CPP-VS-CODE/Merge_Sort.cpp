#include <bits/stdc++.h> 
using namespace std;

void Merge(int A[], int left[], int right[],int n, int nL, int nR){
int i=0, j=0, k=0;
while(i< nL && j< nR){
if(left[i]< right[j])
{
    A[k] = left[i];
    i++;
}
else{
    A[k]= right[j];
    j++;
}
k++;
}

// If anyone of the array exhausts
while(i<nL){
    A[k]= left[i];
    i++;
    k++;
}

while (j< nR)
{
    A[k] = left[j];
    j++;
    k++;
}
    }

int MergeSort(int A[], int n){
    
    if(n<2)
        return n;

    int mid = n/2;
    int left[mid], right[n-mid];

    for(int i=0; i<mid; i++){
        left[i] = A[i];
    }

    for(int j=mid; j<n; j++){
        left[j] = A[j];
    }

    MergeSort(left, mid);
    MergeSort(right, n-mid);
    Merge(A, left, right, n, mid, n-mid);

}

int main(){
system("CLS");
int A[5]= {4,6,2,8,1};
MergeSort(A, 5);

for(int i=0; i<5; i++){
    cout<<A[i]<<" ";
}

return  0;

}