#include <iostream>


using namespace std;

int factorial(int n);

int main() {
	int n;
	cout << "Zadaj kladne cislo: ";
	cin >> n;

	cout << "Faktorial tvojho cisla  " << n << " je " << factorial(n);

	return 0;
}

int factorial(int n) {
	if (n > 1)
		return n * factorial(n - 1);
	else
		return 1;
}



