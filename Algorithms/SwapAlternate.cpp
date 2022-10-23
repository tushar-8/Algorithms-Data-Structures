#include<iostream>
using namespace std;
void printarray(int A[],int size){
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void swapp(int A[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
         swap(A[i],A[i+1]);
        }
    }
}

int main(){
    int arr[100]={12,45,63,78,98},brr[100]={11,13,15,17,19,21};
    swapp(arr,5);
    printarray(arr,5);
    swapp(brr,6);
    printarray(brr,6);
}
