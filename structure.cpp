/*This program stores the details of the student like name, age, id, grades.
 * There are basically 3 functions in this, 1. Insert the data, 2. Retrieve All student data,
 * 3. Retrieve specific student data.
 */

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

void insertData(studentRec ptr[], int i){
	cout<<"Enter the first name: ";
	cin>>ptr[i].name.firstName;
	cout<<"Enter the last name: ";
	cin>>ptr[i].name.lastName;
	cout<<"Enter the age: ";
	cin>>ptr[i].age;
	cout<<"Enter the id: ";
	cin>>ptr[i].id;
	cout<<"Enter the program grade: ";
	cin>>ptr[i].grade.programGrade;
	cout<<"Enter the final exam grade: ";
	cin>>ptr[i].grade.finalExam;
	cout<<"Enter the quiz grade: ";
	cin>>ptr[i].grade.quizGrade;
	cout<<"Enter the gpa: ";
	cin>>ptr[i].grade.gpa;
}
void displayAll(int length, struct studentRec *ptr){
	for(int i=0;i<length;i++){
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"First Name is :"<<ptr[i].name.firstName<<endl;
		cout<<"Last Name is :"<<ptr[i].name.lastName<<endl;
		cout<<"Age is :"<<ptr[i].age<<endl;
		cout<<"Id is :"<<ptr[i].id<<endl;
		cout<<"Program Grade is :"<<ptr[i].grade.programGrade<<endl;
		cout<<"Final Exam is :"<<ptr[i].grade.finalExam<<endl;
		cout<<"Quiz Grade is :"<<ptr[i].grade.quizGrade<<endl;
		cout<<"GPA is :"<<ptr[i].grade.gpa<<endl;
		cout<<"-----------------------------------------------------------------"<<endl;
	}
}
void displayOne(struct studentRec *ptr, int length)
{
	int id;
	cout<<"Enter the id of the Student";
	cin>>id;
	bool flag=false;
	for(int i=0;i<length;i++){
		if(ptr[i].id==id){
			cout<<"-----------------------------------------------------------------"<<endl;
			cout<<"First Name is :"<<ptr[i].name.firstName<<endl;
			cout<<"Last Name is :"<<ptr[i].name.lastName<<endl;
			cout<<"Age is :"<<ptr[i].age<<endl;
			cout<<"Id is :"<<ptr[i].id<<endl;
			cout<<"Program Grade is :"<<ptr[i].grade.programGrade<<endl;
			cout<<"Final Exam is :"<<ptr[i].grade.finalExam<<endl;
			cout<<"Quiz Grade is :"<<ptr[i].grade.quizGrade<<endl;
			cout<<"GPA is :"<<ptr[i].grade.gpa<<endl;
			cout<<"-----------------------------------------------------------------"<<endl;
			flag=true;
			break;
		}
	}
	if(flag==false){
		cout<<"No student with id "<<id<<" exists"<<endl;
	}
}
int main(int argc, char **argv) {
	studentRec stud[10];
	int option;
	int i=0;
	while(true){
		cout<<"Menu\n1. Insert Data\n2. Display All Data\n3. Display specific student data\n4. Exit"<<endl;
		cout<<"Enter the choice: ";
		cin>>option;
		switch(option){
		case 1: insertData(stud,i);
				i++;
				break;
		case 2: displayAll(i,stud);
				break;
		case 3: displayOne(stud,i);
				break;
		case 4: exit(0);
				break;
		default: cout<<"Enter the correct option"<<endl;
		}

	}

}
