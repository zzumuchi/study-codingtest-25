#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    string pattern;
    cin >> pattern;

    size_t idx = pattern.find('*');
    string prefix = pattern.substr(0, idx);
    string suffix = pattern.substr(idx + 1);

    for (int i = 0; i < N; i++) {
        string file_name;
        cin >> file_name;

        if (file_name.length() < prefix.length() + suffix.length()) {
            cout << "NE" << '\n';
            continue;
        } else if (file_name.substr(0, idx) == prefix && file_name.substr(file_name.length() - suffix.length()) == suffix) {
            cout << "DA" << '\n';
        } else cout << "NE" << '\n';
    }
    return 0;
}
