#include "arrays.hpp"

template<typename T1, typename T2, typename T3?
void foo(int a1[7], int a2[],
			int (&a3)[42],
			int (&x0)[],
			T1 x1,
			T2& x2, T3&& x3)
{
	MyClass<decltype(a1)>::print();
	MyClass<decltype(a2)>::print();
	MyClass<decltype(a3)>::print();
	MyClass<decltype(a4)>::print();
	MyClass<decltype(x0)>::print();
	MyClass<decltype(x1)>::print();
	MyClass<decltype(x2)>::print();
	MyClass<decltype(x3)>::print();

}

int x[] = {0, 8, 15};

int main()
{
	int a[42];
	MyClass<decltype(a)>::print();
	
	extern int x[];
	MyClass<decltype(x)>::print();

	foo(a,a,a,x,x,x);

}

