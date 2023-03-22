#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age;
	string surname;
	float avr_mark;
};

void clin_student(Student st) {
	st.name = "no name";
	st.surname = "no students";
	st.age = 0;
	st.avr_mark = 0;
}


string convert_to_string(Student st) {
	return st.name + " " + st.surname + " (age-" + to_string (st.age)
		+", mark-" + to_string (st.avr_mark) + ")";

}


int main() {
	Student st1, st2, st3;
	
	st1.name = "Ivan";
	st1.surname = "Ivanov";
	st1.age = 14;
	st1.avr_mark = 10;

	st2.name = "Genrih";
	st2.surname = "Gurshtinovich";
	st2.age = 14;
	st2.avr_mark = 9;

	st3.name = "Tigran";
	st3.surname = "Sarkesyan";
	st3.age = 14;
	st3.avr_mark = 4;


	cout << convert_to_string(st1) << endl;
	cout << convert_to_string(st2) << endl;
	cout << convert_to_string(st3) << endl;

	/*Student st2 = st1;*/

	/*st1.avr_mark = 9;*/

	/*cout << "before funcsion calling:" << endl;
	cout << st1.name << " " << st1.surname << " (age-" << st1.age << ", mark-" << st1.avr_mark<<")" << endl;

	clin_student(st1);

	cout << "after funcsion calling:" << endl;
	cout << st1.name << " " << st1.surname << " (age-" << st1.age << ", mark-" << st1.avr_mark << ")" << endl;*/
	/*cout << st1.name << " " << st2.surname << " (age- " << st2.age << ", mark-" << st2.avr_mark <<")" << endl;*/



return 0;
}