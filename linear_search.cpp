
#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key){

    for(int i=0;i<n;i++){
//cheching inside the loop
        if(arr[i]==key)
        {
            return i;
        }
    }
// when the element isnn't found in the loop
    return -1;
}

int main() {
	// your code goes here
    int arr[] = {1,2,3,4,5,12,7};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index = linear_search(arr,n,key);
    if(index!= -1)
    cout<<"the key is present at index "<<index<<endl;
    else {
        cout<<key<<"isn't found in the array";
    }
	return 0;
}

