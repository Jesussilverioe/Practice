#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
    
    int found = -1;
    unordered_map<char, int> mymap;

     for (int i = 0; i < s.size(); i++) {
       mymap[s[i]] += 1;
    }

    for (int i = 0; i < s.size(); i++) {
        if (mymap[s[i]] == 1) {
            found = i;
            return found;
        }
    }
        
        
    return found;
    }
};


int main() {
    string s = "c";
    //"aadadaad"
    //"leetcode"
    //"cc"
    //int index = -1;
    //int f = 0;
   string s1 = "leetcode";
   //string temp;

   int found = -1;
   unordered_map<char, int> mymap;

   for (int i = 0; i < s.size(); i++) {
       mymap[s[i]] += 1;
   }

   for (int i = 0; i < s.size(); i++) {
       if (mymap[s[i]] == 1) {
           found = i;
           break;
       }
   }

   cout << found << endl;

   return 0;
}