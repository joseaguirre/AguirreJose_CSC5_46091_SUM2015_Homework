/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on July 5, 2015, 9:09 AM
 *Purpose:  Homework, max function takes three parameters outputs the largest
 *URL: http://ideone.com/PC4uoi
 *Savitch 9th Edition Chapter 4 problem 9
 */
//System Libraries
#include <iostream> //I/O Library
#include <cmath> //power function
using namespace std;//Namespace for iostream
//User Libraries
//Global Constants
//Function Prototypes 
//max function takes three parameters and outputs the largest
float max(float num1, float num2, float num3);
//Execution Begins Here!
int main()
{
    
    //declare variables
 	float num1; //first number
 	float num2;// second number
 	float num3;//third number
	
	//prompt user input for three numbers
        cout << "This program compares three numbers and outputs the greatest";
        cout << endl; 
	cout << " Enter first number: ";
	cin >> num1; 

	cout << " Enter second number: ";
	cin >> num2; 
	   
	cout << " Enter third number: ";
	cin >> num3;

    max(num1, num2, num3);//call function to compare and output largest

	//exit stage right
	return 0;
}


float max(float num1, float num2, float num3)
{
    if(num1>num2 && num1>num3)
    {
        cout << "First number is the greatest";
        return num1;
    }
        else if(num2>num3 && num2>num1)
        {
            cout << "Second number is the greatest";
            return num2;
        }
            else 
            {
                cout << "Third number is the greatest";
                return num3;
            }
}












