#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, C;
    cin >> A >> B >> C;

    int max = 0;
    int counts[101] = {0};
    for (int i = 0; i < 3; i++) {
        int start, end;
        cin >> start >> end;
        for (int j = start; j < end; j++) {
            counts[j]++;
        }
        if (max < end)
            max = end;
    }

    int fee = 0;
    for (int i = 1; i < max; i++) {
        if (counts[i] == 1)
            fee += A;
        else if (counts[i] == 2)
            fee += B * 2;
        else if (counts[i] == 3)
            fee += C * 3;
    }

    cout << fee;
    return 0;
}
