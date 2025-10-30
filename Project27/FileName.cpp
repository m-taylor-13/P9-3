#include <iostream>
using namespace std;

void displayRun(int values[], int size);

int main(void) {
	srand(time(0));

	int nums[] = { 1,2,2,2,5,6,6,8,9 };

	displayRun(nums, 9);

}


void displayRun(int values[], int size) {
	
	for (int i = 0; i < size; i++) {

		if (values[i] == values[i + 1]) {
			cout << "(";

			while (values[i] == values[i + 1] || values[i] == values[i-1]) {
				cout << values[i];

				if (values[i] == values[i + 1]) { cout << " "; }

				i++;
			}
			cout << ")";
		}

		cout << " " << values[i] << " ";

	}
}