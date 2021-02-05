#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map <char, string> mymap({


                 {'a', ".-"},
                 {'b', "-..."},
                 {'c', "-.-."},
                 {'d', "-.."},
                 {'e', "."},
                 {'f', "..-."},
                 {'g', "--."},
                 {'h', "...."},
                 {'i', ".."},
                 {'j', ".---"},
                 {'k', "-.-"},
                 {'l', ".-.."},
                 {'m', "--"},
                 {'n', "-."},
                 {'o', "---"},
                 {'p', ".--."},
                 {'q', "--.-"},
                 {'r', ".-."},
                 {'s', "..."},
                 {'t', "-"},
                 {'u', "..-"},
                 {'v', "...-"},
                 {'w', ".--"},
                 {'x', "-..-"},
                 {'y', "-.--"},
                 {'z', "--.."}}
        );
        vector<string> codes;
        string str;
        unordered_map<char, string>::iterator find;
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].length(); j++) {
                 find = mymap.find(words[i][j]);
                 str.append(find->second);
            }
            codes.push_back(str);
            str.clear();
        }
        sort(codes.begin(), codes.end());
        codes.erase(unique(codes.begin(), codes.end()), codes.end());
        return codes.size();
    }
};

int main() {
    unordered_map <char, string> mymap({
                 {'a', ".-"},
                 {'b', "-..."},
                 {'c', "-.-."},
                 {'d', "-.."},
                 {'e', "."},
                 {'f', "..-."},
                 {'g', "--."},
                 {'h', "...."},
                 {'i', ".."},
                 {'j', ".---"},
                 {'k', "-.-"},
                 {'l', ".-.."},
                 {'m', "--"},
                 {'n', "-."},
                 {'o', "---"},
                 {'p', ".--."},
                 {'q', "--.-"},
                 {'r', ".-."},
                 {'s', "..."},
                 {'t', "-"},
                 {'u', "..-"},
                 {'v', "...-"},
                 {'w', ".--"},
                 {'x', "-..-"},
                 {'y', "-.--"},
                 {'z', "--.."} }
    );
    vector<string> strs;
    vector<string>::iterator it;
    it = strs.begin();
    //["zocd","gjkl","hzqk","hzgq","gjkl"]
    strs.push_back("zocd");
    strs.push_back("gjkl");
    strs.push_back("hzgq");
    strs.push_back("gjkl");
    vector<string> codes;
    string str;
    unordered_map<char, string>::iterator find;
    for (int i = 0; i < strs.size(); i++) {
        for (int j = 0; j < strs[i].length(); j++) {
            find = mymap.find(strs[i][j]);
            str+=find->second;
        }
        codes.push_back(str);
        str.clear();
    }
    sort(codes.begin(), codes.end());
    codes.erase(unique(codes.begin(), codes.end()), codes.end());
    for (int i = 0; i < codes.size(); i++) {
            cout << codes[i] << endl;
    }
    cout << codes.size();

    return 0;
}
