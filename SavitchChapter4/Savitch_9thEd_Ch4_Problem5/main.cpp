/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on July 5, 2015, 8:58 PM
 *Purpose:  Homework, compute inflation rate, output price after one and two years
 *url: http://ideone.com/cnyUp5
 *Savitch 9th Edition Chapter 4 problem 5
 */
//System Libraries
#include <iostream> //I/O Library
#include <iomanip> //setprecision
using namespace std;//Namespace for iostream
//User Libraries
//Global Constants
const float CVTPER = 100; //convert a decimal to a percent
const float CVTDEC = 100; //convert a percent to a decimal
//Function Prototypes
int inflationRate(float price1_par, float price2_par); //calculates inflation rate
int newPrice(float inRate, float price2);


//Execution Begins Here!
int main() 
{
   
    char ans;
    do{
    
    //Declare variables
    float price1;//original price of item
    float price2;//price of og item after one year
    float inRate; 
      
    //Prompt then Input 
    cout << "Enter the original price of item: " << endl; 
    cin >> price1; 
    cout << "Enter the price after one year: "  << endl; 
    cin >> price2; 
     
    
    //output results for inflation rate
    cout << "The inflation rate is: "; 
    inflationRate(price1, price2); 
    cout << "%" << endl; 
    
    
    
    inRate = inflationRate(price1, price2); //inRate set equal to inflation rate
    
    //output results after one year
    cout << "Next year this item is expected to rise to a price of: " << endl; 
    newPrice(inRate, price2);
    cout << " dollars.";
    cout << endl; 
    



    
    
    

    cout << endl; 
    cout << "Would you like to repeat program?" << endl; 
    cout << "Type y for yes and any other key to end program." << endl; 
    cin >> ans; 
    }while(ans == 'y'); 
    

    //Exit stage right!
    return 0;
}



int inflationRate(float price1_par, float price2_par)
{
    float inflationRate; // inflation rate variable
    
    inflationRate = (price2_par - price1_par)/price1_par;
    inflationRate = inflationRate * CVTPER;//convert to a percent
    
    cout << fixed << showpoint << setprecision(2); 
    cout << inflationRate; 
    cout << endl; 
    
    return (inflationRate); 
}


int newPrice(float inRate, float price2)
{
    float newPrice; 
    newPrice = (inRate * price2) / CVTDEC + price2;
    cout << newPrice; 
    cout << endl; 
    
    return (newPrice);
    
}
    


