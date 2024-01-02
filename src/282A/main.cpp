#include <iostream>
#include <string>

using namespace std;

int main() {
    int X = 0;
    int a;
    string statement;
    
    cin >> a;
    cin.ignore();
    for (int i = 0; i < a; i++) {
        getline(cin, statement);

        if (statement == "X++" || statement == "++X") {
            ++X;
        } else if (statement == "X--" || statement == "--X") {
            --X;
        }
    }

    cout << X << endl;
    return 0;
}

