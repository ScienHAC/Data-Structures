#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,5,4,2,19,9,8}; //2 4 5 3
    int length = sizeof(arr)/sizeof(int);
    for(int i=0;i<length-1;i++){
        int j = i;
        int min = arr[i+1];
        while(arr[j]>min && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = min;
    }
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}