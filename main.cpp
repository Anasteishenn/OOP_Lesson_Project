#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age;
	string surname;
	float avr_mark;

	void init(string n, string sname, int a, float mark) {

		name = n;
		surname = sname;
		age = a;
		avr_mark = mark;

	}

	string convert_to_string( ) {
		return name + " " + surname + " (age- " + to_string(age)
			+ ", mark- " + to_string(avr_mark) + ")";

	}
};

void clean_student(Student st) {
	st.name = "no name";
	st.surname = "no students";
	st.age = 0;
	st.avr_mark = 0;
}


int main() {
	Student st1, st2, st3;

	st1.init("Ivan", "Ivanov", 14, 10);
	st2.init("Genrih", "Gurshtinovich", 14, 9);
	st3.init("Tigran", "Sarkesyan", 14, 4);

	cout << st1.convert_to_string ()<< endl;
	cout << st2.convert_to_string() << endl;
	cout << st3.convert_to_string() << endl;


return 0;
}