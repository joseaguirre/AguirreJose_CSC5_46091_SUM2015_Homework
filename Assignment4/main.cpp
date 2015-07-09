 /* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on July 5, 2015, 5:18 PM
 *Purpose:  Savitch 9th Edition Chapter 4 problems 1-10
 */
//System Libraries
#include <iostream> //I/O Library
#include <iomanip> //setprecision
#include <cstdlib>//the absolute values
#include <cmath>//power function in gravity problem
using namespace std; 
//User Libraries
//Global Constants
const float GPL = .264179f;//gallons per liter
const float CVTPER = 100; //convert a decimal to a percent
const float CVTDEC = 100; //convert a percent to a decimal
const float G = 6.673e-8;
//Function Prototypes
//problem 1
using namespace std;
void problemOne();
void initialize_screen();
float mpg1(int miles, float gallons);
void show_results1(float milesPerGallon);
//problem 2
void problemTwo();
void initialize_screen();
float mpg2(int miles, float gallon); 
void show_results2(float mpgOne, float mpgTwo);
//problem3
void problemThree();
void initialize_screen();
float stock(int wholeDollar_par, int numerator_par, int denominator_par, float shares); 
void show_results3(float holdings);
//problem4
void problemFour();
float inflationRate(float price1_par, float price2_par); 
void show_results4(float infRate);
void initialize_screen();
//problem5
void problemFive();
float inflationRate2(float price1_par, float price2_par); 
void show_results5(float infRate, float newPr);
float newPrice(float infRate, float price2);
void initialize_screen();
//problemsix
void probleSix();
float interestDue(float inBal, float inRate, int mths);
void show_results6(float intDue);
void initialize_screen();
//problem seven
void problemSeven();
float gravitationalForce(float m1,float m2,float dist);
void initialize_screen();
void show_results7(float gravitationalforce);
//problem eight
void problemEight(); 
void absValue(int par);// Version 1
void absValue(double par);// Version 2
void absValue(float par);// Version 3
void absValue(long par) ;// Version 4
//problem nine
void problemNine();
float max(float num1, float num2, float num3);
//problemten
void problemTen();
void expand(int);//expands integer into string, for example, 1 = one
//Execution Begins Here!
int main()
{
    int choice;
    cout << "Choose problem #: "; 
    cin >> choice; 
   
    switch(choice)
    {
        case 1: problemOne();
        break;
        case 2: problemTwo(); 
        break; 
        case 3: problemThree();
        break;
        case 4: problemFour();
        break;
        case 5: problemFive();
        break;   
        case 6: probleSix();
        break; 
        case 7: problemSeven();
        break;
        case 8: problemEight();
        break; 
        case 9: problemNine();
        break; 
        case 10: problemTen();
        break;
    }
    return 0;
}
void problemOne()
{
    char ans;
    do{
    initialize_screen();
    //Declare variables
    float liters; //liters consumed by users cars
    int miles; //miles traveled by user 
    float gallons; //gallons consumed by users car
    float milesPerGallon;
    //Prompt then Input 
    cout << "Enter the amount of liters used on your trip: " << endl; 
    cin >> liters; 
    cout << "Enter the amount of miles covered on trip: "  << endl; 
    cin >> miles; 
    
    //convert liters to gallons 
    gallons = liters * GPL;
    milesPerGallon = mpg1(miles, gallons);
    show_results1(milesPerGallon);
    cout << endl; 
    cout << "Would you like to repeat program?" << endl; 
    cout << "Type y for yes and any other key to end program." << endl; 
    cin >> ans; 
    }while(ans == 'y'); 
    
}
float mpg1(int miles, float gallons) 
{
    //calculate mpg 
    return (miles / gallons); 
}
void show_results1(float milesPerGallon)
{
    using namespace std; 
    cout << fixed << showpoint << setprecision(2);
    cout << milesPerGallon << " mpg.\n";
    return; 
}
void initialize_screen()
{
    using namespace std; 
    cout << endl; 
    return;
}
void problemTwo()
{
    char ans;
    do{       
    initialize_screen();
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
    //call functions
    mpgOne = mpg2( milesOne,  galOne); 
    mpgTwo = mpg2( milesTwo,  galTwo); 
    
    show_results2(mpgOne, mpgTwo);
    
    cout << endl; 
    cout << "Would you like to repeat program?" << endl; 
    cout << "Type y for yes and any other key to end program." << endl; 
    cin >> ans; 
    }while(ans == 'y'); 
}
float mpg2(int miles, float gallons) 
{
    //calculates mpg
    return (miles / gallons); 
}
void show_results2(float mpgOne, float mpgTwo)
{
    //output results
    using namespace std; 
    cout << fixed << showpoint << setprecision(2);
    cout << "Car one's mpg is: " << endl; 
    cout << mpgOne << " mpg.\n";
    cout << "Car two's mpg is: " << endl; 
    cout << mpgTwo << " mpg.\n";
    
    if(mpgOne > mpgTwo)
        cout << "Car one has better mpg." << endl; 
    else
        cout << "Car two has better mpg." << endl;         
    return; 
}
void problemThree()
{
    char ans;
    do{
    
    initialize_screen();
    //Declare variables
    float shares; //# of shares of stock owned
    int wholeDollar, numerator, denominator; //portion of price of stock owned
    float holdings;//amount user has invested
      
    //Prompt then Input 
    cout << "Enter the amount of stock shares owned: " << endl; 
    cin >> shares; 
    cout << "Enter the whole dollar amount: "  << endl; 
    cin >> wholeDollar; 
    cout << "Enter the numerator fraction amount: "  << endl; 
    cin >> numerator; 
    cout << "Enter the denominator fraction amount: "  << endl; 
    cin >> denominator; 
    //call function
    holdings = stock(wholeDollar, numerator, denominator, shares); 
    show_results3(holdings);
    cout << endl; 
    cout << "Would you like to repeat program?" << endl; 
    cout << "Type y for yes and any other key to end program." << endl; 
    cin >> ans; 
    }while(ans == 'y'); 
}
float stock(int wholeDollar_par, int numerator_par, int denominator_par, float shares_par)
{
    float stockValue;//computes overall stock value 
    //calculate stock value 
    //multiply whole dollar amount by shares step 1
    //multiply numerator by shares step 2
    //divide numerator by denominator step 3
    //add whole number amount from step 3 to step 1, step 4
    //output remainder over denominator
    
    stockValue = (numerator_par * shares_par)/denominator_par;
    stockValue = stockValue + wholeDollar_par * shares_par;
    return (stockValue); 
}
void show_results3(float holdings)
{
    //output results
    using namespace std; 
    cout << fixed << showpoint << setprecision(2);
    cout << "User's holdings is currently: " << endl; 
    cout << holdings << endl; 
    return; 
}
void problemFour()
{
    char ans;
    do{
    void initialize_screen();
    //Declare variables
    float price1;//original price of item
    float price2;//price of og item after one year
    float infRate;//inflation rate
      
    //Prompt then Input 
    cout << "Enter the original price of item: " << endl; 
    cin >> price1; 
    cout << "Enter the price after one year: "  << endl; 
    cin >> price2; 
     
    
    infRate = inflationRate(price1, price2); 
    show_results4(infRate);
    cout << endl; 
    cout << "Would you like to repeat program?" << endl; 
    cout << "Type y for yes and any other key to end program." << endl; 
    cin >> ans; 
    }while(ans == 'y'); 
}
void show_results4(float infRate)
{
    using namespace std; 
    cout << "The inflation rate is: "; 
    cout << fixed << showpoint << setprecision(2); 
    cout << infRate; 
    cout << "%";
    cout << endl; 
    return; 
}
float inflationRate(float price1_par, float price2_par)
{
    return (((price2_par - price1_par)/price1_par) * CVTPER); 
}
void problemFive()
{
    char ans;
    do{
        
    void initialize_screen();
    
    //Declare variables
    float price1;//original price of item
    float price2;//price of og item after one year
    float infRate;//inflation rate
    float newPr;//variable for new price
      
    //Prompt then Input 
    cout << "Enter the original price of item: " << endl; 
    cin >> price1; 
    cout << "Enter the price after one year: "  << endl; 
    cin >> price2; 
     
    
    infRate = inflationRate2(price1, price2); 
    newPr = newPrice(infRate, price2);
    show_results5(infRate, newPr);
    
    cout << endl; 
    cout << "Would you like to repeat program?" << endl; 
    cout << "Type y for yes and any other key to end program." << endl; 
    cin >> ans; 
    }while(ans == 'y'); 
}
void show_results5(float infRate, float newPr)
{
    using namespace std; 
    cout << "The inflation rate is: "; 
    cout << fixed << showpoint << setprecision(2); 
    cout << infRate; 
    cout << "%";
    cout << endl; 
    cout << "After one more year the price will rise to: ";
    cout << endl; 
    cout << newPr; 
    return; 
}
float inflationRate2(float price1_par, float price2_par)
{
    return (((price2_par - price1_par)/price1_par) * CVTPER); 
}
float newPrice(float infRate, float price2)
{
    return ((infRate * price2) / CVTDEC + price2);
}
void probleSix()
{
    void initialize_screen();
    //Declare variables
    float inBal;//initial balance 
    float inRate;//initial rate
    int mths;//loan term
    float intDue;//interest due
   
    
    //Prompt then Input
    cout << "Enter your initial balance: ";
    cout << endl; 
    cin >> inBal; 
    cout << "Enter your interest rate: ";
    cout << endl; 
    cin >> inRate; 
    cout << "Enter months your interest has acculumated: ";
    cout << endl; 
    cin >> mths; 
    cout << endl; 
    
    intDue = interestDue(inBal, inRate, mths);//function call to compute interest due   
    show_results6(intDue);//output results
}
float interestDue(float inBal, float inRate, int mths)
{
    using namespace std; 
    int count = 1; 
    float inDue = 0; 
    //equation to calculate interest due for first month
    inDue = inDue + inBal*inRate + inBal;
    
        for(count; count < mths; count++) //loop for number of months
        {               
            //calculate interest due for repeating months
            inDue = inDue + inDue*inRate;
            cout << endl; 
        }
    //exit stage right    
    return inDue; 
}
void show_results6(float intDue)
{
    using namespace std; 
   //output results for interest due rate    
   cout << endl;
   cout << fixed << showpoint << setprecision(2); 
   cout << "Your total due is: " << intDue << " dollars." << endl; 
}
void problemSeven()
{
    
    float m1, m2; //mass one and two
    float dist; //distance b/w two objects
    float something; 
    
    //prompt input
    cout << "Enter mass 1: " << endl; 
    cin >> m1;
    cout << "Enter mass 2: " << endl; 
    cin >> m2;
    cout << "Enter distance b/w both objects: " << endl; 
    cin >> dist;
    
    //function call
  
    
    something = gravitationalForce(m1, m2, dist);
    show_results7(something);
}

float gravitationalForce(float m1,float m2,float dist)
{
    //calculate force
    return ((G * m1 * m2) / pow(dist, 2));
}   

void show_results7(float gravitationalforce)
{
    using namespace std;
    cout << "The gravitational force is = to ";
    cout << gravitationalforce; 
    cout << " dynes.";
}
void problemEight()
{
   absValue(3);// version 1 of absolute value is for type int
   absValue(-7.5);// version 2of absolute value is for type double
   absValue(5.6);// version 3 of absolute value is for type float
   absValue(-7000); // version 4 of absolute value is for type long
}
void absValue(int par) 
{  
    cout << "The abs value of 3 is: ";
   cout << abs(par) << endl;
   // version 1 calculates absolute value is for type int 
}
 
void absValue(double par) 
{ 
   cout << "The abs value of -7.5 is: ";
   cout << fabs(par) << endl;
   // version 2 calculates absolute value is for type double 
}
 
void absValue(float par) 
{ 
    
   cout << "The abs value of 5.6 is: ";
   cout << fabs(par) << endl;
   // version 3 calculates absolute value is for type float  
}
void absValue(long par) 
{ 
   cout << "The abs value of -7000 is: ";
   cout << labs(par) << endl;
   // version 4 calculates absolute value is for type long 
}
void problemNine()
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
void problemTen()
{
    int num = 99;//tune begins with 99 bottles
    for(num; num>=1; num--)//runs through all 100 varieties
    {
        expand(num);
        //output the tune!
        cout << " bottles of beer on the wall,"; 
        cout << endl; 
        expand(num);
        cout << " bottles of beer,"; 
        cout << endl; 
        cout << "Take one down, pass it around, "; 
        cout << endl; 
        expand(num-1);
        cout << " bottles of beer on the wall."; 
        cout << endl; 
        cout << endl; 
        
    }
}
void expand(int value)
{
    const char * const ones[20] = {"zero", "one", "two", "three","four","five","six","seven",
    "eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
    "eighteen","nineteen"};
    const char * const tens[10] = {" ", "ten", "twenty", "thirty","forty","fifty","sixty","seventy",
    "eighty","ninety"};
    if(value >= 20)
    {
        cout << tens[value / 10];
        if(value % 10)
        {
            cout << "-";
            expand(value % 10);
        }
    }
    else
    {
        cout<<ones[value];
    }
    return;
}