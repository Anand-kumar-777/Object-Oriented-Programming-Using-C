/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Author : Anand Kumar
*/

#include <iostream>
using namespace std;

class solution
{
public:
    long reverseNum = 0;
    int reverse(int number)
    {
        while (number != 0)
        {
            reverseNum = reverseNum * 10 + number % 10;
            number /= 10;
        }
        return reverseNum;
    }
};
int main()
{
    solution obj = solution();
    cout << obj.reverse(1534236469);
}