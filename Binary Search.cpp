#include<iostream>
#include<string>
#define MAX 10

using namespace std;

int arr[MAX] = {10,20,30,40,50,60,70,80,90,100};
int search_binary(int val);

int main(){
    int i,n;
    for(i=0; i<MAX; i++){
       cout << arr[i] << " " ;
    }
    cout << "\n\nEnter the number to search : ";
    cin >> n;
    int result = search_binary(n);

    if (result != -1){
        cout << n<< " is found at index " << result+1 ;
    }
    else{
        cout << n<< " is not found" ;
    }
}

int search_binary(int val){

    int low = 0;
    int high = MAX-1;
    int mid;

    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid] == val){
            return mid;
        }
        else if (val < arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}
