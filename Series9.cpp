#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "sachin";
    cout << "Original string: " << str << endl;

    sort(str.begin(), str.end());

    cout << "Sorted letters: " << str << endl;

    return 0;
}
