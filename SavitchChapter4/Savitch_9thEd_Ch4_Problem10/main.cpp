/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on July 5, 2015, 8:24 AM
 *Purpose:  Homework, 99 bottles of beer on the wall
 *URL: http://ideone.com/zeKg2d
 *Savitch 9th Edition Chapter 4 problem 1 from programming projects #10
 */
//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream
//User Libraries
//Global Constants
//Function Prototypes 
void expand(int);//expands integer into string, for example, 1 = one

//Execution Begins Here!
int main()
{
    int num = 99;//tune begins with 99 bottles
    for(num; num>=1; num--)//runs through all 100 varieties
    {
        expand(num);
        //output the tune!
        cout << " bottles of beer on the wall,"; 
        cout << endl; 
        expand(num);
        cout << " bottles of beer,"; 
        cout << endl; 
        cout << "Take one down, pass it around, "; 
        cout << endl; 
        expand(num-1);
        cout << " bottles of beer on the wall."; 
        cout << endl; 
        cout << endl; 
        
    }
    //exit stage right
    return 0;
}
void expand(int value)
{
    const char * const ones[20] = {"zero", "one", "two", "three","four","five","six","seven",
    "eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
    "eighteen","nineteen"};
    const char * const tens[10] = {" ", "ten", "twenty", "thirty","forty","fifty","sixty","seventy",
    "eighty","ninety"};

    if(value >= 20)
    {
        cout << tens[value / 10];
        if(value % 10)
        {
            cout << "-";
            expand(value % 10);
        }
    }
    else
    {
        cout<<ones[value];
    }
    return;
}
