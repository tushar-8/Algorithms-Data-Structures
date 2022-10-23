#include<iostream>
using namespace std;
void printarray(int A[],int size){
for(int i=0;i<size;i++){
    cout<<A[i]<<" ";
}
}
void reverse(int A[],int size){
int start=0;
int end=size-1;
while(start<=end){
swap(A[start],A[end]);
start++;
end--;
}
}

int main(){
    int arr[100],n=6;
    cout<<"Enter array elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,6);
    printarray(arr,6);
}
