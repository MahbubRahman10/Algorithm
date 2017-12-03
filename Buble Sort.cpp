#include<iostream>

using namespace std;

int Buble(int A[],int n){
    for(int i=1;i<n-1;i++){
        int flag = 0;
        for(int j = 0;j<n-i-1;j++){
            if(A[j] > A[j+1]){
                swap(A[j],A[j+1]);
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
}

int main(){

    int Array [] = {77,33,44,11,88,22,55,66};
    Buble(Array,8);
    for(int i=0; i<8;i++){
        cout << Array[i] <<  " ";
    }
    cout << endl;
}
