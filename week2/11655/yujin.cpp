#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    getline(cin, str);
    int len = str.length();

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = (char)('A' + ((str[i] - 'A' + 13) % 26));
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = (char)('a' + ((str[i] - 'a' + 13) % 26));
    }
    cout << str;
    return 0;
}
