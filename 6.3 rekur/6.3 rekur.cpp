#include <iostream>
using namespace std;
template <typename T>
T tmas(T* a, const T size, T i)
{
	cout << "a[" << i << "] = ";
	cin >> a[i];
	if (i < size - 1)
		tmas(a, size, i + 1);
	else
	{
		cout << endl; 
		return 0;
	}
}
int mas(int* a, const int size, int i)
{
	cout << "a[" << i << "] = ";
	cin >> a[i];
	if (i < size - 1)
		tmas(a, size, i + 1);
	else
	{
		cout << endl;
		return 0;
	}
}
int main() {
	const int n = 5; 
	int a[n];
	int i = 0;
	tmas<int>(a, n, i);
	mas(a, n, i);
	return 0;
}