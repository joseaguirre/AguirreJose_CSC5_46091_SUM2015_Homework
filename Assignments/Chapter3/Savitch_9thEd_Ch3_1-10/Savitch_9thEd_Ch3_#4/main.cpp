/* File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 29, 2015, 1:02 PM
 *Purpose:  Homework, lets user know their Zodiac, Element, and other zodia compatibility
 *Savitch 9th edition Chapter 3 #4
 *URL: http://ideone.com/c4RFx2
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
        //output zodiac, element, and compatibility
        if((month == 1 && date >= 20 && date <=31) || (month ==2 && date <= 18))
        {
            cout <<"Your Zodic Sign is Aquarius" << endl; 
            cout << "Your element, air, is most comfortable with Libra and Gemini." << endl; 
        }else if((month == 2 && date >= 19  && date <=28) || (month == 3 && date <= 20))
        {
            cout <<"Your Zodic Sign is Pisces" << endl; 
            cout << "Your element, water, is most comfortable with Scorpio and Cancer." << endl; 
        }else if((month == 3 && date >= 21 && date <=31) || (month == 4 && date <= 19))
        {
            cout <<"Your Zodic Sign is Aries" << endl;
            cout << "Your element, fire, is most comfortable with Leo and Sagittarius." << endl; 
        }else if((month == 4 && date >= 20 && date <=30) || (month == 5 && date <= 20))
        {
            cout <<"Your Zodic Sign is Taurus" << endl; 
            cout << "Your element, earth, is most comfortable with Virgo and Capricorn." << endl;
        }else if((month == 5 && date >= 21 && date <=31) || (month == 6 && date <= 21))
        {
            cout <<"Your Zodic Sign is Gemini" << endl; 
            cout << "Your element, air, is most comfortable with Libra and Aquarius." << endl; 
        }else if((month == 6 && date >= 22 && date <=30) || (month == 7 && date <= 22))
        {
            cout <<"Your Zodic Sign is Cancer" << endl; 
            cout << "Your element, water, is most comfortable with Scorpio and Pisces." << endl; 
        }else if((month == 7 && date >= 23 && date <=31) || (month == 8 && date <= 22))
        {
            cout <<"Your Zodic Sign is Leo" << endl; 
            cout << "Your element, fire, is most comfortable with Aries and Sagittarius." << endl;
        }else if((month == 8 && date >= 23 && date <=31) || (month == 9 && date <= 22))
        {    
            cout <<"Your Zodic Sign is Virgo" << endl; 
            cout << "Your element, earth, is most comfortable with Virgo and Taurus." << endl;
        }else if((month == 9 && date >= 23 && date <=30) || (month == 10 && date <= 22))
        {
            cout <<"Your Zodic Sign is Libra" << endl;
            cout << "Your element, air, is most comfortable with Aquarius and Gemini." << endl; 
        }else if((month == 10 && date >= 23 && date <=31) || (month == 11 && date <= 21))
        {
            cout <<"Your Zodic Sign is Scorpio" << endl; 
            cout << "Your element, water, is most comfortable with Cancer and Pisces." << endl; 
        }else if((month == 11 && date >= 22 && date <=30) || (month == 12 && date <= 21))
        {
            cout <<"Your Zodic Sign is Sagittarius" << endl; 
            cout << "Your element, fire, is most comfortable with Leo and Aries." << endl;
        }else if((month == 12 && date >= 22 && date <=31) || (month ==1 && date <= 19))
        {
            cout <<"Your Zodic Sign is Capricorn" << endl; 
            cout << "Your element, earth, is most comfortable with Virgo and Taurus." << endl;
        }
        cout << "\nRepeat?" << endl;
        cout << "Y or N?" << endl; 
        cin >> ans; 
    }while(ans == 'y' or ans == 'Y'); 
    
    return 0; 
}
