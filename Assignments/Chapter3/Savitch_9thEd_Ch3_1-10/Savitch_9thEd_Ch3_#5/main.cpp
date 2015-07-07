/* File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 29, 2015, 9:27 PM
 *Purpose:  Homework, calculate numbers b/w 3 and 100
 *Savitch 9th edition Chapter 3 #5
 *URL: http://ideone.com/utE1Tf
 */
//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!

int main () 
{
    //output results
    cout << "Primes between 3 and 100 are: " << endl; 
    //run a loop from 2-100, 2, 3, 4, 5, ...99, 100
    for (int i = 2; i<100; i++)      
        for (int j = 2; j<i; j++)
        {
            //calculate remainder i=6, j= 2, 3, 4, 5, 6 6%2 = 0 i.e. 6+1 =7
            if (i % j == 0) 
            break;
            else if (i == j+1)
                cout << i << endl;
        }
    return 0;
}
