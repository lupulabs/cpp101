#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream in("test3.txt");
    string line;
    int cnt = 0;
    while(getline(in, line))
        for(int i = 0; i < line.length(); i++) {
            if(line[i] == ' ')
                cnt += 1;
        }
    cout << "The is " << cnt << " whitespaces" << endl;
}
