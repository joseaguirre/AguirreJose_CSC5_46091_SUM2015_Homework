/* File:   main.cpp
 * Author: Jose Aguirre
 * Created on June 29, 2015, 9:16 AM
 *Purpose:  Homework, Rock, Paper, and Scissors 
 *Savitch Chapter 3 #1
 *URL: http://ideone.com/Lz11vR
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
        char ply1, ply2;//player 1 and 2 select their choice 

        //prompt users and input r, p, s
        cout << "Player 1 select Rock(r), Paper(p), Scissor(s)" << endl; 
        cin >> ply1; 

        cout << "Player 2 select Rock(r), Paper(p), Scissor(s)" << endl; 
        cin >> ply2; 

        //Output the results
        if((ply1 == 'r' and ply2 == 'r') || (ply1 == 's' and ply2 == 's') || (ply1 == 'p' and ply2 == 'p'))
            cout << "Nobody wins!" << endl; 
            else if((ply1 == 'r' and ply2 == 's') || (ply1 == 's' and ply2 == 'r'))
                cout << "Rock breaks scissors!" << endl; 
                else if((ply1 == 'p' and ply2 == 's') || (ply1 == 's' and ply2 == 'p'))
                    cout << "Scissors cut paper!" << endl; 
                    else if((ply1 == 'p' and ply2 == 'r') || (ply1 == 'r' and ply2 == 'p'))
                        cout << "Paper covers rock!" << endl; 
                        else
                            cout << "Not a valid entry!" << endl;
                
        cout << "Would you like to repeat the program?" << endl;
        cout << "Y or N?" << endl; 

        cin >> ans; 

    }while(ans == 'y' or ans == 'Y'); 
    return 0; 
}
