#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int horiz = 0;
    int depth = 0;
    int aim = 0;
    int value;

    string line;
    ifstream myFile;
    myFile.open("input.txt");

    while (myFile >> line >> value) {
        if (line[0] == 'f') {
            //myFile >> line;
            horiz += value;
            depth += (aim * value);
        }
        else if (line[0] == 'u') {
            //myFile >> line;
            aim -= value;
        }
        else if (line[0] == 'd') {
            //myFile >> line;
            aim += value;
        }
    }

    cout << horiz * depth << endl;
    return 0;
}