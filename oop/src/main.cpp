#include <iostream>
#include <ostream>
#include <string>

class Animal{
	public:
	virtual std::string get_type(){
		return "Animal";
	}
};

class Cat : public Animal {
	public:
	std::string get_type() final {
		return "Cat";
	}
};

class Dog : public Animal {
	public:
	std::string get_type() final {
		return "Dog";
	}
};

void func(Animal animal){
	std::cout<<animal.get_type()<<std::endl;
}

int main(){
	Dog dog{};
	Cat cat{};
	func(dog);
	func(cat);
}
