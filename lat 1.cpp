#include <iostream>
using namespace std;

float speed(float distance, float times){
	printf("\tJarak(KM) : ");
	scanf("%f", &distance);
	printf("\t Waktu(KM) : ");
	scanf("%f", &times);
	float result = distance / times;
	printf("\tKecepatan %f Km/jam : ", result);	
}
float distance(float times, float speed){
	printf("\t Kecepatan : ");
	scanf("%f", &distance);
	printf("\t Waktu(KM) : ");
	scanf("%f", &times);
	float result = times * speed;
	printf("\tJarak %f Km: ", result);	
}
float times(float distance, float speed){
	printf("\tJarak(KM) : ");
	scanf("%f", &distance);
	printf("\t Kecepatan (Km/jam): ");
	scanf("%f", &speed);
	float result = distance / speed;
	printf("\tWaktu Tempuh %f jam", result);	
}

int main(){
	float distanc, times, speeds;
	char choose;
	string task[3] = {"Kecepatan", "Jarak", "Waktu"};
		for (int i = 1; i <3; i++){
			cout<<i<<". \n"<<task[i]<<endl;
		}

	cout<<"\n\tProgram Mencari Jarak, Waktu, dan Kecepatan(Fisika)\n\n";
	switch (choose){
		case '1':
			speed(distanc, times);
		break;
		case '2':
			distance(times, speeds);
		break;
		case '3':
			times(distanc, speeds);
			cout<<""<<speed(distanc, times);
		default: 
			cout<<"Pilihan Salah!\n";
	}

}
c