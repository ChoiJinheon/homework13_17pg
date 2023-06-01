#include <iostream>
using namespace std;
#include "CarS3.h"
#include "SUVS3.h"
int main() {
	// klaxon
	Car* newSUV = new SUV();
	std::cout << "klaxon without virtual \n";
	newSUV->klaxon(3);

	// new system
	std::cout << "air condition system with virtual \n";
	newSUV->airconditioner(25);

	delete newSUV;
	getchar();
	return 0;
}

