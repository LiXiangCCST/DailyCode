#include <iostream>
#include <memory>

class MyClass{

public:
	MyClass(){std::cout<<"MyClass Constructor"<<std::endl;}
	~MyClass(){std::cout<<"MyClass destructor"<<std::endl;}
	void show(){std::cout<<"MyClass::show()"<<std::endl;}
	
};

int main (){
	std::unique_ptr<MyClass> ptr1 = std::make_unique<MyClass>();
	ptr1->show();
	std::unique_ptr<MyClass> ptr2 = std::move(ptr1);
	if(!ptr1){
		std::cout<<"ptr1 is null"<<std::endl;
	}
	ptr2->show();
	return 0;
}
