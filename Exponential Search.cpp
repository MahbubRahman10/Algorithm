#include<iostream>
#include<string>
#include<cmath>
#define MAX 10

using namespace std;

int arr[MAX] = {10,20,30,40,50,60,70,80,90,100};
int search_exponential(int val);

int main(){
    int i,n;
    for(i=0; i<MAX; i++){
       cout << arr[i] << " " ;
    }
    cout << "\n\nEnter the number to search : ";
    cin >> n;
    int result = search_exponential(n);

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

int search_exponential(int val){

    int start = 0;
    int end = MAX-1;
    if (arr[0] == val){
        return 0;
    }
    int i = 1;
    while(i < end && arr[i] <= val){
       i = i*2;
    }
    return search_binary(val, i/2, min(i, end));
}
