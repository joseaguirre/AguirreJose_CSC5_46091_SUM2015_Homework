/* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on July 5, 2015, 11:24 PM
 *Purpose:  Homework, compute gravitational force
 *URL:
 *Savitch 9th Edition Chapter 4 problem 7
 */
//System Libraries
#include <iostream> //I/O Library
#include <cmath> //power function
#include <iomanip> //setprecision
using namespace std;//Namespace for iostream
//User Libraries
//Global Constants
const float G = 6.673e-8;
//Function Prototypes
float gravitationalForce(float m1,float m2,float dist);
//Execution Begins Here!
int main()
{
    float m1, m2; //mass one and two
    float dist; //distance b/w two objects
    
    //prompt input
    cout << "Enter mass 1: " << endl; 
    cin >> m1;
    cout << "Enter mass 2: " << endl; 
    cin >> m2;
    cout << "Enter distance b/w both objects: " << endl; 
    cin >> dist;
    
    //function call
    gravitationalForce(m1, m2, dist);

    return 0; 
}

//calculate force
float gravitationalForce(float m1,float m2,float dist)
{
    float force; //gravitational force
    force = (G * m1 * m2) / pow(dist, 2);
    cout << "The gravitational force b/w both objects is: ";
    cout << force; 
    cout << " dynes.";
    return force; 
}   





