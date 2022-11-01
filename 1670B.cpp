#include <iostream>
#include <string>
#include <set>
void calc_part(std::string x, std::set<char> special){
    int c =0, m=0;
    for (int j=0; j<x.length(); j++){
        if (special.find(x[j])!=special.end()){
            // m = std::max(c, m);
            if ((m !=0 || j !=0) && special.size()>1) c++;
            if (c>m) m=c;

            // std::cout << x[j] << " " << j;
            c=0;

        }
        else{ c++;}
    }
    // if (special.size()>1) m++;
    std::cout << m  << std::endl;
}
int main(){
    int n=0;
    std::cin >> n;
    for (int i =0 ; i<n;i++){
        int n_sp=0, curr=0;
        char curr_c;
        std::set<char> sp_c;

        std::cin >> curr;
        std::string f;
        std::cin>>f;
        std::cin >> n_sp;
        for (int k=0; k<n_sp; k++){
            std::cin>>curr_c; 
            sp_c.insert(curr_c);
            }
        calc_part(f, sp_c);
    }
}