#include <iostream>
using namespace std;

int main() {
    // int array[10] = {1,2,3,4,5,6};
    // cout<<array[0]<<endl;
    // cout<<array[1]<<endl;
    // cout<<array[2]<<endl;
    // cout<<array[3]<<endl;
    // cout<<array[4]<<endl;
    // cout<<array[5]<<endl;

    // another way to print the valaue of array
    // int mathsarray[10];
    // mathsarray[0]=245;
    // mathsarray[1]=254;
    // mathsarray[2]=425;
    // cout<<mathsarray[0]<<endl;
    // // change the value of array.before the valve of 2 was 425 but now change to 55.
    // mathsarray[2]=55;
    // cout<<mathsarray[1]<<endl;
    // cout<<mathsarray[2]<<endl;

    /**********8 print the array value using  for loop loop */
    // int array[5] = {10,20,30,40,50};
    // for(int i=0; i<5; i++){
    //     cout<<"the value of arrar is :"<<array[i]<<endl;
        
    // }
    /**********8 print the array value using  while  loop */
    int marks[5] = {10,20,30,40,50};
    int i=0;
    while(i<5){
        cout<<"the value of arrar is :"<<marks[i]<<endl;
        i++;
    }
    // pointer and array
    int *ptr = marks;
    // cout<<"the value of *ptr is :"<<*ptr<<endl;
    // cout<<"the value of *ptr+1 is :"<<*(ptr+1)<<endl;
    // cout<<"the value of *ptr+2 is :"<<*(ptr+2)<<endl;
    // cout<<"the value of *ptr+3 is :"<<*(ptr+3)<<endl;
    // cout<<"the value of *ptr+4 is :"<<*(ptr+4)<<endl;
    cout<<*(++ptr)<<endl;
    cout<<*(ptr++)<<endl;
    cout<<*(ptr)<<endl;

    return 0;
}