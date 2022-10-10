// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//passed by reference
void print(int arr[][100],int n, int m){
//for printing array
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}

int main() {
    int n;
    int m;
    cin>>n>>m;
    int arr[100][100];
//reading input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    print(arr,n,m);

    return 0;
}