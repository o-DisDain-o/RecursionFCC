#include <bits/stdc++.h>
using namespace std;

string reverseString(string input)
{
    if (input == "")
        return input;

    return reverseString(input.substr(1, input.size() - 1)) + input[0];
}

int main()
{
    string s = "Hello World";

    string reversedS = reverseString(s);

    cout << "Original String : " << s << "\nReversed String : " << reversedS;
    return 0;
}