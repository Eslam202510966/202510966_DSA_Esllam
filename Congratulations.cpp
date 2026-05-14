#include <iostream>
using namespace std;

void congratulate(string name) {
    cout << "Congratulations " << name;
}

int main() {
    string userName;

    cout << "Enter your name: ";
    cin >> userName;

    congratulate(userName);

    return 0;
}
