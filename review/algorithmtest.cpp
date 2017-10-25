#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	int i = m - 1, j = n - 1, tar = m + n - 1;
	while (j >= 0) {
		nums1[tar--] = i >= 0 && nums1[i] > nums2[j] ? nums1[i--] : nums2[j--];
	}
}

int main_mergearray() {
	vector<int> v1, v2;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(5);
	v2.push_back(2);
	v2.push_back(4);
	v2.push_back(6);
	merge(v1, 3, v2, 3);
	system("pause");
	return 0;
}

void moveZeroes(vector<int>& nums) {
	int j = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] != 0)  {
			nums[j++] = nums[i];
		}
	}
	for (; j < nums.size(); j++) {
		nums[j] = 0;
	}
}


int main_movezeros() {

	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(3);
	v.push_back(12);
	moveZeroes(v);
	system("pause");
	return 0;
}


int firstUniqChar(string s) {
	if (s == "" || s.size() == 0) return -1;
	int a[26] = {};
	for (int i = 0; i < s.size(); i++) {
		a[s.at(i) - 'a']++;
	}
	for (int i = 0; i < s.size(); i++) {
		if (a[s.at(i) - 'a'] == 1) return i;
	}
	return -1;
}

int main_firstUniqueChar() {
	int result = firstUniqChar("loveleetcode");
	cout << result << endl;
	system("pause");
	return 0;
}

double findMaxAverage(vector<int>& nums, int k) {
	if (nums.size() < k) return -1;
	int max1 = INT_MIN, sum = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (i < k) sum += nums[i];
		else {
			max1 = max(max1, sum);
			sum += nums[i] - nums[i - k];
		}
	}
	max1 = max(max1, sum);
  	return max1*1.0 / k;
}

int main_findmaxaverage() {
	vector<int> v;
	//v.push_back(1);
	//v.push_back(12);
	//v.push_back(-5);
	//v.push_back(-6);
	//v.push_back(50);
	v.push_back(5);
	double result = findMaxAverage(v, 1);
	cout << result << endl;
	system("pause");
	return 0;
}

string reverseStr(string s, int k) {
	for (int i = 0; i < s.size(); i += 2*k) {
		reverse(s.begin()+i, min(s.begin()+i+k, s.end()));
	}
	return s;
}

int main() {
	string result;
	result = reverseStr("a", 2);
	cout << result << endl;
	system("pause");
	return 0;
}