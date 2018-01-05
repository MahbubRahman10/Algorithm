#include<iostream>
#include<string>
#define MAX 10

using namespace std;

int arr[MAX] = {10,20,30,40,50,60,70,80,90,100};
int search_binary(int val,int low,int hig);

int main(){
    int i,n;
    for(i=0; i<MAX; i++){
       cout << arr[i] << " " ;
    }
    cout << "\n\nEnter the number to search : ";
    cin >> n;
    int result = search_binary(n,0,MAX-1);

    if (result != -1){
        cout << n<< " is found at index " << result+1 ;
    }
    else{
        cout << n<< " is not found" ;
    }
}

int search_binary(int val,int low,int high){

    int mid;
    if(low > high){
        return -1;
    }
    mid = low + (high-low)/2;
    if(arr[mid] == val){
        return mid;
    }
    else if (val < arr[mid]){
        search_binary(val,low,mid-1);
    }
    else{
        search_binary(val,mid+1,high);
    }
}
