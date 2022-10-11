#include <iostream>
using namespace std;
void func(){
    int n =0, fr_end=0, fr_start=0;
    int a[101];
    cin >> n;
    for (int i=0; i<n; i++){ 
        int temp=0; 
        cin >> temp;
        a[i] = temp;}
    for (int k=n-2; k>0; k--){
        if (a[k] ==1) fr_end++;
        else break;
    }  
    if (fr_end + 2 == n){
        cout << 0;
        cout << endl;
        return;
    }
    for (int g=1; g<n; g++){
        if (a[g] ==1) fr_start++;
        else break;
    } 
    cout << (n-1) - (fr_start + fr_end);
    cout<< endl;
}

int main(){
    int t=0;
    cin >> t;
    for(int j=0; j<t; j++) func();
}