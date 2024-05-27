#include <iostream>
#include <memory>

class MyClass{
public:
	MyClass(){std::cout<<"constructor"<<std::endl;}
	~MyClass(){std::cout<<"disconstructor"<<std::endl;}
	void show(){std::cout<<"show"<<std::endl;}
};

int main(){
	std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
	{
		std::shared_ptr<MyClass> ptr2 = ptr1;
		ptr2->show();
		std::cout<<"ptr2 user count:"<<ptr2.use_count()<<std::endl;
	}
	std::cout<<"ptr1 user count:"<<ptr1.use_count()<<std::endl;
	ptr1->show();
	return 0;
}
