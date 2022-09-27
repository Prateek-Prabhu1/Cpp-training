#include <iostream>
using namespace std;
struct studentRec{
	struct studentName{
		string firstName;
		string lastName;
	}name;
	int age;
	int id;
	struct grades{
		int programGrade;
		int quizGrade;
		int finalExam;
		float gpa;
	}grade;
};
