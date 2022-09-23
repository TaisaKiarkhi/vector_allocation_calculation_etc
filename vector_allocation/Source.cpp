#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main() {
	int amount{};
	cout << "Enter the amount of elements you want in the vector: "; cin >> amount;
	auto* vector_arr{ new vector<float>{} }; //or you can do   auto vector_v{ make_shared<vector<int>>()} (smart pointer)



	for (int i{}; i < amount; i++) {
		(*vector_arr).push_back(1 / pow((i + 1), 2));
	}

	float sum{};
	for (int j{}; j < amount; j++) {
		sum += vector_arr->at(j);
	}
	sum *= 6;
	cout << "Square root of the sum :" << sqrt(sum);


	return 0;
}
