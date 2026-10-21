#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "kamal";
    cout << "Original: " << str << endl;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'z') {
            str[i] = 'a';
        } else if (str[i] == 'Z') {
            str[i] = 'A';
        } else if (isalpha(str[i])) {
            str[i] = str[i] + 1;
        }
    }
    
    cout << "Replaced: " << str << endl;
    return 0;
}
