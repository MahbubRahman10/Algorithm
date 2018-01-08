#include<iostream>
#include<string>
#include<cmath>
#define MAX 10

using namespace std;

int arr[MAX] = {10,20,30,40,50,60,70,80,90,100};
int search_interpolation(int val);

int main(){
    int i,n;
    for(i=0; i<MAX; i++){
       cout << arr[i] << " " ;
    }
    cout << "\n\nEnter the number to search : ";
    cin >> n;
    int result = search_interpolation(n);

    if (result != -1){
        cout << n<< " is found at index " << result+1 ;
    }
    else{
        cout << n<< " is not found" ;
    }

}

int search_interpolation(int val){

    int start = 0;
    int end = MAX-1;

    while(start<=end && val >= arr[start] && val <=arr[end]){
        int pos = start + ((double)(end-start)/(arr[end]-arr[start]) * (val-arr[start]));
        if(arr[pos] == val){
            return pos;
        }
        else if(val > arr[pos]){
            start = pos + 1;
        }
        else{
            end = pos -1;
        }
    }
    return -1;
}
