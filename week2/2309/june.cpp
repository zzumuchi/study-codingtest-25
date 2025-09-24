#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int num;
    vector<int> v;
    for (size_t i = 0; i < 9; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end()) ;
    // go through permutations. then chop the first 7 and sum and check 100
    do{
        if (v[0] +v[1]+v[2]+v[3]+v[4]+v[5]+v[6] == 100){
            for (size_t i = 0; i < 7; i++)
            {
                cout << v[i] << '\n';
            }
            return 0;
        }
    }
    while (next_permutation(v.begin(),v.end()));
    

    return 0;
}
