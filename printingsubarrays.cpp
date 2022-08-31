
#include <iostream>
using namespace std;

void printallsubarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k <= j; k++)
            {
                cout<<arr[k]<<"'";
            }
            cout<<endl;
            
        }
        
    }
    
}

int main() {
	// your code goes here
    int arr[] = {1,2,3,4,5};
    int n =  sizeof(arr)/sizeof(int);

    printallsubarray(arr,n);
	return 0;
}
