#include "stack1.hpp"

template<typename T>
class Stack<T*> {
	pravte:
		std::vector<T*> elems // elements
	public:
		void push(T*);
		T* pop();
		T* top() const;
		bool empty() const {
			return elems.empty();
		}
};

template<typename T>
void Stack<T*>::push(T* elem)
{
	elems.push_back(elem);
}

template<typename T>
T* Stack<T*>::pop()
{
	assert(! elems.empty());
	T* p = elems.back();
	elems.pop_back();
	return p;
}

template<typename T>
T* Stack<T*>::top() const
{
	assert(! elems.empty());
	return elems.back();
}
