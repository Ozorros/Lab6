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

class Bird : public Alive

{

public:

	void Fly() {

		cout << "Hello,my name is " << name << " and I can fly!";

	}

};

class Fish : public Alive

{

public:

	void Swim() {

		cout << "Hello,my name is " << name << " and I can swim!";

	}

};

class Animal : public Alive

{

public:

	void Run() {

		cout << "Hello,my name is " << name << " and I can run!";

	}

};


