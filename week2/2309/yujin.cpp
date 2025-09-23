#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> dwarfs(9);
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        cin >> dwarfs[i];
        sum += dwarfs[i];
    }
    int over_height;
    over_height = sum - 100;

    sort(dwarfs.begin(), dwarfs.end());
    int f1, f2;
    bool found = false;
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (dwarfs[i] + dwarfs[j] == over_height) {
                f1 = i;
                f2 = j;
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    for (int i = 0; i < 9; i++) {
        if (i != f1 && i != f2) {
        cout << dwarfs[i] << '\n';
    }
}
    return 0;
}