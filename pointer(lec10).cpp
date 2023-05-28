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
    return 0;
}
