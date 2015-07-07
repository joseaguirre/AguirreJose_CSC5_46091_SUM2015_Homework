/* File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 29, 2015, 9:16 AM
 *Purpose:  Homework, credit card problem, revolving credit 
 *Savitch Chapter 3 #2
 *URL: 
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream
//User Libraries

//Global Constants

const int cvtPer = 100;// to convert percent to a decimal

const float tenPer = .1f;//ten percent as a decimal 

//Function Prototypes

//Execution Begins Here!
int main()

{
    char ans; 
   do{

        //Declare variables
        float accBal;//account balance
        float intRt = 1.5f;//interest rate
        float intDue; // interest you will have to pay back
        float totDue;//total due

        //prompt and input account balance
        cout << "Enter your account balance: " << endl; 
        cin >> accBal; 

        //calculation for the first 1000 dollars and under
        if(accBal <= 1000 )
        {
        intRt = intRt / cvtPer; //convert interest rate to decimal
        intDue = accBal * intRt; //calculate interest due on account balance
        totDue = accBal + intDue; //calculate total due
        
        //output total due
        cout << "You owe " << totDue << " dollars." << endl; 
            if(totDue <= 10)
            {
                cout << "Your minimum payment is ";

                cout << totDue;

                cout << " dollars."; 

                cout << endl; //minpay = totdue


            }else if(totDue > 10 && totDue <= 100){

                    cout << "Your minimum payment is $10." << endl; 

             

                }else if(totDue > 100 && totDue <= 1015){                

                    totDue = totDue * tenPer;

                    cout << "Your minimum payment is " << totDue << endl; 

        }
        }

        else{

            //change interest rate for anything > 1000 dollars is 1%

            accBal = accBal - 1000; //subtract 1000 from account balance since rate is dif for this
            intRt = 1; //set new interest rate 1% on any additional money borrowed over $1000
            intRt = intRt / cvtPer;//convert percent rate to decimal 
            intDue = accBal * intRt; //calculate interest due
            totDue = accBal + intDue + 1015;//calculate total due, 1015 is from the first thousand

            //for 1000 you owe 1015 minimum payment is 101.5 + 1% of anything over 1000
            cout << "You owe " << totDue << " dollars." << endl; 

            // calculate minimum payment.
            totDue = totDue * tenPer;
            cout << "Your minimum payment is " << totDue << endl; 
        }
        
        //repeat program
        cout << "Repeat?" << endl;
        cout << "Y or N?" << endl; 
        cin >> ans; 
    }while(ans == 'y' or ans == 'Y'); 
    //exit stage right
    return 0;
}


