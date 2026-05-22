#include <iostream>
using namespace std;

int main() {
    string message;
    int redFlags = 0;

    cout << "Enter Message: ";
    getline(cin, message);

    if (message.find("http") != string::npos) {
        cout << "Suspicious Link Found" << endl;
        redFlags++;
    }

    if (message.find("urgent") != string::npos) {
        cout << "Urgent Language Detected" << endl;
        redFlags++;
    }

    if (message.find("password") != string::npos) {
        cout << "Password Request Detected" << endl;
        redFlags++;
    }

    if (message.find("verify") != string::npos) {
        cout << "Verification Request Detected" << endl;
        redFlags++;
    }

    if (redFlags == 0)
        cout << "Message Looks Safe" << endl;
    else
        cout << "This Message May Be a Phishing Attempt" << endl;

    return 0;
}