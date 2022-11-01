#include<algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <long int> a;
    int n=0,b=0, days=0;
    cin >> n;
    for (int i=0; i<n;i++){
        cin >> b;
        a[i] = b;
    }
    sort(a.begin(),a.end());
    for (int i=0; i<=n;i++){
        if (a[i] <= i){
            days++;
        }
        else {
            if (i!=0 && a[i-1] != a[0]){
                cout << days;
                return 0;
            }}}}