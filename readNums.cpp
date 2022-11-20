#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//void* print();

int main() {
    ifstream inFile;
    int nLines = 0;
    int findNumber;
    string tmp;
    cout << "File name? ";
    getline(cin, tmp);
    inFile.open(tmp.c_str());
    if (!inFile.good()) {
        cout << "Invalid filename" << endl;
        return (-1);
    }

    cout << "How many numbers to read from the file? ";
    cin >> nLines;
    cout << "Which number should I look for ";
    cin >> findNumber;
    char temp;
    if (inFile.is_open()) {
        for (int i = 0; i < nLines; i++) {
           
            if (( ((temp =inFile.get() )>= '0' && temp <'9') ? true : false) != false) {
                std::cout << temp<<std::endl;
                if (findNumber == temp - '0') {
                    cout << findNumber << "is in the text " << endl;

                }
            }
        }
    }


    return 0;
}
