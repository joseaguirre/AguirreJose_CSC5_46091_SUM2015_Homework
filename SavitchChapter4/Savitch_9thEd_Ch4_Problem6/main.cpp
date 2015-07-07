/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on July 5, 2015, 10:08 PM
 *Purpose:  Homework, compute interest on  credit card account balance
 *URL: http://ideone.com/bJAnpL
 *Savitch 9th Edition Chapter 4 problem 6
 */
//System Libraries
#include <iostream> //I/O Library
#include <iomanip> //setprecision
using namespace std;//Namespace for iostream
//User Libraries
//Global Constants
//Function Prototypes
float interestDue(float inBal, float inRate, int mths);
//arguments are the initial balance on account, interest rate, and months



//Execution Begins Here!
int main() 
{
    //Declare variables
    float inBal;//initial balance 
    float inRate;//initial rate
    int mths;//loan term
   
    
    //Prompt then Input
    cout << "Enter your initial balance: ";
    cout << endl; 
    cin >> inBal; 
    cout << "Enter your interest rate: ";
    cout << endl; 
    cin >> inRate; 
    cout << "Enter months your interest has acculumated: ";
    cout << endl; 
    cin >> mths; 
    cout << endl; 
    
    interestDue(inBal, inRate, mths);//function call to compute interest due   
    
    return 0;
}




//function prototype
float interestDue(float inBal, float inRate, int mths)
{  
    int count = 1; 
    float inDue = 0; 
    //equation to calculate interest due for first month
    inDue = inDue + inBal*inRate + inBal;
    
        for(count; count < mths; count++) //loop for number of months
        {               
            //calculate interest due for repeating months
            inDue = inDue + inDue*inRate;
            cout << endl; 
        }
        
    //output results for interest due rate    
    cout << endl;
    cout << fixed << showpoint << setprecision(2); 
    cout << "Your interest due is: " << inDue << " dollars." << endl; 
    //exit stage right    
    return inDue; 

}


