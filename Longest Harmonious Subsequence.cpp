#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    //[1,3,2,2,5,2,3,7]
   vector<int> nums;


   //nums.push_back(1);
   //nums.push_back(3);
   //nums.push_back(2);
   //nums.push_back(2);
   //nums.push_back(5);
   //nums.push_back(2);
   //nums.push_back(3);
   //nums.push_back(7);
   //nums.push_back(2);

   nums.push_back(3);
   nums.push_back(2);
   nums.push_back(1);

   //nums.push_back(3);
   //nums.push_back(4);

   //nums.push_back(3);
   //nums.push_back(2);
   //nums.push_back(2);
   //nums.push_back(5);
   //nums.push_back(2);
   //nums.push_back(3);
   //nums.push_back(7);

   sort(nums.begin(), nums.end());
   unordered_map<int, int> mymap;
   vector<int> counts;

   int count = 0;
   for (int i = 0; i < nums.size(); i++) {
       mymap[nums[i]] += 1;
   }

   for (int i = 0; i < nums.size()-1; i++) {
       if (nums[i] + 1 == nums[i + 1]) {
           counts.push_back(mymap[nums[i]] + mymap[nums[i + 1]]);
       }
   }

   sort(counts.begin(), counts.end(), greater<int>());
   if(!counts.empty())   count = counts[0];

   cout << count << endl;
	return 0;
}