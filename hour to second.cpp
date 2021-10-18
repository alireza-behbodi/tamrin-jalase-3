#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int hours;
	int minute;
	cout << "Please enter hours:";
	cin >> hours;
	int hs = hours * 60 * 60;
	cout << "enter minute";
	cin >> minute;
	int ms = minute * 60;
	int second = hs + ms;
	cout << second << " Seconds";
}