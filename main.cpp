#include <iostream>
using namespace std;
int main() {
    for (long long int x = 0; x < 37; x++) {
        long long int n = 3 * 37 * 37 * 37 + 1 * 37 * 37 + 7 * 37 + x;
        n += 4 * 37 * 37 * 37 + x * 37 * 37 + 2 * 37 + 9;
        if (n % 36 == 0) {
            cout << n / 36;
            break;
        }
    }
    return 0;
}
