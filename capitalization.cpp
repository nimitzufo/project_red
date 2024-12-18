#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;  // Input a single word

    // Capitalize the first letter if it's lowercase
    if (word[0] >= 'a' && word[0] <= 'z') {
        word[0] -= 'a' - 'A';  // Convert the first letter to uppercase
    }

    cout << word << endl;  // Output the modified word
    return 0;
}
