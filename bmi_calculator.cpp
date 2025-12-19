/*
 * CS101 Final Exam - File 2: bmi_calculator.cpp
 * The Tool Test: BMI Calculator
 *
 * Student Name: ____Anzir Zaman____________________
 * Date: _____12/18/2025___________________
 *
 * OBJECTIVE:
 * Create an interactive program that calculates a user's Body Mass Index (BMI).
 *
 * REQUIREMENTS:
 * 1. Ask the user for their weight in kilograms
 * 2. Ask the user for their height in meters
 * 3. Calculate BMI using the formula: BMI = weight / (height × height)
 * 4. Display the calculated BMI to the user
 * 5. BONUS: Tell the user their BMI category (Underweight, Normal, Overweight, Obese)
 *
 * HINTS:
 * - Use 'double' or 'float' for decimal numbers
 * - Use 'cin' to get input from the user
 * - Use 'cout' to display messages and results
 *
 * BMI CATEGORIES (BONUS):
 * - Underweight: BMI < 18.5
 * - Normal weight: BMI 18.5 - 24.9
 * - Overweight: BMI 25 - 29.9
 * - Obese: BMI >= 30
 *
 * GRADING FOCUS:
 * - Can you get input from the user?
 * - Can you perform the calculation correctly?
 * - Can you display the result in a user-friendly way?
 */

#include <iostream>
using namespace std;

int main()
{
    // Declare variables to store the user's weight, height, and calculated BMI
    // double is used so decimal values can be handled accurately
    double weight;
    double height;
    double bmi;

    // Greet the user and explain what the program does
    cout << "Welcome to the BMI Calculator!" << endl;
    cout << "This program will calculate your Body Mass Index." << endl;
    cout << endl;

    // Ask the user to enter their weight in kilograms
    cout << "Please enter your weight in kilograms: ";
    cin >> weight;   // Store the user's input in the weight variable

    // Ask the user to enter their height in meters
    cout << "Please enter your height in meters: ";
    cin >> height;   // Store the user's input in the height variable

    // Calculate BMI using the formula: weight / (height * height)
    // height * height calculates height squared
    bmi = weight / (height * height);

    // Display the calculated BMI to the user
    cout << "\nYour BMI is: " << bmi << endl;

    // Determine the BMI category using if-else statements

    // If BMI is less than 18.5, the user is underweight
    if (bmi < 18.5)
    {
        cout << "BMI Category: Underweight" << endl;
    }
    // If BMI is less than 25 (and >= 18.5), the user is normal weight
    else if (bmi < 25)
    {
        cout << "BMI Category: Normal weight" << endl;
    }
    // If BMI is less than 30 (and >= 25), the user is overweight
    else if (bmi < 30)
    {
        cout << "BMI Category: Overweight" << endl;
    }
    // If BMI is 30 or higher, the user is obese
    else
    {
        cout << "BMI Category: Obese" << endl;
    }

    // End message
    cout << "\nThank you for using the BMI Calculator!" << endl;

    return 0;
}

