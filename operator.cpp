#include<iostream>
using namespace std;
int main(){




    // This is an example of an arithmetic operator in c++
    int a = 66 , b =66;
    cout<<"Arithmetic operation are : \n";
    cout<< "the value of a+b is:"<<a+b<<"\n" ;
    cout<< "the value of a-b is:"<<a-b<<"\n" ;
    cout<< "the value of a*b is:"<<a*b<<"\n" ;
    cout<< "the value of a/b is:"<<a/b<<"\n" ;
    cout<< "the value of a%b is:"<<a%b<<"\n" ;
    cout<< "the value of a ++ is:"<<a++<<"\n" ;
    cout<< "the value of a -- is:"<<a--<<"\n" ;
    cout<< "the value of ++a is:"<<++a<<"\n" ;
    cout<< "the value of --a is:"<<--a<<"\n" ;
// comrison operator in c++

    cout<<"Commparison operator are : \n";
    cout<<" the value of a==b is : "<<(a==b)<<"\n";
    cout<<" the value of a!=b is : "<<(a!=b)<<"\n";
    cout<<" the value of a>b is : "<<(a>b)<<"\n";
    cout<<" the value of a<b is : "<<(a<b)<<"\n";




    //Logical operator in c++
    cout<<"Logical operator are : \n";
    cout<<" the value of and operator is:"<<((a==b)&&(a<b))<<"\n";
    cout<<" the value of or operator is:"<<((a==b)||(a>b))<<"\n";
    cout<<" the value of not operator is:"<<!(a==b)<<"\n";
    return 0;

}