#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<float> ieee;
    float init = 1.24;
    for(int i=0; i < 25; i++) {
        ieee.push_back(init);
        init *= 1.4142;
    }
    for(int i=0; i < ieee.size(); i++)
        cout << ieee[i] << endl;
}
