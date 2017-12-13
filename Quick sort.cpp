#include<iostream>

using namespace std;

int Partision(int A[],int starts,int ends){

    int pivot = A[ends];
    int index = starts;
    for(int i=starts; i<ends;i++){
        if(A[i] <= pivot){
            swap(A[i],A[index]);
            index++;
        }
    }
    swap(A[ends],A[index]);
    return index;
}

int Quick(int A[],int starts,int ends){

    if(starts < ends){
        int index = Partision(A, starts, ends);
        Quick(A,starts,index-1);
        Quick(A,index+1,ends);
    }
}
int main(){

    int Array [] = {77,33,44,11,88,22,55,66};
    Quick(Array,0,7);
    for(int i=0; i<8;i++){
        cout << Array[i] <<  " ";
    }

}
