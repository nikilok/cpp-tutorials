#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Please enter a floating-point value: ";
    int n = 0;
    cin >> n;
    cout << "n == " << n << "\nn+1 ==" << n + 1
         << "\nthree times n " << 3 * n
         << "\ntwice n == " << n * n
         << "\nhalf of n " << n / 2
         << "\nsqure root of n == " << sqrt(n)
         << "\nmodulus of n == " << n % 2
         << "\n";
    return 0;
}