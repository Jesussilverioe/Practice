#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <list>
#include <stack>

using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != target[i]);
            return false;
        }
    }
};

int main() {
    vector<int> target;
    vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    //arr.push_back();

    target.push_back(2);
    target.push_back(4);
    target.push_back(1);
    target.push_back(3);
    //target.push_back(0);

    sort(target.begin(),target.end());
    sort(arr.begin(),arr.end());
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != target[i]) cout << "false" << endl;
    }



    return 0;
}