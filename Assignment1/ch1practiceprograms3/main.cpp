/*file: main.cpp
 author: Jose Aguirre
 Created on June 23, 2015, 10:45 AM
 Purpose: modify second program by changing * to /.
 */

#include <iostream>
using namespace std;

int main()
{
    int number_of_pods, peas_per_pod, total_peas;
    
    cout << "Hello" << endl;
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    
    cin >> number_of_pods;
    
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    total_peas = number_of_pods / peas_per_pod;
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    cout << "Good-bye\n";
    
    return 0;

}