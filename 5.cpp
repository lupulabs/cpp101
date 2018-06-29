#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> words;
    string line;
    ifstream in("test3.txt");
    while(getline(in, line))
        words.push_back(line);
    for(int i = words.size()-1; i >= 0; i--)
        cout << words[i] << endl;
}
