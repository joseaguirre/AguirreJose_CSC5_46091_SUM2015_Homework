/* File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 29, 2015, 6:16 PM
 *Purpose:  Homework, Long distance call
 *Savitch Chapter 3 #8
 *URL: http://ideone.com/nhQgKj
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
    char ans; 
    do{
    //declare variables
    char l1, l2;//letters one and two of day
    char x; 
    int callstartHour;
    int callstartMinute;
    int lengthofcallHour;
    int lengthofcallMinute;
    float moneyspent; 

    cout << "Enter the first two letters of the day call was placed: " << endl;
    cin >> l1 >> l2; 
    
    cout << "Enter the time you placed your call in xx:xx format." << endl; 
    cin >> callstartHour >> x >> callstartMinute;
    
    cout << "Enter the time your call lasted in xx:xx format." << endl; 
    cin >> lengthofcallHour >> x >> lengthofcallMinute; 
    
   if((l1=='m' && l2=='o') || (l1=='M' && l2=='o') || (l1=='M' && l2=='O')
      || (l1=='t' && l2=='u') || (l1=='T' && l2=='u') || (l1=='T' && l2=='U')
      || (l1=='w' && l2=='e') || (l1=='W' && l2=='e') || (l1=='W' && l2=='E')
      || (l1=='t' && l2=='h') || (l1=='T' && l2=='h') || (l1=='T' && l2=='H')
      || (l1=='f' && l2=='r') || (l1=='F' && l2=='r') || (l1=='F' && l2=='R'))
          {
                      
            if(callstartHour < 18 && callstartHour >= 8)
            {
                //calculate if call was m-f b/w 800 and 1800
                moneyspent = lengthofcallHour * 60 *.40 + lengthofcallMinute * .40;
                cout << "You spent $" << moneyspent << "." << endl; 
            }
                else 
                {
                    //calculate if call was m-f before 800 and after 1800
                    moneyspent = lengthofcallHour * 60 *.25 + lengthofcallMinute * .25;
                    cout << "You spent $" << moneyspent << "." << endl; 
                }
           } 
             
    if ((l1=='s' && l2=='a') || (l1=='S' && l2=='a') || (l1=='S' && l2=='A')
      || (l1=='s' && l2=='u') || (l1=='s' && l2=='u') || (l1=='S' && l2=='U'))
    {
        //calculate if call was sat or sun 
        moneyspent = lengthofcallHour * 60 *.15 + lengthofcallMinute * .15;
        cout << "You spent $" << moneyspent << "." << endl; 
    }
    
    cout << "Repeat, y or n?" << endl; 
    cin >> ans; 
    }while(ans == 'y'); 

      return 0; 
  }


