#include<iostream>

using namespace std;

int Merge(int l,int left[],int r,int right[],int A[]){

    int i=0,j=0,k =0;
    while(i < l && j < r){
        if(left[i]<right[j]){
            A[k] = left[i];
            i++;
        }
        else{
            A[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < l){
        A[k] = left[i];
        i++;
        k++;
    }
    while(j < r){
        A[k] = right[j];
        j++;
        k++;
    }
}

int Div(int A[],int n){

    int mid;
    if(n<2){
        return 0;
    }
    mid = n/2;
    int left[mid];
    int right[n-mid];

    for(int i=0; i<mid; i++){
        left[i] = A[i];
    }
    for(int i=mid; i<n; i++){
        right[i-mid] = A[i];
    }

    Div(left,mid);
    Div(right,n-mid);

    Merge(mid,left,n-mid,right,A);
}


int main(){

    int Array [] = {77,33,44,11,88,22,55,66};
    Div(Array,8);
    for(int i=0; i<8;i++){
        cout << Array[i] <<  " ";
    }
}
