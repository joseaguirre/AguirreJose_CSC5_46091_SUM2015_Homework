/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on July 5, 2015, 8:24 AM
 *Purpose:  Homework, Overload absolute value function
 *URL: http://ideone.com/B4tvtd
 *Savitch 9th Edition Chapter 4 problem 8
 */
//System Libraries
#include <iostream> //I/O Library
#include <cmath> //power function
#include <cstdlib>//for long
using namespace std;//Namespace for iostream
//User Libraries
//Global Constants
//Function Prototypes 
void absValue(int par);// Version 1
void absValue(double par);// Version 2
void absValue(float par);// Version 3
void absValue(long par) ;// Version 4

//Execution Begins Here!
int main() 
{
    
   absValue(3);// version 1 of absolute value is for type int
   absValue(-7.5);// version 2of absolute value is for type double
   absValue(5.6);// version 3 of absolute value is for type float
   absValue(-7000); // version 4 of absolute value is for type long
   
   return 0; 
}
 
 
// version 1 calculates absolute value is for type int 
void absValue(int par) {  // version 1
   cout << abs(par) << endl;
}
 
// version 2 calculates absolute value is for type double 
void absValue(double par) { // verssion 2
   cout << fabs(par) << endl;
}
 

// version 3 calculates absolute value is for type float  
void absValue(float par) { // version 3
   cout << fabs(par) << endl;
}


// version 4 calculates absolute value is for type long 
void absValue(long par) { // version 3
   cout << labs(par) << endl;
}




