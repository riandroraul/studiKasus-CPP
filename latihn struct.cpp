#include <iostream>
using namespace std;

struct Mahasiswa{
	char namaMhs[50];
	char nimMhs[15];
	int energy = 10;

	int makan(int porsi){
		energy += porsi;
		return energy;
	}

	int tidur(int jamTidur){
		energy += porsi;
		return energy;
	}
};
int main(){
	Mahasiswa mhs1;

	cout<<"Nama Mahasiswa : ";
	cin.getline(mhs1.namaMhs, 50);
	cout<<"Nim Mahasiswa : ";
	cin.getline(mhs1.nimMhs);


	cout<<"Nama Mahasiswa : "<<mhs1->namaMhs;
	cout<<"Nim Mahasiswa : "<<mhs1->nimMhs;

}
