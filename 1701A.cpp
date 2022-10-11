#include <iostream>
using namespace std;
void func(){
    int temp1=0, temp2=0, temp3=0, temp4=0, s=0;
    cin >> temp1 >> temp2;
    cin >> temp3>> temp4;
    s = temp1+temp2+temp3+temp4;
    if (s ==0) cout << 0;
    else if (s > 3 ) cout << 2;
    else cout <<1;
    cout << endl;
}

int main(){
    int t=0;
    cin >> t;
    for(int j=0; j<t; j++) func();
}