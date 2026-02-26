#include<iostream>
#include<iomanip>
using namespace std;
int main (){

    // manipulator in c++
    //manipulator ka matlab hai ki hum apne output ko format kar sakte hai jaise ki hum apne output ko left mai kar sakte hai. 
    //setw() manipulator ka use karke hum apne output ko format kar sakte hai.iska use karke position set kar sakte hai.   
    int a=13, b = 52 , c = 66;
    cout<<"the value of a without setw is : "<<a<<endl;
    cout<<"the value of b without setw is : "<<b<<endl;
    cout<<"the value of c without setw is : "<<c<<endl;

    cout<<"the value of a  setw is : "<<setw(4)<<a<<endl;
    cout<<"the value of b  setw is : "<<setw(5)<<b<<endl;
    cout<<"the value of c  setw is : "<<setw(6)<<c<<endl;
    return 0;
}