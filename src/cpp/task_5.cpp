#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Problem5 {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> substitutionTable;
        int idx = 0;
        for (char ch : key) {
            if (ch != ' ' && substitutionTable.count(ch) == 0) {
                substitutionTable[ch] = 'a' + idx;
                idx++;
            }
        }

        string decodedMessage;
        for (char ch : message) {
            if (ch == ' ') {
                decodedMessage += ' ';
            } else {
                decodedMessage += substitutionTable[ch];
            }
        }

        return decodedMessage;
    }
};

