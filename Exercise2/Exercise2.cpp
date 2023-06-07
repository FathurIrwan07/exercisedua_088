#include <iostream>
using namespace std;


class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:

	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar {
public:
	void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "Masukan jejari : " << endl;
		int r;
		cin >> r;
		setX(r);
	}
	float Luas(int r) {
			return 3.14 * r * r;
		}
	float Keliling(int r) {
			return 2 * 3.14 * r;
		}
	};
class Bujursangkar :public bidangDatar {
	void input() {
		cout << "Bujursangkar dibuat" << endl;
		cout << "masukan sisi : " << endl;
		int s;
		cin >> s;
		setX(s);
	}
	float Luas(int s) {
		return s * s;
	}
	float Keliling(int s) {
		return 4 * s;
	}

};


int main() { 
	bidangDatar* o;

	//objek
	o = new Lingkaran();
	o->input();
	int r = o->getX();
	cout << "luas keliling = " << o->Luas(r) << endl;
	cout << "keliling lingkaran = " << o->Keliling(r) << endl;

	cout << endl;

	//objek bujur
	o = new Bujursangkar();
	o->input();
	int s = o->getX();
	cout << "luas bujursangkar = " << o->Luas(s) << endl;
	cout << "keliling bujursangkar= " << o->Keliling(s) << endl;

	delete o;

	return 0;
 }