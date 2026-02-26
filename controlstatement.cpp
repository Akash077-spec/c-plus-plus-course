#include<iostream>
using namespace std;
int main (){
    int a = 10;

    
    if(a<5){
        cout<<"the value is :"<< a<<endl;
        a++;
    }
    else{
        cout<<"the value is greater than 5 :"<< a<<endl;
    }
// if else statement in c++.
int age  = 18;
cout<<"enter your age"<<endl;
cin>>age;
if(age<18){
    cout<<"you are not eligible to vote."<<endl;
}
else if (age==18){
    cout<<"you have to wait for one more year"<<endl;
}
else{
    cout<<"you are eligible to vote."<<endl;
}
    return 0 ;
}