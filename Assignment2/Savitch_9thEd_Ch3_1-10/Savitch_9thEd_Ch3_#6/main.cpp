/* File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 29, 2015, 9:16 AM
 *Purpose:  Homework, buoyant force 
 *Savitch Chapter 3 #6
 *URL: http://ideone.com/bBAem9
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User Libraries

//Global Constants

const float pi = 3.14159265;//floats are capitalized

//Function Prototypes

//Execution Begins Here!

int main()

{

    int lbs;//weight of your sphere, in pounds 
    int rad;//radius in feet of your sphere
    float flWt = 62.4f; //fluid weight Savitch chose 62.4 lbs/cubic feet
    float buoF; //bouyant force
    float vol; //sphere volume
    //prompt user input weight in pounds and radius in feet

    cout << "This program calculates the buoyant force " << endl; 
    cout << "and tells whether your sphere will float or sink.";
    cout << "Enter the weight of your sphere in lbs: " << endl; 
    cin >> lbs;
    cout << "Enter the radius of your sphere in ft: " << endl; 
    cin >> rad;

    //calculate volume 4/3 pi r^3

    vol = (4/3) * pi * rad * rad  *rad;

    buoF = flWt * vol;

    //if lbs <= Fb then, then output Fb

    if(lbs <= buoF)

        cout << "Your object will float." << endl; 

        else 

        cout << "Your sphere will sink." << endl; 

    

    return 0; 
}