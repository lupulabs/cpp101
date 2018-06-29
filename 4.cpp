#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    // TODO: ejecutarlo con argumentos, palabra file
    ifstream in(argv[2]);
    string word;
    int cnt = 0;
    while( in >> word)
        if(word == argv[1])
            cnt += 1;
    cout << argv[1] << " appears " << cnt << " in the file." << endl;
}
