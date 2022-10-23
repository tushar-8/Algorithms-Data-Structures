#include<iostream>
using namespace std;
int getMax(int arr[],int n){
    int maxm= INT32_MIN;
    for(int i=0;i<n;i++){
        maxm=max(maxm,arr[i]);
        // if (arr[i]>max)
        // {
        //     max=arr[i];
        // }
        
    }
    return maxm;
}
    int getMin(int arr[],int n){
    int minm= INT32_MAX;
    for(int i=0;i<n;i++){
        minm=min(minm,arr[i]);
        // if (arr[i]<min)
        // {
        //     min=arr[i];
        // }
        
    }
    return minm;
}
int main(){
    int A[100],n=5;
    cout<<"Enter arrays elements"<<endl;
    for(int i=0;i<n;i++){
cin>>A[i];
    }
    cout<<"Maximum element is "<<getMax(A,n)<<endl;
    cout<<"Minimum element is "<<getMin(A,n)<<endl;
}
