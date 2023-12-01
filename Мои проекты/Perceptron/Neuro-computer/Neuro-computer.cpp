#include <iostream>

using namespace std;

int main()
{
	int* nnLay;
	float* input;
	float* targets;

	int inputNeurons = 100;
	int outputNeurons = 2;
	int nlCount = 4;
	int list = (nnLay*) malloc((nlCount) * sizeof(nnLay));


	input = (float*) malloc((inputNeurons) * sizeof(float));
	targets = (float*) malloc((outputNeurons) * sizeof(float));

	list[0].setIO(100, 20);
	list[1].setIO(20, 6);	
	list[2].setIO(6, 3);    
	list[3].setIO(3, 2);
}