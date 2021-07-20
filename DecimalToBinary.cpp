#include <bits/stdc++.h>
using namespace std;

string DecimalToBinary(int number, string result)
{
    // BASE CASE
    if (number == 0)
        return result;

    result = char(48 + number % 2) + result;
    //Used the concept of DataType Casting.
    //48 is the ASCII value of 0. So we are adding the reminder(0 or 1)
    //and then finding the character corresponding to that ASCII value.

    return DecimalToBinary(number / 2, result);
}

int main()
{
    int num = 10;
    string ans = "";
    ans = DecimalToBinary(num, ans);
    cout << "Binary of Decimal Number " << num << " = " << ans;
}