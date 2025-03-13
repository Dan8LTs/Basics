#include <iostream>

using namespace std;

static void arrays() {

	/*int nums[4] = {1, 2, 4, 8};
	int ans = 1;
	for (int i = 0; i < size(nums); i++) {
		ans *= nums[i];
	}
	cout << ans << endl;
	return 0;*/

	/*int nums[4][2] = { {2, 3}, {3, 5}, {2, 1}, {4, 2} };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			cout << nums[i][j] << " ";
		}
		cout << endl;
	}*/

	int *nums = new int[3];
	delete[] nums;
	cout << nums[0];
}