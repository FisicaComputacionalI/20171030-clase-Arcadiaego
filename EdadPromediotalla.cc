/* Saber la edad promedio a la que se graduan los estudiantes de la licenciatura en Física */
// F. Moisés Amador García
// 30 de Octubre de 2017 

# include <iostream>

using namespace std;

int main(){
	size_t talla=14;
	int*edad=new int[talla];
 	int suma=0;
	for(int i=0; i<talla; i++){
		cout<<"¿A que edad te graduaste?"<<endl;
		cin>>edad[i];
		suma+=edad[i];
	}
	for(int j=0; j<talla; j++)
	cout<<edad[j]<<",";
	cout<<endl;
	cout<<"La edad promedio de graduación esperada es "<<suma/14<<endl;
	delete [] edad;	
	return 0;
}



