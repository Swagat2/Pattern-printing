// 4
// 4 3
// 4 3 2
// 4 3 2 1


#include <iostream>
using namespace std;

int main() {
    
    int n = 4; // You can take input too: cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 4; j >= 5 - i; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
