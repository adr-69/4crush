#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayMessage() {
    cout << "Hey! You Like Me? (Y/N)" << endl;
}

void yesResponse() {
    cout << "OMG I Like You TOO!" << endl;
    // Simulate an image with text
    cout << "[Image: GIF of excitement]" << endl;
}

void noResponse() {
    // Simulate the "NO" button moving randomly in a window
    cout << "The 'NO' button is moving randomly in a virtual space..." << endl;
    srand(time(0)); // Seed for random movement

    // Generate random positions for the button (console simulation)
    int x = rand() % 50; // Random horizontal position
    int y = rand() % 20; // Random vertical position

    cout << "The button is at position: (" << x << ", " << y << ")" << endl;
}

int main() {
    char choice;

    displayMessage();
    cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        yesResponse();
    } else if (choice == 'N' || choice == 'n') {
        noResponse();
    } else {
        cout << "Invalid input. Please enter 'Y' or 'N'." << endl;
    }

    return 0;
}
