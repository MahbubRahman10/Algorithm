#include<iostream>
#include<string>
#define MAX 10

using namespace std;

int arr[MAX] = {10,20,30,40,50,60,70,80,90,100};
int search_linear(int val);

int main(){
    int i,n;
    for(i=0; i<MAX; i++){
       cout << arr[i] << " " ;
    }
    cout << "\n\nEnter the number to search : ";
    cin >> n;
    search_linear(n);
}

int search_linear(int val){
    for(int i=0; i< MAX; i++){
        if(arr[i] == val){
            cout << val << " is found at index " << i+1 ;
            return 0;
        }
    }
    cout << val << " is not found" ;
}
