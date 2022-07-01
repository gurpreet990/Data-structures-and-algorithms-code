#include <iostream>
using namespace std;
int linear_search(const int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int Binary_search(int arr[],int n,int x){
    int low = 0,high = n-1;
    while(low<high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else if(arr[mid]>x){
            high = mid-1;
        }
    }
    return -1;
}
int main() {
    int arr[]={1,2,3,4,5};
    int n = 5;
    int x = 6;
    cout<<Binary_search(arr,n,x);
    return 0;
}
