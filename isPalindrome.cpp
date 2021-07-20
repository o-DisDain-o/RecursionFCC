#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string input)
{
    if (input.size() == 0 || input.size() == 1)
        return true;

    if (input[0] == input[input.size() - 1])
        return isPalindrome(input.substr(1, input.size() - 2));

    return false;
}

int main()
{
    string s = "kayak";

    if (isPalindrome(s))
        cout << s << " is Palindrome";
    else
        cout << s << " is not Palindrome";
    return 0;
}