#include <iostream>
//taki sobie komentarz
int main(int argc, char** argv) {	
	char a[]={"123456789a"};
	int len=0;
	while(a[len])
	{
		len++;
	}	
	std::cout<<"dlugosc tablicy a ="<<len<<std::endl;
	std::cin.sync();
	std::cin.get();
	//pllik z pnia glownego master
	//oddanie pnia master z innego folderu
	return 0;
}
