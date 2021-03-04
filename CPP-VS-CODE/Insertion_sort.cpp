#include <bits/stdc++.h> 
using namespace std;

void Insertion_Sort(int A[], int n){

for(int i=1; i<= n-1; i++){
    int value = A[i];
    int hole = i;

    while(hole>0 && A[hole-1] > value)
        {A[hole] = A[hole-1];
        hole--;
}
A[hole] = value;

}
}

int main(){
int A[5] = {3,6,1,7,4};
Insertion_Sort(A, 5);

for(int i = 0; i<5; i++){
    cout<<A[i]<<" ";
}

return 0;


}