
#include <iostream>
#include <string>
#include <map>
#include <utility>
using namespace std;

int main(){
    int T;
    int n;
    
    cin >> T;
    for (size_t j = 0; j < T; j++)
    {
        map<string, int> m;
        cin >> n;
        for (size_t i = 0; i < n; i++)
        {
            string gearType;
            cin >> gearType >> gearType;
            m[gearType]++;
        }
        long l =1;
        for(auto const& [k, v] : m){
            // cout << k <<" "<<v <<'\n';
            l *= (v+1);
        }
        cout << l-1 << '\n';
    }
    
   
    return 0;
    
}