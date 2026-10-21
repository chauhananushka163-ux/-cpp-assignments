#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "kamal";
    cout << "Original: " << str << endl;
    
    cout << "Reversed: ";
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
    
    return 0;
}
