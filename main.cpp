#include <iostream>
#include <iomanip>
#include <iostream>
#include <memory>
#include <string>
#include <stdexcept>

using namespace std;

int main()
{
    const static string ERRORIllegalOperation = "ERROR \nIllegal operation";
    const static string ERRORDivisionbyZero = "Division by zero";
    int num1, num2;
    char opr;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << endl;

    cout << "Enter operator: + (addition), - (subtraction),"
         << " * (multiplication), / (division): ";
    cin >> opr;
    cout << endl;

    cout << num1 << " " << opr << " " << num2 << " = ";

    try{
        switch (opr)
        {
            case '+':
                cout << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << num1 / num2 << endl;
                else{
                    // char *i = new char[100];
                    // sprintf(i, "ERROR \nCannot divide by zero: %i/%i", num1, num2);
                    throw ERRORDivisionbyZero;
                    // throw sprintf(new char[100], "ERROR \nCannot divide by zero: %i/%i", num1, num2);
                }

//                cout << "ERROR \nCannot divide by zero" << endl;
                break;
            default:
                throw ERRORIllegalOperation;
                // cout << "Illegal operation" << endl;
        }
    }catch (string& error){
        cout << error << endl;
    }

    return 0;
}
/*
structions:
Redo Programming Exercise 8 of Chapter 4
 so that your program handles exceptions such as division by zero and invalid input.
Your program should print Division by zero when 0 is entered for a denominator.
 */

/*
 * int age = 17;

try {
  if (age < 18) {
    throw std::runtime_error("Age must be greater than or equal to 18.");
  }
} catch (const std::exception& e) {
  std::cout << e.what() << std::endl;
}
 */