/*
 * CS101 Final Exam - File 1: sort_array.cpp
 * The Logic Test: Sorting an Array
 *
 * Student Name: ___Anzir Zaman_____________________
 * Date: _____12/18/2025___________________
 *
 * OBJECTIVE:
 * Write a program that sorts an array of 100 integers in ascending order.
 *
 * REQUIREMENTS:
 * 1. Use the provided array 'numbers' containing integers 1-100 in random order
 * 2. Implement a sorting algorithm (Bubble Sort is recommended for simplicity)
 * 3. Display the array before and after sorting (at least the first 10-20 elements)
 *
 * HINTS:
 * - You'll need a nested loop (a loop inside another loop)
 * - You'll need to swap two elements when they're in the wrong order
 * - To swap: temp = a; a = b; b = temp;
 *
 * GRADING FOCUS:
 * - Do you understand the sorting logic?
 * - Can you use nested loops correctly?
 * - Does your swap mechanism work?
 */

#include <iostream>
using namespace std;

int main()
{
    // An unsorted array of numbers 1-100
    int numbers[100] = {
        63, 12, 89, 45, 23, 78, 34, 91, 56, 7,
        82, 29, 67, 14, 95, 41, 18, 73, 50, 36,
        98, 5, 61, 27, 84, 48, 10, 75, 32, 69,
        21, 58, 93, 15, 80, 44, 3, 70, 37, 96,
        52, 19, 86, 31, 65, 9, 77, 42, 24, 88,
        54, 1, 71, 39, 94, 25, 81, 47, 13, 68,
        35, 99, 59, 22, 85, 46, 11, 74, 30, 97,
        51, 6, 72, 38, 92, 26, 83, 49, 16, 66,
        33, 100, 57, 20, 87, 43, 8, 76, 40, 62,
        28, 90, 55, 17, 79, 4, 64, 2, 53, 60
    };

    // Display the array BEFORE sorting
    cout << "Array before sorting:" << endl;

    // This loop prints the first 20 elements of the array
    // i starts at 0 (first index of the array)
    // i < 20 means the loop runs 20 times
    // i++ moves to the next index each time
    for (int i = 0; i < 20; i++)
    {
        // Print the current element followed by a space
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Bubble Sort implementation

    // Outer loop controls how many passes we make through the array
    // Each pass moves the next largest value toward the end
    for (int i = 0; i < 100; i++)
    {
        // Inner loop compares adjacent elements
        // j goes from the start of the array to the second-to-last element
        for (int j = 0; j < 99; j++)
        {
            // Check if the current element is greater than the next one
            if (numbers[j] > numbers[j + 1])
            {
                // Temporary variable used to help swap values
                int temp = numbers[j];

                // Move the larger value to the right
                numbers[j] = numbers[j + 1];

                // Place the smaller value on the left
                numbers[j + 1] = temp;
            }
        }
    }

    // Display the array AFTER sorting
    cout << "\nArray after sorting:" << endl;

    // This loop prints the first 20 elements of the sorted array
    for (int i = 0; i < 20; i++)
    {
        // Print each number in ascending order
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

