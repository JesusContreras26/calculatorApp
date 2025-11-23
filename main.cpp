//Libraries I used and files
#include <iostream>
#include <map>
#include "Addition.h"
#include "Subtraction.h"
#include "Division.h"
#include "Multiplication.h"
#include "Modulo.h"
#include "Power.h"
#include "Sine.h"
#include "Cosine.h"
#include "Tangent.h"
#include "SquareRoot.h"
#include <limits>

using namespace std;

//First calculator output without any result, I made it as a function
void calculator_design(){
    
    cout<<"**************************************************"<<endl;
    cout<<"********                                 *********"<<endl;
    cout<<"**                   Calculator                 **"<<endl;
    cout<<"**                      APP                     **"<<endl;
    cout<<"********                                 *********"<<endl;
    cout<<"**************************************************"<<endl;
    cout<<"-      +        |        -       |        *      -"<<endl;
    cout<<"-     Add       |      Minus     |    Multiply   -"<<endl;
    cout<<"**************************************************"<<endl;
    cout<<"-      /        |        m       |        p      -"<<endl;
    cout<<"-   Divide      |       Mod      |      Power    -"<<endl;
    cout<<"**************************************************"<<endl;
    cout<<"-      s        |        c       |        t      -"<<endl;
    cout<<"-     sin       |       cos      |       tan     -"<<endl;
    cout<<"**************************************************"<<endl;
    cout<<"-      r        |        k       |        .      -"<<endl;
    cout<<"-   sq root     |      clear     |      close    -"<<endl;
    cout<<"**************************************************"<<endl;
}

//Calculator design output for results, here the function will receive a parameter
//and put it in the calculator design to display the answer in a aesthetically way
void calculator_output(double answer){
    
    cout<<"**************************************************"<<endl;
    cout<<"********                        ******************"<<endl;
    cout<<"**     Your Current             |           "<<endl;
    cout<<"**     Output is:               |    "<<answer<<endl;
    cout<<"********                        ******************"<<endl;
    cout<<"**************************************************"<<endl;
    cout<<"-      +        |        -       |        *      -"<<endl;
    cout<<"-     Add       |      Minus     |    Multiply   -"<<endl;
    cout<<"**************************************************"<<endl;
    cout<<"-      /        |        m       |        p      -"<<endl;
    cout<<"-   Divide      |       Mod      |      Power    -"<<endl;
    cout<<"**************************************************"<<endl;
    cout<<"-      s        |        c       |        t      -"<<endl;
    cout<<"-     sin       |       cos      |       tan     -"<<endl;
    cout<<"**************************************************"<<endl;
    cout<<"-      r        |        k       |        .      -"<<endl;
    cout<<"-   sq root     |      clear     |      close    -"<<endl;
    cout<<"**************************************************"<<endl;
}

//Error Handler for invalid outputs when it is asked for the user to introduce a number
//and they try to insert a letter or character
double getNumber() {
    double value;
    while (true) {
        cout << "Enter a number: ";
        cin >> value;

        if (cin.fail()) {
            cin.clear(); // clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input! Please enter a number.\n";
        } else {
            return value; // valid number
        }
    }
}

//Main function of the app where the app will be run
int main(){
    //a map that will store the types of operations with a key of the operation that will be display,
    //when a operation is send it will create a key value pair in the map, creating a new type of the class operation 
    //according to the operation the user insert, Operation is the super class, and from there I made other classes for
    //making the calculations for the different operations.
        map<char, Operation*> operations = {
        {'+', new Addition()},
        {'-', new Subtraction()},
        {'*', new Multiplication()},
        {'/', new Division()},
        {'p', new Power()},
        {'m', new Modulo()},
        {'r', new SquareRoot()},
        {'s', new Sine()},
        {'c', new Cosine()},
        {'t', new Tangent()}
    };

    //variables that will be used, two numbers, the user answer, and the user input
    double number_1, number_2, answer;
    char op;
    //Display the calculator design for the first time
    calculator_design();
    //Loop to make the app work continually until the user press (.) to close it
    while (true)
    {
        //ask the user for the operation
        cout<< "Insert an operation: ";
        cin>>op;
        //Close the calculator if the input is (.)
        if (op == '.')
        {
            break;
        }

        //check if the map has the operation if it doesn't have it, it will ask the user to introduce a valid
        //operation and try it again, the operation find method finds the key we need if it doesn't found it, it will run
        //the method operations.end which will give me the last element, but that isn't the element I need, that's why this 
        //conditional is over here, if operations.find is different from operations.end I will proceed to make my calculations
        if (operations.find(op) != operations.end())
        {
            //I will check what operation the user wants to make if the operation is a (+, -, *, /, p, m) will ask the user
            //for two inputs because they are needed to make to those operations
            if (op == '+' || op == '-' || op == '*' || op == '/' || op == 'p' || op == 'm')
            {
                //I will ask the user to introduce number 1
                cout<< "Enter number 1: ";
                //Here we will check if the introduce a valid number
                number_1 = getNumber();
                cout<<"Enter number 2: ";
                number_2 = getNumber();
                //call the execute method in the children of the super class to make the calculation, send both numbers as parameters
                //and save the result in the answer variable
                answer = operations[op] -> execute(number_1, number_2);
            }else{
                //if the operation is not of the ones mentioned above then it will ask the user only for one input
                cout<< "Enter number 1: ";
                //check the user input for error handling
                number_1 = getNumber();
                //do the same to get the answer as above
                answer = operations[op] -> execute(number_1);
            }
            //call the function calculator_output and send the answer as a parameter to display the answer to the user
            //in the design we made
            calculator_output(answer);
        } else{
            //if the user introduce an invalid operation I will show again the normal calculator without any answer because
            //no operations have been made yet
            calculator_design();
            //message to let the user know their mistake
            cout<<"Invalid Operation, Introduce a valid operation!!";
        }        
    }
    // Deletes all Operation* created with new so they don't remain in memory
    for (auto& pair : operations) delete pair.second;
    return 0;
}