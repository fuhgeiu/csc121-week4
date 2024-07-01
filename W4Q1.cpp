#include <iostream>

using namespace std;


void input(int&);

int main() {

    int a;
    bool c = 1;

    while (c) {

        input(a);

        cout << a << endl;
    }

    return 0;
}

void input (int &a) {

    bool c = 1;

    cout << "enter a number:";

    while (c) {

        cin >> a;

        if (cin.fail() || (a < 0 || a > 100)) {
            cout << "incorrect input, enter a number between 1 and 100 \n";
            cin.clear();
            cin.ignore();
        }

        else break;
    }

}