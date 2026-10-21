#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str = "sachin is a good cricketer";
    stringstream ss(str);
    string word, largest = "";

    while (ss >> word) {
        if (word.length() > largest.length()) {
            largest = word;
        }
    }

    cout << "Original sentence: " << str << endl;
    cout << "Largest word: " << largest << endl;

    return 0;
}

