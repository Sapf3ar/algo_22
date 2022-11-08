#include <iostream>
#include <string>
using namespace std;
int main()
{
    std::string x;
    cin >> x;
    cout << x[2] << " " << x[x.length() -1 -2];
}