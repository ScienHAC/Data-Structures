#include<iostream>
// #include<algorithm>
using namespace std;
int main(){
    int arr[] = {10,5,4,2,19,9,8};
    int length = sizeof(arr)/sizeof(int);
    for(int i=0;i<length-1;i++){
        for(int j = 0;j<length-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}