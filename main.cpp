#include <iostream>
using namespace std;
//int insertion(int arr[],int n,int x,int pos,int cap){
//    if(cap<n) {
//        return -1;
//    }
//        int idx = pos-1;
//        for(int i=n-1;i>=idx;i--){
//            arr[i+1]=arr[i];
//        }
//        arr[idx]=x;
//        return n+1;
//}
int deletion(int arr[],int n,int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            break;
        }
    }
        if(i==n){
            return n;
        }
        for(int j=i;j<n-1;j++){
            arr[j]=arr[j+1];
    }
    return n-1;
}
int main() {
    int arr[7]={1,2,3,4,5};
    int n = 5;
//    int cap = 7;
//    int pos = 3;
    int x = 30;
    //cout<<"\narray before insertion\n";
    cout<<"array before deletion\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    n = deletion(arr,n,x);
    //cout<<"\narray after insertion\n";
    cout<<"\narray after deletion\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
