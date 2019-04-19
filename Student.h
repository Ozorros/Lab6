#include <iostream>

using namespace std;



class Stud

{

protected:

	char fac[20];

	char spec[30];

	char name[15];

	



public:

	void print() {

		cout << "fac: " << fac << " spec: " << " name: " << name;

	}

	void init(char *f, char *s, char *n);





	Stud();

	Stud(char *f, char *s, char *n);

	~Stud();

};

Stud::Stud()

{

}

Stud::Stud(char *f, char *s, char *n)

{

	strcpy(fac, f);

	strcpy(spec, s);

	strcpy(name, n);

}

Stud::~Stud()

{

}

inline void Stud::init(char * f, char * s, char * n)

{

	strcpy(fac, f);

	strcpy(spec, s);

	strcpy(name, n);

}



class GrStud : public Stud

{

protected:

	int year;

	char work[30];

public:



	void init(char * f, char * s, char * n, char *w, int y);

	void print() {

		Stud::print();

		cout << " work: " << work << " year: " << year;

	}



	GrStud();

	GrStud(char * f, char * s, char * n, char *w, int y);

	~GrStud();



private:



};

GrStud::GrStud(){

}

GrStud::GrStud(char * f, char * s, char * n, char * w, int y) : Stude(f, s, ) {

	year = y;

	strcpy(work, w);

}

GrStud::~GrStud(){

}

void GrStud::init(char * f, char * s, char * n, char * w, int y){

	Stud::init(f, s, n);

	strcpy(work, w);

	year = y;

}