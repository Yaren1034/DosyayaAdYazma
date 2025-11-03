#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
	ofstream dosya("deneyap.txt");
	{
		dosya<<"Yaren HASOĞLU"<<endl;
	}
	dosya.close();
	return 0;
}
