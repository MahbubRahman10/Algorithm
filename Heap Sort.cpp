#include<iostream>
#include<string>
#include "Heap.h"

using namespace std;

int heap_size,temp;
int MAX_HEAPIFY(int c){

    int i = 1*2; // left child of root/ StartIndex*2, where StartIndex = 1
    while(i <= c){
        if(arrays[i+1] > arrays[i]){
            i = i+1;
        }
        else if(arrays[i] < arrays[i/2] ){
            break;
        }
        else{
            swap(arrays[i],arrays[i/2]);
            i = i*2;
        }
    }
}

int main(){
    heap();
    heap_size = counts;

    for (int i = heap_size;i>1;i-- ){
        temp = arrays[i];
        arrays[i] = arrays[1];
        arrays[1] = temp;
        MAX_HEAPIFY(i-1);
    }
    cout << "Heap Sort : \n";
    print();
}
