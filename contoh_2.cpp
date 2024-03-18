#include <iostream>
using namespace std;

int main() {

	int x;
	srand(time(0));

	x = rand() % 10;

	cout << "Nilai X Awal = " << endl;

	while (x = 4)
	{
		cout << "Perulangan Dengan While" << endl;
		x + rand() % 10;
	}
	cout << "Nilai X Akhir = " << x << endl;
}
