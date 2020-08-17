#include <iostream>
#include <string>
using namespace std;

class Student {
	char *name;
	int age;
	int *mas_est;
	int number_est;
	int ser_est;
public:
	Student() {
		name = nullptr;
		age = 0;
		mas_est = nullptr;
		number_est = 0;
		ser_est = 0;
	}
	Student(char *name,
	int age,
	int *mas_est,
	int number_est,
	int ser_est) {
		this->name = name;
		this->age = age;
		this->number_est = number_est;
		this->mas_est = new int[this->number_est];
		this->ser_est = 0;
	}
	~Student() {
		delete[]mas_est;
	}
	void SetAverageMark() {
		int col;
		for (int i = 0; i < number_est; i++)
		{
			if (mas_est[i] != 0)
			{
				cout << mas_est[i];
				col += mas_est[i];
			}
		}
		ser_est = col / number_est;
	}
	void Print() const {
		cout << "Name" << name << endl;
		cout << "Age" << age << endl;
		int col;
		cout << "Bals: ";
		for (int i = 0; i < number_est; i++) {
			if (mas_est[i] != 0) {
				cout << mas_est[i] << " ";
			}
		}cout << endl;
		cout << "Ser_est" << ser_est << endl;
	}
	void Mark(int mark) {
		int numTemp = number_est + 1;
		int *temp = new int[numTemp];
		for (int i = 0; i < number_est; i++)
		{
			temp[i] = mas_est[i];
		}
		temp[numTemp] = mark;
		delete[]mas_est;
		mas_est = new int[numTemp];
		mas_est = temp;
		delete[]temp;
	}
	void AddMark(int mark) {
		int a = 0;
		for (int i = 0; i < number_est; i++) {
			if (mas_est[i] == 0) {
				mas_est[i] = mark;
				break;
				if ((i+1) == number_est){
					if (mas_est[i] != mark) {
						a = 1;
					}
				}
			}
		}
		if (a == 1) {
			Mark(mark);
		}
	}
};


int main() {

	return 0;
};