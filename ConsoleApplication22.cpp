#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int array1[500001] = { 0, };
int array2[500001] = { 0, };

int main()
{
	int n, m;
	cin >> n;
	vector<int> v1;
	for (int i = 0; i < n; i++)
	{
		cin >> array1[i];
	}
	for (int i = 0; i < n; i++)
	{
		v1.push_back(array1[i]);
	}
	cin >> m;
	sort(v1.begin(), v1.end());
	for (int i = 0; i < m; i++)
	{
		cin >> array2[i];
	}
	//lower_bound: key값보다 같거나 큰 숫자가 배열 몇번째에서 처음 등장하는지 인덱스 반환
	//upper_bound: key값을 초과하는 숫자가 배열 몇번째에서 처음으로 등장하는지 인덱스 반환
	for (int i = 0; i < m; i++)
	{
		cout << upper_bound(v1.begin(), v1.end(), array2[i]) - lower_bound(v1.begin(), v1.end(), array2[i]) << " ";
	}

	return 0;
}