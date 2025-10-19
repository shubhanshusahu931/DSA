#include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseStringUsingStack(const string& str) {
    stack<char> charStack;

    // Push all characters of string into the stack
    for (char ch : str) {
        charStack.push(ch);
    }

    // Pop all characters from the stack and append to result
    string reversedStr;
    while (!charStack.empty()) {
        reversedStr += charStack.top();
        charStack.pop();
    }

    return reversedStr;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string reversed = reverseStringUsingStack(input);

    cout << "Reversed string: " << reversed << endl;

    return 0;
}
