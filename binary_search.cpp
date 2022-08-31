
#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key){
    int s =0;
    int e = n-1;

    while(s<=e){
    int mid = (s+e)/2;
    if(arr[mid] == key){
        return mid;
        }

    else if(arr[mid] > key){
        e = mid -1;
        }

    else{
        s = mid +1;
        }
    }

    return -1;

}

int main() {
	// your code goes here
    int arr[] = {1,2,3,4,5,12,17};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index = linear_search(arr,n,key);
    if(index!= -1)
    cout<<"the key is present at index "<<index<<endl;
    else {
        cout<<key<<" isn't found in the array";
    }
	return 0;
}

