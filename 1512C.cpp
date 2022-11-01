#include <iostream>
#include <string>

void solve(){
    int a =0, b=0;
    std::string x;
    std::cin >> x;
    for (int i=0; i<a+b; i++){
        if (x[i] == '?' && x[a+b-1 -i] !='?'){
            if (x[a+b-1-i])
            // x[i] = x[a+b-1-i];
            // x[a+b-1-i] == '1' ? b-- : a--;
        }
        
        else if (x[i] == '1' && x[a+b-1-i] !='1'){
            std::cout << '-1';
            return;
        }
        else if (x[i] == '0' && x[a+b-1-i] !='0'){
            std::cout << '-1';
            return;
        }
        else if (x[i] == '1' && x[a+b-1-i] =='1'){
            // std::cout << '-1';
            // return;
            b--;
            b--;
        }
        else if (x[i] == '0' && x[a+b-1-i] =='0'){
            a--;
            a--;
        }


    }

}
signed main(){
    int n=0;
    std::cin >> n;
    while (n--){
        solve();
    }
}