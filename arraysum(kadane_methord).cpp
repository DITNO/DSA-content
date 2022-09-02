#include<iostream>
using namespace std;

int subarraysum(int arr[], int n){
    int cs = 0;
    int largest_sum = 0;

    for(int i = 0; i<n ; i++){
        cs = cs + arr[i];
        if(cs < 0){
            cs = 0;
        }
        largest_sum = max(largest_sum,cs);
    }
    
    return largest_sum;
    
}

int main(){
    int arr[] = {1,2,3,-2,4};
    int n = sizeof(arr)/sizeof(int);

    cout<<subarraysum(arr,n)<<endl;

}