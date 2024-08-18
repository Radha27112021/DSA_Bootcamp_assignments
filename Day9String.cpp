#include <iostream>
using namespace std;

// Function to find the length of a string without using a built-in method
int getLength(char str[])
{
    int count = 0;
    // Traverse the string until the null character ('\0') is found
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++; // Increase the count for each character
    }
    return count; // Return the total count, which is the length of the string
}

// Function to reverse a string
void reverseString(char str[])
{
    int length = getLength(str); // Get the length of the string
    int start = 0;               // Start from the first character
    int end = length - 1;        // Start from the last character

    // Swap characters from start to end until the middle of the string
    while (start < end)
    {
        // Swap the characters at positions start and end
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move the start pointer forward and the end pointer backward
        start++;
        end--;
    }
}

int main()
{
    char str1[100], str2[100];

    // Take the first string as input
    cout << "Enter the first string: ";
    cin.getline(str1, 100);
    cout << "First String: " << str1 << endl;

    // Take the second string as input
    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    // Get the length of the second string
    cout << "Length of the second string: " << getLength(str2) << endl;

    // Reverse the second string
    reverseString(str2);
    cout << "Reversed Second String: " << str2 << endl;

    return 0;
}
