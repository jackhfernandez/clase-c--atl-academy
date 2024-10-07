#include <iostream>

using namespace std;

void suma(int a = 2);

int main() {
	suma(5);
	
	return 0;
}

void suma(int b) {
	cout<<b*5;
}
