#include <iostream>
#include <vector>
#include <string>
#include "foreachinvoke.hpp"

// a class with a member function that shall be called
class MyClass {
	public:
		void memfunc(int i) const {
		std::cout<< "MyClass::memfunc() called for : "<< i <<"\n";
	}
};

int main()
{
	std::vector<int> primes = {2, 3, 5,7,11,13,17,19};

	// pass lambda as callable and an additional argument
	foreach(primes.begin(), primes.end(), 
			[](std::string const& prefix, int i) {
				std::cout<< prefix << i << "\n";
			}, "- value:");

	// call obj.memfunc() for each
	MyClass obj;
	foreach(primes.begin(), primes.end(), &MyClass::memfunc(), obj);
}

