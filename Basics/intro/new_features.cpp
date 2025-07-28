
#include <iostream>

using namespace ::std;

long long fact(int val) {
	long long factorial = 1;
	for (int i = 1; i <= val; i++)
		factorial *= i;
	return factorial;
}

typedef struct things { // Struct is openly public and someone can tamper with its contents. On the other hand, class is a new way of 
						// encapsulation and it introduces more flexible features to avoid someone to tamper with. 
	char rectangle;
	char* arr;
	double sides;
}things;


class shapes {
public:
	shapes(double height, double width); // constructor
	double area(double h, double w) {
		return h * w;
	}
private:
	double height, weigth;
};



int main() {
	


	cout << "This program uses some features not in C89\n";

	for (int i = 0; i < 16; i++)
		cout << "Factorial of " << i << " is " << fact(i) << endl;
	


	return 0;
}
