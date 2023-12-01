#include <iostream>
#include <Windows.h>


using namespace std;

bool accept() {
	cout << "Do you want to proceed(y or n)?\n";
	char answer = 0;
	cin >> answer;
	
	switch (answer) {
	case 'y':
		return true;
		break;
	case 'n':
		return false;
		break;
	default:
		string response = "That's gonna be no .. I guess";
		for (int i = 0; i < response.length(); i++) {
			cout << response[i];
			Sleep(55);
		}
	}
}

int main()
{
	accept();
}