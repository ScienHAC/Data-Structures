#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,5,4,2,19,9,8};
    int length = sizeof(arr)/sizeof(int);
    for(int i=0;i<length;i++){
        int minIndex = i;
        for(int j = i+1;arr[minIndex]>arr[j];j++){
            int temp = arr[minIndex];
            arr[minIndex] = arr[j];
            arr[j] = temp;
        }
    }
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}