#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    
    vector<int> counts(26, 0);
    for (char c: s) {
        counts[c - 'a'] += 1;
    }

    for (int i=0; i < 26; i++) {
        cout << counts[i] << " ";
    }
    return 0;
}
