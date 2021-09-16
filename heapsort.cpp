#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void) {
	int num;
	cin >> num;
	vector<int> vecArr(num + 1, 0);
	vecArr[1] = 1;
	for (int i = 2; i <= num; i++) {
		vecArr[i] = i;
		int j = i - 1;

		swap(vecArr[i], vecArr[i - 1]);

		while (j != 1) {
			swap(vecArr[j], vecArr[j >> 1]);
			j = j / 2;
		}
	}

	for (int i = 1; i <= num; i++)
		cout << vecArr[i] << " ";

	return 0;
}

