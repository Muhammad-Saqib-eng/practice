#include <iostream>
using namespace std;
int main() {
	int a;
	cout << "Hello word!";
	cout << "Enter the value of a";
	cin >> a;
	cout << "Value of a : " << a;

	cout << "\nIntroduce an array";
	int arr[5] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++) {
		cout << arr[i];
	}
	
	return 0;
}