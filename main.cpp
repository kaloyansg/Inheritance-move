#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#pragma warning (disable : 4996)

int main()
{
	Person a;
	Person b("Petur", 15);
	Person c(b);
	a = b;
	Person d(std::move(b));
	a = std::move(d);

	Student aa;
	Student bb("Sosa", 300, 33333);
	Student cc(bb);
	aa = bb;
	Student dd(std::move(bb));
	aa = std::move(dd);

	char** subjects = new char* [2];
	subjects[0] = new char[4];
	subjects[1] = new char[4];
	strcpy(subjects[0], "mat");
	strcpy(subjects[1], "bel");

	Teacher aaa;
	aaa.addSubject("him");
	aaa.addSubject("geo");
	aaa.addSubject("ist");
	Teacher bbb("Baba", 60, subjects, 2);
	Teacher ccc(bbb);
	aaa = bbb;
	Teacher ddd(std::move(bbb));
	aaa = std::move(ddd);

	aaa.addSubject("lit");
	aaa.addSubject("bel");
	aaa.addSubject("bel");
	aaa.addSubject("bel");
	aaa.addSubject("bel");
	aaa.addSubject("bel");
	aaa.removeSubject("bel");

	delete[] subjects[0];
	delete[] subjects[1];
	delete[] subjects;
}