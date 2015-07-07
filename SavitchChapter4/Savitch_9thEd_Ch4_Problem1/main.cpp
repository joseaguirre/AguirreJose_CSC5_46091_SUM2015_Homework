/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on July 5, 2015, 5:18 PM
 *Purpose:  Homework, calculate MPG, user inputs liters
 *url: http://ideone.com/jB7whm
 *Savitch 9th Edition Chapter 4 problem 1
 */
//System Libraries
#include <iostream> //I/O Library
#include <iomanip> //setprecision
using namespace std;//Namespace for iostream
//User Libraries
//Global Constants
const float GPL = .264179f;//gallons per liter
//Function Prototypes
float mpg(int miles, float gallons); 
//Execution Begins Here!
int main() 
{
    char ans;
    do{   
    //Declare variables
    float liters; //liters consumed by users cars
    int miles; //miles traveled by user 
    float gallons; //gallons consumed by users car
      
    //Prompt then Input 
    cout << "Enter the amount of liters used on your trip: " << endl; 
    cin >> liters; 
    cout << "Enter the amount of miles covered on trip: "  << endl; 
    cin >> miles; 
    
     //convert liters to gallons 
    gallons = liters * GPL;
    
    mpg(miles, gallons); 

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
    cout << "mpg = ";
    cout << milPerGallon; 
    
    return (milPerGallon); 
}











