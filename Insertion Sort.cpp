#include<iostream>

using namespace std;

int Insertion(int A[],int n){
    for(int i=1; i<n; i++){
        int value = A[i];
        int j = i;
        while(j>0 && A[j-1]>value){
            A[j] = A[j-1];
            j--;
        }
        A[j] = value;
    }
}

int main(){
    int Array [] = {77,33,44,11,88,22,55,66};
    Insertion(Array,8);
    for(int i=0; i<8;i++){
        cout << Array[i] <<  " ";
    }
    cout << endl;
}
