/*
**Md. Musfiqur Rahaman (Dehan)
**North South University
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;

    // Read and save an integer, double, and String to your variables.
    cin >> i2;
    cin >> d2;
    getchar();
    getline(cin, s2);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.
    cout << i + i2 << endl;

    // Print the sum of the double variables on a new line.
    printf("%0.1lf\n", d+d2);

    // Concatenate and print the String variables on a new line
    cout << s << s2 << endl;
    // The 's' variable above should be printed first.

    return 0;
}
