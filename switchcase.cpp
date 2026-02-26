#include<iostream>
using namespace std;
int main (){
    int age = 20;
    cout<<"enter your age to check your age status: ";
    cin>>age;
    switch (age)
    {
    case 20:
        cout<<"you are 20 years old."<<endl;
    
        case 18:
        cout<<"you are 18 years old."<<endl;
        // we can use the brak statement to break the switch case but if we not use the break statement then it will print all cases which is true.
        case 25:
        cout<<"you are 25 years old."<<endl;
        
        case 40:
        cout<<"you are 40 years old."<<endl;
        
        case 60:
        cout<<"you are 60 years old."<<endl;
        break;
        
    
    default:
    cout<<"your age is not in list"<<endl;
        break;
    }
    return 0;
}