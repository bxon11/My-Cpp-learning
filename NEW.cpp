#include <iostream>
using namespace std;

int main() {
  double input1, input2, result;
  char operation;
  cout << "Enter first number: ";
    cin >> input1;
    if (cin.fail()) {
        cout << "Invalid input for first number." << endl;
        return 1; 
    }

cout << "Enter operator (+, -, *, /): ";
cin >> operation;
    if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
        cout << "Invalid operator." << endl;
        return 1; 
    }
    cout << "Enter second number: ";
    cin >> input2;

     if (cin.fail()) {
        cout << "Invalid input for the second number." << endl;
        return 1; 
    }
   
if(operation == '+') {
    result = input1 + input2;
} else if(operation == '-') {
    result = input1 - input2;
}else if(operation == '*'){
    result = input1*input2;
}else if(operation =='/'){
    if (input2 == 0) {
        cout << "You can't Division by zero lil bro." << endl;
        return 1;
    }
    result = input1/input2;
}


    cout<< result << endl;

    return 0;
}