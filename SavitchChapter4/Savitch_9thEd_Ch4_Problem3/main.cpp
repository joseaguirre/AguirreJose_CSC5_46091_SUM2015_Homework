/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on July 5, 2015, 8:08 PM
 *Purpose:  Homework, compute user's stock holding
 *url: http://ideone.com/7EfuL9
 *Savitch 9th Edition Chapter 4 problem 3
 */
//System Libraries
#include <iostream> //I/O Library
#include <iomanip> //setprecision
using namespace std;//Namespace for iostream
//User Libraries
//Global Constants
//Function Prototypes
int stock(int wholeDollar_par, int numerator_par, int denominator_par, float shares); 
//Execution Begins Here!
int main() 
{
   
    char ans;
    do{
    
    //Declare variables
    float shares; //# of shares of stock owned
    int wholeDollar, numerator, denominator; //portion of price of stock owned
      
    //Prompt then Input 
    cout << "Enter the amount of stock shares owned: " << endl; 
    cin >> shares; 
    cout << "Enter the whole dollar amount: "  << endl; 
    cin >> wholeDollar; 
    cout << "Enter the numerator fraction amount: "  << endl; 
    cin >> numerator; 
    cout << "Enter the denominator fraction amount: "  << endl; 
    cin >> denominator; 
     
    
    //output results
    cout << "User's holdings is currently: " << endl; 
    stock(wholeDollar, numerator, denominator, shares); 
    

    cout << endl; 
    cout << "Would you like to repeat program?" << endl; 
    cout << "Type y for yes and any other key to end program." << endl; 
    cin >> ans; 
    }while(ans == 'y'); 
    

    //Exit stage right!
    return 0;
}



int stock(int wholeDollar_par, int numerator_par, int denominator_par, float shares_par)
{
    float stockValue;//computes overall stock value 
    //calculate stock value 
    //multiply whole dollar amount by shares step 1
    //multiply numerator by shares step 2
    //divide numerator by denominator step 3
    //add whole number amount from step 3 to step 1, step 4
    //output remainder over denominator
    
    stockValue = (numerator_par * shares_par)/denominator_par;
    stockValue = stockValue + wholeDollar_par * shares_par;
    
    cout << fixed << showpoint << setprecision(2); 
    cout << stockValue; 
    cout << endl; 
    
    return (stockValue); 
}



