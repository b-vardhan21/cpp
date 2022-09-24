#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the value"<<endl;
    cin >> a;
    int i = 1;
    int sum = 0, val = 10;

    if(a>0){
        cout<<"a is positive" <<endl;
    }
    else{
        cout<<"a is negative" <<endl;
    }

    while(i<=a){
        sum = sum + i;
        i = i+1;
    }

    cout<< "value of sum is "<<sum<<endl;

    for(int i=0;i<val;i++){
        cout<< i <<endl;
        i = i + 1;
    }

    return 0;
}