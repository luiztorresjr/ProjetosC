//helloworld.cpp

#include <iostream> // c++ standard headers don't use ".h"

/*main() in c++ takes argc ( the number of arguments) and 
	argv(an array of arguments)*/
	
int main(int argc, char** argv){
	//"std" is the standard c++ namespace, like a Java package
	std::cout <<"Hello, World!" << std::endl;
	
	return 0;
}