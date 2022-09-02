#include<iostream>
using namespace std;

int maxsubarray(int arr [], int n){
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int subarray = 0;
            for (int k = i; k <= j; k++)
            {
                subarray+= arr[k];
            }
            largest = max(largest, subarray);
        }
        
    }
    return largest;
    
}