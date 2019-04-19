#include <iostream>

using namespace std;

class Alive

{

protected:

	char *name;

public:

	Alive(char * z) {

		name = z;

	}

	~Alive() {

	}

};

class Animal : public Alive

{

public:

	void Run() {

		cout << "Hello,my name is " << name << " and i can run!";

	}

};

class Dog : public Animal {

	void sound() {

		Animal::Run();

		cout << " Guf-Guf!";

	}

};

class Cat : public Animal {

	void sound() {

		Animal::Run();

		cout << " Mrrrr...";

	}

};

int main()
{
  Animal z(" boy");
  z.Run();
  return 0;
}