#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;


int main() {
	uint32_t n = {0111111111111111101};

	int count = 0;
	for (count = 0; n; count++)
		n &= n - 1;

	std::cout << count << endl;
	return 0;
}