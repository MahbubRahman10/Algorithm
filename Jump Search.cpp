#include<iostream>
#include<string>
#include<cmath>
#define MAX 10

using namespace std;

int arr[MAX] = {10,20,30,40,50,60,70,80,90,100};
int search_jump(int val);

int main(){
    int i,n;
    for(i=0; i<MAX; i++){
       cout << arr[i] << " " ;
    }
    cout << "\n\nEnter the number to search : ";
    cin >> n;
    int result = search_jump(n);

    if (result != -1){
        cout << n<< " is found at index " << result+1 ;
    }
    else{
        cout << n<< " is not found" ;
    }
}

int search_jump(int val){

    int n = MAX-1;  // Size of Array
    int left = 0;
    int right = sqrt(n);

    while(arr[right]<=val && right < n){
        left = right;
        right += sqrt(n);
        if(right > n){
            right  = n;
        }
    }

    for (int i = left; i<=right;i++){
        if(arr[i] == val){
            return i;
        }
    }

    return -1;
}
