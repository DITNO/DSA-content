#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // your code goes here
    int size = A.size();
    int s = 0;
    int e = (size-1);
    int answer = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(Val < A[mid]){
            e = mid -1;
        }
        else {
        answer = A[mid];
        s = mid +1;}
    }
    return answer;
    
}