#include <iostream>
using namespace std;

float nilaiTugas(float tugas1, float tugas2, float tugas3){
	float result = ((tugas1 + tugas2 + tugas3)/ 3 ) * 0.2;
	cout<<"nilai tugas : "<<result;
}
float nilaiUts(float nilai){
	float result = nilai * 0.3;
	cout<<result;
}
float nilaiUas(float nilai){
	float result = nilai * 0.5;
	cout<<result;
}

int main(){
	cout<<"||===========\tProgram menghitung Nilai Akhir===========||\n";
	float tugas1, tugas2, tugas3, nilaiUTS, nilaiUAS;
	cout<<"Nilai Tugas 1 Anda : ";
	cin>>tugas1;
	cout<<"Nilai Tugas 2 Anda : ";
	cin>>tugas2;
	cout<<"Nilai Tugas 3 Anda : ";
	cin>>tugas3;
	cout<<"Hasil nilai Tugas : ";
	nilaiTugas(tugas1, tugas2, tugas3);
	cout<<"Nilai UTS : ";
	cin>>nilaiUTS;
	float Uts = nilaiUts(nilaiUTS);
	cout<<"Hasil Nilai UTS : "<<Uts;
	cout<<"Nilai UaS : ";
	cin>>nilaiUAS;
	float Uas = nilaiUas(nilaiUAS);
	cout<<"Hasil Nilai UAS : "<<Uas;
}
