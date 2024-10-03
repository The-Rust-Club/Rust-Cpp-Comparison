#include <iostream>
#include <print>

void formatted_hello_world();

int main(){
	std::cout << "Hello World!" << std::endl;
	formatted_hello_world();
}

void formatted_hello_world(){
	const char* hw = "Hello World";
	std::print("{}", hw);
}
