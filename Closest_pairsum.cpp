#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    // your code goes here
    int size = arr.size();
    int rel_s,rel_e;
    int s = 0;
    int e = size -1;
    int diff = INT_MAX;
    while(e > s){
    if(abs(arr[s] + arr[e] - x) < diff){
        rel_s = s;
        rel_e = e;
        diff = abs(arr[s] + arr[e] - x);
    }
        if(arr[s]+arr[e]<x){
            s++;
        }
        else e--;
        
    }
    return {arr[rel_s],arr[rel_e]};
    }