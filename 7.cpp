#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string line;
    char key;
    ifstream in("test3.txt");
    while(getline(in, line)) {
        cout << line << endl;
        do {
            cin.get(key);
        } while(key != '\n');
    }
}
