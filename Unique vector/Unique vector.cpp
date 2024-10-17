#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

std::vector<int> removeDuplicates(const std::vector<int>& input) {
	std::set<int> uniqueElements(input.begin(), input.end());
	std::vector<int> result(uniqueElements.begin(), uniqueElements.end());
	return result;
}

int main() {
	std::vector<int> input = { 1, 1, 2, 5, 6, 1, 2, 4 };

	std::vector<int> result = removeDuplicates(input);

	for (int num : result) {
		std::cout << num << " ";
	}

}