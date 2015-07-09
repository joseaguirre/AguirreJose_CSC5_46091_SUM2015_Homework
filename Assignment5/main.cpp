 /* 
 * File:   main.cpp
 * Author: Jose Aguirre
 * Created on July 8, 2015, 12:04 PM
 *Purpose:  Savitch 9th Edition Chapter 5 problems 1-10
 */
//System Libraries
#include <iostream> //I/O Library
#include <iomanip> //setprecision
#include <cstdlib>//the absolute values
#include <cmath>//power function in gravity problem
using namespace std;
//User Libraries
//Global Constants
const int CVTFTIN = 12; //convert feet to inches multiply by 12
const float CVTINM = .0254; // convert in to meters
const int CVTMCM = 100; //convert meters to centimeters 
const float CVTCMF = .0328; //convert cm to feet
const float CVTFIN = 12; // convert ft to in
const float CVTOZKG = 0.0283495231; //convert ounces to kilograms
const int CVTLBOZ = 16; //convert lbs to ounces
const float CVTGKG = 1000;
const float CVTOZG = 28.3495231; // convert ounces to grams
const float CVTKGG = 1000;//convert kilograms to grams
const float CVTGLBS = 0.00220462262;//convert grams to pounds
//Function Prototypes
//problem 1
void problemOne();
void introduction();
void getInput(float& first,float& second,float& third,float& fourth);
float average(float first, float second, float third, float fourth);//average
float stdDev(float first, float second, float third, float fourth);// standard deviation
void giveOutput(float avg, float stdDev);


//problem 2
void problemTwo();
void introduction2();
void getInput2(float& feet, float& inches);
float conversionMeters2(float feet,float inches);
float conversionCm2(float feet,float inches);
void giveOutput2(float meters, float centimeters);


//problem3
void problemThree();
void introduction3();
void getInput3(float& meters, float& centimeters);
float conversionFt3(float meters,float centimeters);
float conversionIn3(float meters,float centimeters);
void giveOutput3(float feet, float inches);


//problem4
//choice b/w 2 and 3
void problemFour();
int preIntro(int var);
//number2 and 3


//problem5
void problemFive();
void introduction5();
void getInput5(float& lbs, float& oz);
float conversionKg5(float lbs,float oz);
float conversionG5(float lbs,float oz);
void giveOutput5(float kg, float g);


//problem6
void problemSix();
void introduction6();
void getInput6(float& kg, float& g);
float conversionLbs6(float kg,float g);
float conversionOz6(float kg,float g);
void giveOutput6(float lbs, float oz);


//problem7
void problemSeven();
int preIntro7(int var);

//problem8
void problemEight();
int preIntro8(int num);

//problem9
void problemNine();
void introduction9();
void getInput9(float& side1, float& side2, float& side3);//three sides of triangle
float perimeter(float side1,float side2, float side3);//calculate perimeter
float area(float side1,float side2, float side3);
void giveOutput9(float perimeter, float area);

//problem10
void problemTen();
void introduction10();
void getInput10(int& change);
int cambio(int change, int& q, int& d, int& p);//calculate change
void giveOutput10(int quarters, int dimes, int pennies);

//execution begins here!
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
        case 6: problemSix();
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
    //declare variables
    float score1, score2, score3, score4; //input values for test scores
    float avg; // used to extract average and standard deviation
    float std;// standard deviation
    introduction();
    getInput(score1, score2, score3, score4);
    avg = average(score1, score2, score3, score4);
    std = stdDev(score1, score2, score3, score4);
    giveOutput(avg, std);    
}
//introduction
void introduction()
{
    cout << "This program determines the average for\n"
         << "of four scores and the standard deviation.\n";
}
//getInput
void getInput(float& first,float& second,float& third,float& fourth)
{
    cout << "Enter score #1: "; 
    cin >> first; 
    cout << "Enter score #2: "; 
    cin >> second;
    cout << "Enter score #3: "; 
    cin >> third;
    cout << "Enter score #4: "; 
    cin >> fourth;
}
//compute average 
float average(float first, float second, float third, float fourth)//average 
{
    return (first+second+third+fourth)/4;
}
//standard deviation is sqrt of average
float stdDev(float first, float second, float third, float fourth)//returns standard deviation 
{
    return sqrt((first+second+third+fourth)/4);
}
void giveOutput(float avg, float stdDev)//average
{
    cout << fixed << showpoint << setprecision(2); 
    cout << "The mean is: " << avg << endl
         << "The standard deviation is: " << stdDev << endl;
}
void problemTwo()
{
    float ft, in;//feet and inches
    float conversion;//conversion
    float centimeters; 
    introduction2();
    getInput2(ft, in);
    conversion = conversionMeters2(ft,in);
    centimeters = conversionCm2(ft, in);
    giveOutput2(conversion, centimeters);
}
void introduction2()
{
    using namespace std; 

    cout << "This program converts inches and feet to\n"

         << "centimeters and meters.\n";

}




void getInput2(float& feet, float& inches)

{

    cout << "Enter the length in feet: "; 

    cin >> feet; 

    cout << "Enter the remaining length in inches: ";

    cin >> inches;

}




float conversionMeters2(float feet,float inches)

{

    float totalIn;//total inches 

    float m; 

    //convert feet to inches

    totalIn = feet * CVTFTIN + inches; 

    

    m = totalIn * CVTINM;

    return m; 

}




float conversionCm2(float feet,float inches)

{

    float totalIn;//total inches 

    float m;

    float n; 

    //convert feet to inches

    totalIn = feet * CVTFTIN + inches; 

    

    m = totalIn * CVTINM;

    n = m - static_cast<int>(m);//leaves only the centimeter portion

    

    return (CVTMCM*n); 

}




void giveOutput2(float meters, float centimeters)

{

    cout << "Your length is " << static_cast<int>(meters) << " meters " << endl; 

    cout << "and " <<  centimeters << " centimeters. " << endl; 

}




void problemThree()

{

    float m, cm;//meters and centimeters

    float feet;//conversion to feet

    float inches;//inches 

    introduction3();

    getInput3(m, cm);

    feet = conversionFt3(m,cm);

    inches = conversionIn3(m, cm);

    giveOutput3(feet, inches);

}




void introduction3()

{

    using namespace std; 

    cout << "This program converts centimeters and meters to\n"

         << "inches and feet.\n";

}




void getInput3(float& meters, float& centimeters)

{

    cout << "Enter the length in meters: "; 

    cin >> meters; 

    cout << "Enter the remaining length in centimeters: ";

    cin >> centimeters;

}




float conversionFt3(float meters,float centimeters)

{

    float totalCm;//total centimeters 

    float ft; 

    //convert feet to inches

    totalCm = meters * CVTMCM + centimeters; 

    

    ft = totalCm * CVTCMF;

    return ft; 

}




float conversionIn3(float meters,float centimeters)

{

    float totalCm;//total inches 

    float ft;

    float in; 

    //convert feet to inches

    totalCm = meters * CVTMCM + centimeters; 

    

    ft = totalCm * CVTCMF;

    in = ft - static_cast<int>(ft);//leaves only the centimeter portion

    

    return (CVTFIN*in); 

}




void giveOutput3(float feet, float inches)

{

    cout << "Your length is " << static_cast<int>(feet) << " feet " << endl; 

    cout << "and " <<  inches << " inches. " << endl; 

}




void problemFour()

{

    int ans, choice;

    ans = preIntro(choice);

    if(ans == 1)

    {

        float ft, in;//feet and inches

        float conversion;//conversion

        float centimeters; 

        introduction2();

        getInput2(ft, in);

        conversion = conversionMeters2(ft,in);

        centimeters = conversionCm2(ft, in);

        giveOutput2(conversion, centimeters);

    }else if(ans == 2)

     {

        float m, cm;//meters and centimeters

        float feet;//conversion to feet

        float inches;//inches 

        introduction3();

        getInput3(m, cm);

        feet = conversionFt3(m,cm);

        inches = conversionIn3(m, cm);

        giveOutput3(feet, inches);

    }

        

}

int preIntro(int var)

{

    cout << "This program converts either to a. feet and inches to\n"

         << "or b. meters and centimeters.\n";

    cout << "Would you like to convert from ft and in to m and cm?" << endl

         << "Or from m and cm to ft and in?" << endl; 

    cout << "Type 1 for first conversion or 2 for second conversion:" << endl;

    cin >> var;  

    return var; 

}




void problemFive()

{

    float pounds, ounces;//pounds and ounces

    float kilograms;//conversion to kilograms

    float grams;//grams

    introduction5();

    getInput5(pounds, ounces);

    kilograms = conversionKg5(pounds,ounces);

    grams = conversionG5(pounds, ounces);

    giveOutput5(kilograms, grams);

}




void introduction5()

{

    using namespace std; 

    cout << "This program converts lbs and oz to\n"

         << "kilograms and grams.\n";

}




void getInput5(float& lbs, float& oz)

{

    cout << "Enter the weight in lbs: "; 

    cin >> lbs; 

    cout << "Enter the remaining weight in oz: ";

    cin >> oz;

}




float conversionKg5(float lbs,float oz)

{

    float totalOz;//total ounces 

    float kg;//kilograms 

    //convert lbs to oz

    totalOz = lbs * CVTLBOZ + oz; 

    

    kg = totalOz * CVTOZKG;

    return kg; 

}




float conversionG5(float lbs,float oz)

{

    float totalOz;//total ounces 

    float kg;

    float g; 

    //convert to oz

    totalOz = lbs * CVTLBOZ + oz; 

    

    kg = totalOz * CVTOZKG;

    g = kg - static_cast<int>(kg);//leaves only the grams portion

    

    return (CVTGKG*g); 

}




void giveOutput5(float kg, float g)

{

    cout << "Your weight is " << static_cast<int>(kg) << " kilograms " << endl; 

    cout << "and " <<  g << " grams. " << endl; 

}




void problemSix()

{

    float pounds, ounces;//for conversions pounds and ounces

    float kilograms;// kilograms

    float grams;//grams

    introduction6();

    getInput6(kilograms, grams);

    pounds = conversionLbs6(kilograms, grams);

    ounces = conversionOz6( kilograms, grams);

    giveOutput6(pounds, ounces);

}




void introduction6()

{

    using namespace std; 

    cout << "This program converts kg and g to\n"

         << "lbs and oz.\n";

}




void getInput6(float& kg, float& g)

{

    cout << "Enter the weight in kg: "; 

    cin >> kg; 

    cout << "Enter the remaining weight in g: ";

    cin >> g;

}




float conversionLbs6(float kg,float g)

{

    float totalG;//total grams 

    float lbs;//pounds 

    //convert kg to g then to lbs

    totalG = kg * CVTKGG + g; 

    

    lbs = totalG * CVTGLBS;

    return lbs; 

}




float conversionOz6(float kg,float g)

{

    float totalG;//total grams 

    float lbs;//pounds 

    float oz; //ounces

    //convert to oz

    totalG = kg * CVTKGG + g; 

    

    lbs = totalG * CVTGLBS;

    oz = lbs - static_cast<int>(lbs);//leaves only the grams portion

    

    return (CVTLBOZ*oz); 

}




void giveOutput6(float lbs, float oz)

{

    cout << "Your weight is " << static_cast<int>(lbs) << " pounds " << endl; 

    cout << "and " <<  oz << " ounces. " << endl; 

}




void problemSeven()

{

    int ans, choice; 

    ans = preIntro7(choice);

    if(ans == 1)

    {

        float pounds, ounces;//pounds and ounces

        float kilograms;//conversion to kilograms

        float grams;//grams

        introduction5();

        getInput5(pounds, ounces);

        kilograms = conversionKg5(pounds,ounces);

        grams = conversionG5(pounds, ounces);

        giveOutput5(kilograms, grams);

    }else if(ans == 2)

     {

        float pounds, ounces;//for conversions pounds and ounces

        float kilograms;// kilograms

        float grams;//grams

        introduction6();

        getInput6(kilograms, grams);

        pounds = conversionLbs6(kilograms, grams);

        ounces = conversionOz6( kilograms, grams);

        giveOutput6(pounds, ounces);

    }

        

}




int preIntro7(int var)

{

    cout << "This program converts either to a. lbs and oz to\n"

         << "or b. kg and g.\n";

    cout << "Would you like to convert from lbs and oz to kg and g?" << endl

         << "Or from kg and g to lbs and oz?" << endl; 

    cout << "Type 1 for first conversion or 2 for second conversion:" << endl;

    cin >> var;  

    return var; 

}




void problemEight()

{

    int number, choose;

    choose = preIntro8(number);

    if(choose == 1)

    {

        //problemv4s function calls go here

        int ans, choice; 

        ans = preIntro(choice);

        if(ans == 1)

        {

            //ft and in to cm and m

            float ft, in;//feet and inches

            float conversion;//conversion

            float centimeters; 

            introduction2();

            getInput2(ft, in);

            conversion = conversionMeters2(ft,in);

            centimeters = conversionCm2(ft, in);

            giveOutput2(conversion, centimeters);

         }else if(ans == 2)

         {

            //cm and m to ft and in

            float m, cm;//meters and centimeters

            float feet;//conversion to feet

            float inches;//inches 

            introduction3();

            getInput3(m, cm);

            feet = conversionFt3(m,cm);

            inches = conversionIn3(m, cm);

            giveOutput3(feet, inches);

        }

        




    }else if(choose == 2)

    {

        

        int ans, choice; 

        ans = preIntro7(choice);

        if(ans == 1)

        {

            //lbs and oz to kg and g

            float pounds, ounces;//pounds and ounces

            float kilograms;//conversion to kilograms

            float grams;//grams

            introduction5();

            getInput5(pounds, ounces);

            kilograms = conversionKg5(pounds,ounces);

            grams = conversionG5(pounds, ounces);

            giveOutput5(kilograms, grams);

        }else if(ans == 2)

         {

            //g and kg to lbs and oz

            float pounds, ounces;//for conversions pounds and ounces

            float kilograms;// kilograms

            float grams;//grams

            introduction6();

            getInput6(kilograms, grams);

            pounds = conversionLbs6(kilograms, grams);

            ounces = conversionOz6( kilograms, grams);

            giveOutput6(pounds, ounces);

        }

    }    

}




int preIntro8(int num)

{

    cout << "This program converts b/w a. ft and in, and m and cm \n"

         << "or b. lbs and oz, and kg and g.\n";

    cout << "Would you like to convert b/w a. ft and in, and m and cm?" << endl

         << "Or b. lbs and oz, and kg and g?" << endl; 

    cout << "Type 1 for first conversion or 2 for second conversion:" << endl;

    cin >> num;  

    return num;  

}




void problemNine()

{
    //declare variables
    float s1, s2, s3; //triangle's sides
    float a, p; //area and perimeter
    introduction9();
    getInput9(s1, s2, s3);
    p = perimeter(s1, s2, s3);
    a = area(s1, s2, s3);
    giveOutput9(p, a);
}
void introduction9()
{
    cout << "This program gives the area and\n"
         << "perimeter of a triangle.\n";   
}
void getInput9(float& side1, float& side2, float& side3)//three sides of triangle
{
    cout << "Enter the first side: "; 
    cin >> side1;
    cout << "Enter the second side: "; 
    cin >> side2;
    cout << "Enter the third side: "; 
    cin >> side3;
}
float perimeter(float side1,float side2, float side3)//calculate perimeter
{
    if(side1 + side2 < side3 || side1 + side2 ==side3)//triangle inequality theorem
    {
        cout << "Nice try, but this ain't a triangle."; 
        cout << endl; 
        cout << "No perimeter for you.";
        return 0; 
    }else return side1 + side2 + side3; 
}
float area(float side1,float side2, float side3)//calculates the area
{
     if(side1 + side2 < side3 || side1 + side2 ==side3)//triangle inequality theorem
    {
        cout << endl; 
        cout << "Nice try, but this ain't a triangle.";
        cout << endl; 
        cout << "No area for you!";
        return 0; 
    }else 
    {
        float sP, area;
        sP = (side1+side2+side3)/2;//semiperimeter
        area = sqrt(sP*(sP-side1)*(sP-side2)*(sP-side3)); //area formula, heron's thm
        return area; 
    }
}
void giveOutput9(float perimeter, float area)
{
    cout << endl; 
    cout << "Perimeter is " << perimeter << " units. " << endl; 
    cout << "Area is " <<  area << " units. " << endl; 
}
void problemTen()
{
    //Declare variables
    int change;
    int quarters, dimes, pennies;
    introduction10();
    getInput10(change);
    cambio(change, quarters, dimes, pennies);
    giveOutput10(quarters, dimes, pennies);
}
//introduction
void introduction10()
{
    cout << "This program converts the amount\n"
         << "of change into number of quarters, dimes, and pennies.\n";
}
void getInput10(int& change)
{
    //Prompt for the number of seconds
    cout<<"How much change do you want to convert?"<<endl;
    cin>>change;
    cout<<"The number of change to convert = "<<change<<"(cents)"<<endl;
}
int cambio(int change, int& q, int& d, int& p)//calculate change
{
    //Calculate the values
    q = change/25; //How many quarters
    d = (change%25)/10;//how many dimes
    p = (change%25)%10;//how many pennies
    return q, d, p;
}
void giveOutput10(int quarters, int dimes, int pennies)//average
{
    //Output the results
    cout<<"The number of quarters   = "<<quarters<<endl;
    cout<<"The number of dimes  = "<<dimes<<endl;
    cout<<"The number of weeks   = "<<pennies<<endl;
       
    //Check result
    cout<<endl<<"As a check = ";
    cout<<(quarters*25+dimes*10+pennies);
    cout<<"(cents)";
}