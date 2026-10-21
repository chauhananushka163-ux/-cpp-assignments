#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;
    int sign = 1;
    for (int i = 1; i <= 12; i++) {
        sum += sign * (1.0 / i);
        sign = -sign;
    }
    cout << "Sum of alternating series = " << sum << endl;
    return 0;
}
