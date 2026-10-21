#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed random number generator
    srand(time(0));

    int userChoice;
    cout << "=============================\n";
    cout << "   ROCK PAPER SCISSORS GAME  \n";
    cout << "=============================\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice! Please run the program again and enter 1, 2, or 3." << endl;
        return 0;
    }

    // Generate computer choice (1 = Rock, 2 = Paper, 3 = Scissors)
    int compChoice = rand() % 3 + 1;

    // Display choices
    cout << "\nYou chose: ";
    if (userChoice == 1) cout << "Rock\n";
    else if (userChoice == 2) cout << "Paper\n";
    else cout << "Scissors\n";

    cout << "Computer chose: ";
    if (compChoice == 1) cout << "Rock\n";
    else if (compChoice == 2) cout << "Paper\n";
    else cout << "Scissors\n";

    // Determine winner
    if (userChoice == compChoice) {
        cout << "\nIt's a Tie!\n";
    } else if ((userChoice == 1 && compChoice == 3) || 
               (userChoice == 2 && compChoice == 1) || 
               (userChoice == 3 && compChoice == 2)) {
        cout << "\nCongratulations! You Win! \n";
    } else {
        cout << "\nComputer Wins! Better luck next time!\n";
    }

    return 0;
}
