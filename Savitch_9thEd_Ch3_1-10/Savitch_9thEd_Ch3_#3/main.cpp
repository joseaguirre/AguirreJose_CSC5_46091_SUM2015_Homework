/* File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 29, 2015, 1:02 PM
 *Purpose:  Homework, Zodiac 
 *Savitch Chapter 3 #3
 *URL: 
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
        //Declare variables
        int month;//1-12 for january through december
        int date;//1-31 for days of a month
    
        //prompt and input date and month
        cout << "Enter the month you were born: " << endl; 
        cin>>month;
        cout << "Enter the date you were born: " << endl; 
        cin>>date;

        //output zodiac
        if((month == 1 && date >= 20 && date <=31) || (month ==2 && date <= 18))
        cout <<"Your Zodic Sign is Aquarius";
        else if((month == 2 && date >= 19  && date <=28) || (month == 3 && date <= 20))
        cout <<"Your Zodic Sign is Pisces";
        else if((month == 3 && date >= 21 && date <=31) || (month == 4 && date <= 19))
        cout <<"Your Zodic Sign is Aries";
        else if((month == 4 && date >= 20 && date <=30) || (month == 5 && date <= 20))
        cout <<"Your Zodic Sign is Taurus";
        else if((month == 5 && date >= 21 && date <=31) || (month == 6 && date <= 21))
        cout <<"Your Zodic Sign is Gemini";
        else if((month == 6 && date >= 22 && date <=30) || (month == 7 && date <= 22))
        cout <<"Your Zodic Sign is Cancer";
        else if((month == 7 && date >= 23 && date <=31) || (month == 8 && date <= 22))
        cout <<"Your Zodic Sign is Leo";
        else if((month == 8 && date >= 23 && date <=31) || (month == 9 && date <= 22))
        cout <<"Your Zodic Sign is Virgo";
        else if((month == 9 && date >= 23 && date <=30) || (month == 10 && date <= 22))
        cout <<"Your Zodic Sign is Libra";
        else if((month == 10 && date >= 23 && date <=31) || (month == 11 && date <= 21))
        cout <<"Your Zodic Sign is Scorpio";
        else if((month == 11 && date >= 22 && date <=30) || (month == 12 && date <= 21))
        cout <<"Your Zodic Sign is Sagittarius";
        else if((month == 12 && date >= 22 && date <=31) || (month ==1 && date <= 19))
        cout <<"Your Zodic Sign is Capricorn";

        cout << "\nRepeat?" << endl;
        cout << "Y or N?" << endl; 
        cin >> ans; 

    }while(ans == 'y' or ans == 'Y'); 
    return 0; 
}


