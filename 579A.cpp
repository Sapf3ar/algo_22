#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double n, n_l2;
    // int n_l2=0, temp=0;
    cin >> n;
    n_l2 = log2(n);
    bool check = (n_l2 ==trunc(n_l2)) || (n_l2 ==ceil(n_l2));
    // cout << n_l2 << " " << trunc(n_l2) << " "<<check;
    if (check) cout << 1;
    else {    
        cout << 1+ (n -pow(2.0, trunc(n_l2)));
    }
}