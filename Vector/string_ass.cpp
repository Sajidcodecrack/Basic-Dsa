#include <iostream>
#include <string>
using namespace std;

int main()
{

    string text = "Sajid, Ahamed";
    int length = text.length();
    cout << "Length of the string: " << length << endl;

    // Appending Strings
    string str1 = "Hello";
    string str2 = "Sajid";
    string result = str1 + str2;
    str1.append(str2);
    cout << "Appended string: " << result << endl;

    // Getting Input with getline
    string userInput;
    cout << "Enter a line of text: ";
    getline(cin, userInput);
    cout << "You entered: " << userInput << endl;

    // Finding Substrings
    string textToSearch = "The chocolate in brown fox";
    size_t position = textToSearch.find("in");
    if (position != string::npos)
    {
        cout << "Substring found at position: " << position << endl;
    }
    else
    {
        cout << "Substring not found" << endl;
    }

    // Extracting Substrings
    string textToExtract = "Hello,fellow";
    string extractedSubstring = textToExtract.substr(7, 5);
    cout << "Extracted substring: " << extractedSubstring << endl;

    return 0;
}
