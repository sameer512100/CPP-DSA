#include<bits/stdc++.h>
using namespace std;
void sel_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini = i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}
void display(int arr[],int n){
    cout<<"sorted array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n = 5;
    int arr[5]={3,5,2,4,1};
    sel_sort(arr,n);
    display(arr,n);
    return 0;
}