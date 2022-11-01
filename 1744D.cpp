#include <iostream>
#include <cmath>
using namespace std;

int num_delimeters(int x){
    int n_2 =0, delimeter = x;

    for (int j=0; j<x; j++){
        if(delimeter %2 ==0){
            n_2++;
            delimeter /=2;
        }
        else return n_2;    
        } }


void solve(){
    int n =0, n_2=0, temp=0;
    cin>> n;
    for (int i =0; i <n; i++){
        cin >> temp;
        n_2 += num_delimeters(temp);        
    }
    cout << n_2 << " 2s" << endl;
    if (n_2 >= n){
        cout << 0 << endl;
        return;
    }   
    else {
        int actions=0, temp_i=0, n_log=log2(n);
        for (int i=n_log; i>0;i--){
            
        }
        if (n%2 ==0){
            temp_i=n;
        }
        else temp_i=n-1;

        for (int i =temp_i; i>0; i-=2){
            temp = num_delimeters(i);
            n_2+=temp;
            actions++;
            if (n_2  >= n){                
                cout << actions << endl;
                return;
            }            
        }
    }
        cout << -1 << endl;
        return;
    }



signed main(){
    int t=0;
    cin >> t;
    while(t--) solve();
}