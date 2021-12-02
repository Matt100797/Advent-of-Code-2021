#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ifstream myFile;
    myFile.open("input.txt");

    int count;
    string pullLine;
    vector<int> myVec;

    //collect lines in vector
    while (myFile >> pullLine) {
        myVec.push_back(stoi(pullLine));
    }

    //part 1
    for (int i = 0; i < myVec.size() - 1; ++i) {
        if (myVec[i] < myVec[i+1]) {
            count++;
        }
    }

    //part 2
    int partTwoCount;
    int prevSum = myVec[0] + myVec[1] + myVec[2];
    int sum;

    for (int i = 0; i < myVec.size() - 2; ++i) {
        sum = myVec[i] + myVec[i+1] + myVec[i+2];

        if (sum > prevSum) {
            partTwoCount++;
        }
        prevSum = sum;
    }
    cout << count << " " << partTwoCount << endl;
    return 0;
}