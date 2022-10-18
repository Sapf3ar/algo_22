#include <iostream>
using namespace std;

void solve(){
    int n=0, a[3];
    cin >> n;
    string s;
    cin >> s;
    for (int i =0; i< 2;i++){
        a[i] =0;
    }
    for (int i=0; i< s.length(); i++){
        if (s[i] == 'W')a[0]++;
        else if (s[i] == 'B') a[1]++;
        else if(s[i] == 'R')a[2]++;
    }
    if (a[0] !=0){
        if(a[1]==0^a[2]==0){
            cout << "NO";
            return;
        }
        else if (a[1]+ a[2] == 0){
            cout << "YES";
            return;
        }
        else {
            int a[2];
            a[0] = 0;
            a[1] = 0;
            a[2] =1;
            for (int i=0; i< n; i++){
               
                if (s[i] == 'W'){
                    if (a[1]==0^a[2]==0){
                        cout  << "NO";
                        return;
                    }
                    a[0] =0;
                    a[1]=0;
                }
                else if(a[2] = 1){
                    if (s[i] =='R') a[0]++;
                    else a[1]++;
                }
            }
            cout << "YES";
            return;
        }
            
        }
        else{
            if (a[1]==0^a[2]==0) cout << "NO";
            else  cout << "YES";
        }
}
int main(){
    int t=0;
    cin >> t;
    while(t--) solve();
}