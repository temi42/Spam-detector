#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    vector<string> spamWords = {"win", "free", "prize", "click", "urgent", "money"};

    string message;
    cout << "Enter a message: ";
    getline(cin, message);

    string lowerMessage = toLower(message);
    int score = 0;


    for (string word : spamWords) {
        if (lowerMessage.find(word) != string::npos) {
            score++;
        }
    }

    cout << "\nSpam Score: " << score << endl;

    if (score >= 2) {
        cout << "Result: Spam detected ❌" << endl;
    } else {
        cout << "Result: Not Spam ✅" << endl;
    }

    return 0;
}