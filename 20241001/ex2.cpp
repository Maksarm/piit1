#include <iostream>

int main(){
	int x, y;
	char op;
	std::cout << "?";
	std::cin >> x >> op >> y;
	int result = 0;
	switch(op){
		case '+': result=x+y; break;
		case '-': result=x-y; break;
		case '*': result=x*y; break;
		case '/': result=x/y; break;
		default: std::cout << "Unknown command '" << op << "'" <<std::endl;
	}
	std::cout << result << std::endl;
	return 0;

}

