#include<iostream>
using namespace std;
class Matrix{

};


int main(){
    int row,col;
    cout<<"Enter the number of row and column";
    cin>>row>>col;
    // Dynamically allocate a 2D array
    int** arr = new int*[row];
    for(int i = 0; i < row; ++i) {
        arr[i] = new int[col];
    }

    

    // Free allocated memory
    for(int i = 0; i < row; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}