#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int max_num = INT_MIN;
    for(int i = 0; i<arr.size();i++){
     max_num = max(max_num,arr[i]);
    }
    return max_num;
}