#include<iostream>
using namespace std ;
int main(){
    float a = 5.5;
    long double b = 5.5;
    cout<<"the size of 5.5 is :"<<sizeof(5.5)<<endl;
    cout<<"the size of 5.5 is :"<<sizeof(5.5f)<<endl;
    cout<<"the size of 5.5 is :"<<sizeof(5.5F)<<endl;
    cout<<"the size of 5.5 is :"<<sizeof(5.5L)<<endl;
    cout<<"the size of 5.5 is :"<<sizeof(5.5l)<<endl;


    // ***** reference variable in c++
    // name same variable ko do alag alag name dena reference variable kehlata hai
    float x = 55.6;
    float &y = x;

    cout<<x<<endl;
    cout<<y<<endl;


    // ****** typecasting in c++;
    // typecasting ka matlab hai ek data type ko dusre data type me convert karna;
    int c= 54.7;
    float d = 88.88;
    cout<<"the value of c is"<<c<<endl;
    cout<<"the value of d is"<<d<<endl;
    cout<<"the value of d is"<<(int)d<<endl;
    cout<<"the value of c is"<<float(c)<<endl;
    return 0 ;
}