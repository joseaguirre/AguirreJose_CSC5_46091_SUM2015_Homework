/* File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 29, 2015, 9:16 AM
 *Purpose:  Homework, Farenheit=Celsius=-40
 *Savitch Chapter 3 #7
 *URL: http://ideone.com/zefsgV
 */




//System Libraries

#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!

int main()

{

    //declare variables

    int cls = 100;//temperature in celsius
    int frn;//temperature in farenheit

    cout << "This program outputs the degree where \n"; 
	cout << "Celsius and Fahrenheit are both the same.\n";
		while (cls != frn)
		{
			cls--;//celsius decrements from 100 until it finds an equal frn value at -40
			//calculate farenheit
			frn = (9.0 * cls) / 5.0 + 32;
		}
        cout << "The temperature " << frn << " is the same in both Fahrenheit and Celsius.\n";
    return 0; 

}
