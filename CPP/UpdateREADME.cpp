#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream fo;
	fo.open("README.md", ios::app);
	fo << "hello";
//	fi.close();
	fo.close();
	return 0;

}

