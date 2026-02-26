// loops in c++
/* there are three types of loops in c++
1. for loop
2. while loop
3. do while loop

*/ 
// for loop in c++
/* syntax of for loop is
for (intialization ; condition ; increment/ or decrement){
  // body of loop }
*/
#include<iostream>
using namespace std;
int main (){
    // print the no from 1 to 100 in reverse order using for loop
//  for (int  i = 100; i >= 0; i--)
//  {
//     cout << "Hello World " << i << endl;
//  }
 


 /* 
 while loop in c++
 syntax for while loop is
 while conditon {
 // statement}
 */
// int i = 1;

//  while (i<10)
//  {
//     cout <<"akash"<<i<<endl;
//     i++;
//  }
// example of infinite while loop

// int i = 1;
// while (true)

// {
//     cout<<i<<endl;
//     i++;
// }

// do while loop 
// syntax of do while loop
/* do {
    // body of loop
} while (condition); */
//  int i = 1;
//  do
//  {
//     cout<<i<<endl;
//     i++;
//  } while (i<10);
// ek baar loop chlega chahe condition true ho ya false ho
// int i = 1;
//  do
//  {
//     cout<<i<<endl;
//     i++;
//  } while (false);

// multiplication table of 6 usin do while loop
//int i = 1;
// do
// {
//     cout << "6 * " << i << " = " << 6*i << endl;
//     i++;
// } while (i<=10);
// addition table of 6
int i = 0;
do
{
    cout<<"6 + " << i << "="<<6+i<<endl;
    i++;
} while (i<=10);

 

 
}
