#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string name;
    vector<int> counts(26, 0);
    for (int i = 0; i < n; i++) {
        cin >> name;
        counts[name[0] - 'a']++;
    }

    bool found = false;
    for (int i = 0; i < 26; i++) {
        if (counts[i] >= 5) {
            cout << (char)('a' + i);
            found = true;
        }
    }
    
    if (!found) {
        cout << "PREDAJA";
    }
    
    return 0;
}
