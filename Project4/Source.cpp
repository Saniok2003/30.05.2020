#include <iostream>
#include <string>
using namespace std;

struct Coord {
	int x;
	int y;
};

class Rectangle {
private:
	Coord r;
	int rx;
	int ry;
public:
	Rectangle() {
		r.x = r.y = 0;
		rx = 0;
		ry = 0;
	}
	Rectangle(int z) {
		r.x = r.y = z;
		rx = 0;
		ry = 0;
	}
	Rectangle(int x, int y) {
		r.x = x; r.y = y;
		rx = 0;
		ry = 0;
	}
	void Print() const { 
		for (int i = 0; i < r.y; i++)
		{
			for (int j = 0; j < r.x; j++)
			{
				cout << "* ";
			}
			cout << "\n";
		}
	}
	void Print_hw(int rx,int ry) {
		this->rx = rx;
		this->ry = ry;
		for (int y = 0; y < this->ry; y++)
		{
			cout << endl;
		}
		for (int i = 0; i < r.y; i++)
		{
			for (int x = 0; x < this->rx; x++)
			{
				cout << "\t";
			}
			for (int j = 0; j < r.x; j++)
			{
				cout << "* ";
			}
			cout << "\n";
		}
	}
	void Print_add(int rx, int ry) {
		this->rx = rx + this->rx;
		this->ry = ry + this->ry;
		for (int y = 0; y < this->ry; y++)
		{
			cout << endl;
		}
		for (int i = 0; i < r.y; i++)
		{
			for (int x = 0; x < this->rx; x++)
			{
				cout << "\t";
			}
			for (int j = 0; j < r.x; j++)
			{
				cout << "* ";
			}
			cout << "\n";
		}
	}
};

int main() {
	Rectangle r(9,3);
	r.Print_hw(1, 1);
	r.Print_add(1,1);
	return 0;
};