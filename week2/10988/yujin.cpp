#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    int len = str.length();

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            cout << 0 << '\n';
            return 0;
        }
    }
    cout << 1 << '\n';
    return 0;
}
