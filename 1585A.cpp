#include <iostream>
using namespace std;
void solve(){
    int n =0, h=0, temp0=-1, temp1=0;
    bool not_dead =true;
    cin >>n;
    
    for (int i=0; i < n; i++){
        cin >>temp1;
        if (temp0 != -1 && not_dead){
            if (temp0+temp1 == 2){
                h+=5;
            }
            else if(temp1 ==1){
                h+=1;
            }
            else if(temp1 + temp0 == 0){
                h = -1;
                not_dead = false;
            }
        }
        temp0 = temp1;
    }
}
int main(){
    int t =0;
    cin >> t;
    for (int i =0; i<t; i++){
        solve();
    }
}