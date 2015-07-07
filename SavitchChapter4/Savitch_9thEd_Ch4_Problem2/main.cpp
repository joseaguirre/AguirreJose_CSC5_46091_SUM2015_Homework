/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on July 5, 2015, 6:54 PM
 *Purpose:  Homework, calculate MPG for two cars, user inputs liters
 *url: http://ideone.com/TYBjMR
 *Savitch 9th Edition Chapter 4 problem 2
 */
//System Libraries
#include <iostream> //I/O Library
#include <iomanip> //setprecision
using namespace std;//Namespace for iostream
//User Libraries
//Global Constants
const float GPL = .264179f;//gallons per liter
//Function Prototypes
float mpg(int miles, float gallon); 
//Execution Begins Here!
int main() 
{
   
    char ans;
    do{
    
    //Declare variables
    float litersOne, litersTwo; //liters consumed by users cars
    int milesOne, milesTwo; //miles traveled by user 
    float galOne, galTwo; //gallons consumed by users car
    float mpgOne, mpgTwo; 
      
    //Prompt then Input 
    cout << "Enter the amount of liters used on first car trip: " << endl; 
    cin >> litersOne; 
    cout << "Enter the amount of miles covered on first car trip: "  << endl; 
    cin >> milesOne; 
     
    cout << "Enter the amount of liters used on second car trip: " << endl; 
    cin >> litersTwo; 
    cout << "Enter the amount of miles covered on second car trip: "  << endl; 
    cin >> milesTwo;
    
     //convert liters to gallons 
    galOne = litersOne * GPL;
    galTwo = litersTwo * GPL;
    
    
    //output results
    cout << "Car one's mpg is: " << endl; 
    mpgOne = mpg( milesOne,  galOne); 
    cout << "Car two's mpg is: " << endl; 
    mpgTwo = mpg( milesTwo,  galTwo); 
    
    if(mpgOne > mpgTwo)
        cout << "Car one has better mpg." << endl; 
    else
        cout << "Car two has better mpg." << endl; 

    cout << endl; 
    cout << "Would you like to repeat program?" << endl; 
    cout << "Type y for yes and any other key to end program." << endl; 
    cin >> ans; 
    }while(ans == 'y'); 
    

    //Exit stage right!
    return 0;
}


float mpg(int miles, float gallons) 
{
    float milPerGallon; 
    //calculate mpg 
    milPerGallon = miles / gallons; 
    cout << fixed << showpoint << setprecision(2);
    cout << milPerGallon; 
    cout << endl; 
    
    return (milPerGallon); 
}







