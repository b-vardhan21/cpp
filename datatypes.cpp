#include <iostream>
using namespace std;
int main(){
    int a = 123; //4 bytes

    char b = 'v'; //1 bytes

    bool bl = true;//1 byte

    float f = 1.2;//8 bytes

    double d = 1.23;//8 bytes

    int size = sizeof(a);

    cout << a << " "<< b  << " " << bl << " " << f << " " << d  << " " << size << " "<< endl;
    return 0;
}