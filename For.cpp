#include <iostream>
using namespace std;
main(){
	
	/*
	// i++ , i+=1 , i = i+1
	// variable inicio; finaliza; incrementar o decrementar
	//Incremento
	int contar=0;
	int i=0;
	for (i=4; i<=8; i+=2){ // 4 hasta 8 
		cout<<i<<endl;
		contar++;
		
	}
	
	cout<<"ciclos: "<<contar<<endl;
	
	cout<<"i fuera: "<<i<<endl<<endl;
	
	//Decremento
	for (int i=10; i>=0; i--){
		
		cout<<i<<endl;
		
	}
	
	for (int i=0; i<10; i++){
		
		if(i==5){
		cout<<"if"<<endl;
		//break;
		continue;
		}	
		cout<<i<<endl;
		
	}
	
		cout<<"Fuera del for"<<endl;
	
	//Decimales con Float	
	/*for (float i=0; i<10; i+=0.1){
		
		cout<<i<<endl;
	}
	*/
/*

//int 4 bytes
//int tam = 0;
		
int datos[] = {10,40,100,200,300,500};

tam = sizeof(datos) / sizeof(datos[0]);
cout<<sizeof(datos)<<endl; 

cout<<sizeof(datos[0])<<endl;
*/
/*
for (int i : datos){
	cout<<i<<endl;
}



for (int i=0;i<tam;i++){
	
	cout<<"Datos_i: "<<datos[i]<<endl;
}
*/

	int inicio = 0,fin = 0, res = 0;
	
	cout<<"Ingrese tabla inicial:";
	cin>>inicio;
	cout<<"Ingrese tabla final:";
	cin>>fin;
	
	for(int rango=inicio;rango<=fin;rango++){
	cout<<"Tabla del " <<rango<<endl;
		for (int i=1;i<=10;i++){
		res = rango * i;
		cout<<rango<<" X "<< i << " = "<<res<<endl;
	}	
	
	
		
	}
	
	


	system("pause");
	
} 
