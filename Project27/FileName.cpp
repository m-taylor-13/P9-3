#include <iostream>
using namespace std;

void displayRun(int values[], int size);
bool hasRun(int values[], int size);

int main(void) {
	srand(time(0));

	bool runFound = false;

	while (!runFound) {

		int rolls[20];

		for (int i = 0; i < 20; i++) {
			rolls[i] = rand() % 10;
		}

		if (hasRun(rolls, 20)) {

			runFound = true;
			displayRun(rolls, 20);

		}
	}



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

bool hasRun(int values[], int size) {

	bool hasRun = false;

	for (int i = 0; i < size; i++) {

		if (values[i] == values[i + 1]) { hasRun = true; }

	}

	return hasRun;

}