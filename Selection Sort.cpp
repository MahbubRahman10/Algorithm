#include<iostream>
using namespace std;

int selection(int a[],int n){
    for (int i = 0; i<n-1; i++){
        int minval = i;
        for(int j=i+1; j<n;j++){
            if (a[j] < a[minval]){
                minval = j;
            }
        }
        int temp = a[i];
        a[i] = a[minval];
        a[minval] = temp;
    }
}

int main(){
    int Array [] = {77,33,44,11,88,22,55,66};
    selection(Array,8);
    for(int i=0; i<8;i++){
        cout << Array[i] <<  " ";
    }
    cout << endl;
}
