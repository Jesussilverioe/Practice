#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        // iterators are pointers which allow us to move thru the vectors.
        vector<int>::iterator it1, it2;
        unordered_map<int, int> myMap;
        it1 = nums1.begin();
        it2 = nums2.begin();
        vector<int> myint;

        // Sorting the array to get the numbers in order which would help for comparison
        sort(nums2.begin(), nums2.end());


        /*
            Eliminate the duplicates elements to compare only elements on each vectors.

            unique  is used to remove duplicates of any element present ---***consecutively***--- 
            in a range[first, last). 
            keep in mind that it does not resizes the container it just moves to the end and then rearrenges.
            that's why we have to then erase them.

            more info: https://www.geeksforgeeks.org/stdunique-in-cpp/
        */
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());

        sort(nums1.begin(), nums1.end());
        nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());

        /*
            we etirate once thru both vectors in order to compare and move the iterators which points to the elements on the vectos

        */
        while (it1 != nums1.end() && it2 != nums2.end())
        {
            if (*it1 == *it2) {
                // if there is a match, allocate into the new vector.
                myint.push_back(*it1);
                it1++;
                it2++;
            }
            else if (*it1 < *it2) {
                it1++;
            }
            else {
                it2++;
            }
        }

        return myint;
    }
};

int main() {
    vector<int> v1;
    vector<int> v2;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(2);
    v1.push_back(2);
    v1.push_back(5);


    v2.push_back(1);
    v2.push_back(4);



    vector<int> re;
    Solution s;
    re = s.intersection(v1, v2);

    for (int i = 0; i < re.size(); i++) {
        cout << re[i];
    }

    return 0;
}