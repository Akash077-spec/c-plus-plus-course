#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* b = &a;
    //pointer is a variavlbe which store rhe adddress of the another vraible
    //address of a is stored in b
    cout<<b<<endl;
    cout<<&a<<endl;
    //dereferencing the pointer

    cout<<" the value of b is"<<*b<<endl;

    // double pointer
    int** c = &b;
    cout<<" the value of c is"<<**c<<endl;
    cout<<" the address of b is"<<b<<endl;
    cout<<" the address of c is"<<c<<endl;
    cout<<" the value of c is"<<*c<<endl;
    
    return 0;
}