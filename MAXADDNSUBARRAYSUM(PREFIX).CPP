#include<iostream>
using namespace std;

int subarraysum(int arr[], int n){
    int prefix[100] = {0};
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }

    int largest_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum_subarray = i>0 ? prefix[j] - prefix[i-1] : prefix[j];

            largest_sum = max(largest_sum,sum_subarray);
        }
        
    }
    
    return largest_sum;
    
}

int main(){
    int arr[] = {1,2,3,-2,4,5};
    int n = sizeof(arr)/sizeof(int);

    cout<<subarraysum(arr,n)<<endl;

}