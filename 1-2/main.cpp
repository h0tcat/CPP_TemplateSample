#include "Sample.h"

int  main(void){

	nori::Sample<int> sample(8888);

	nori::Sample<double> doubleSample(8888.8888);

	sample.Show();
	doubleSample.Show();
	std::cout << "double型でも平気です。" << std::endl;
}
