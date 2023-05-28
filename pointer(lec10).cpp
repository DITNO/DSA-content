// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a =10;
    double b = 1322.4;
    //location printing
    cout<<&a<<endl;
    cout<<&b<<endl;
    //storing location in pointer
    int* ptr = &a;
    double* bptr = &b;
    //printing values of ptr which contains the value that is address of a and b 
    cout<<ptr<<endl;
    cout<<bptr<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(bptr)<<endl;
    //creating double pointer - pointer which stores the location of the pointer
    int**pptr=&ptr;
    //printing the location or the address of &ptr
    cout<<pptr<<endl;
    //getiing the value by dereferencing
    cout<<*pptr<<endl;//dereferencing the ptr
    cout<<*(&ptr)<<endl;//dereferencing the ptr with another type
    cout<<**pptr<<endl;//double dereference to the value of a
    cout<<*(&a)<<endl;//double dereference to the value of a by another way
    cout<<sizeof(**pptr)<<endl;//derefering to int that is of size 4
    //case of character
    char ch = 'a';
    cout<<&ch;
    //making pointer of cahr
    char *c = &ch;
    //it'll still inflict the value at the bucket till we get null
    cout<<c;
    //fooling of complier
    //this helps us to get the address of the char 
    cout<<(void*)&ch<<endl;
    //using void is the standard practice but we can use any other datatype like int,float,bool or double
    //--------------------------------------------------------------------
    //array in ptr
    int arr[]={1,2,3,4};
    cout<<&arr[0]<<endl;
    cout<<arr<<endl;
    //in case of array both the srting point and the array on cout will give out the starting address of the array
    //--------------------------------------------------------------------
    int x = 10;
    int*xtr = &x;
    cout<<xtr<<endl;
    //addition in the pointer will give out the address + times of value type
    cout<<xtr+1<<endl;
    //10c + (1*4) = xtr+1 = 110
    cout<<xtr+2<<endl;
    //10c + (2*4) = xtr+2 = 114
    cout<<xtr+3<<endl;
    //10c + (3*4) = xtr+3 = 118
    
    return 0;
}
