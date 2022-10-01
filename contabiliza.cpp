#include<iostream>
using namespace std;

int main()
{
	int JLER_i=0,JLER_l;
	float JLER_s=0;
	cout<<"ingrese el limite JLER_l="; cin>>JLER_l;
	do{
		
	cout<<"ingrese el numero JLER_x="; cin>>JLER_x;
	JLER_i=JLER_i+1;
	JLER_s=JLER_s+JLER_x;



	}while(JLER_i<JLER_l);
	cout<<"Se ingresaron "<<JLER_l<<" numeros "<< "que sumaron "<<JLER_s<<endl;
	return 0;



}
