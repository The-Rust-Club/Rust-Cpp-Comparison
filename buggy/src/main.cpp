#include <string>

struct Buggy{
	std::string bugs;
};

const char* get_some_bug(Buggy b){
	return b.bugs.c_str();
}

int main(){
	auto bug = Buggy{
		"It literally bugs"
	};
	get_some_bug(bug);
}
