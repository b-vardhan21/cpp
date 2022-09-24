#include <iostream>
using namespace std;
int main(){

    int num = 10;
    
    cout<<num<<endl;

    //address of operator - &

    cout << &num <<endl;

    int *ptr = &num;

    cout<< "value is : "<< *ptr <<endl;

    cout<< "Address is : "<< ptr <<endl;

    //Pointer size 8 bytes!!

    int *q = ptr;
    cout << ptr << " - "<< q;
    cout << *ptr << " - "<< *q;
}