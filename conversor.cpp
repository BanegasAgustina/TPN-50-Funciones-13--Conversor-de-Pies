#include <bits/stdc++.h>
using namespace std;
float ConvertirPiesPulgadas(float pies);
float ConvertirPiesCm(float pie);
float ConvertirPiesMetros(float pi);
float ConvertirPiesYardas(float p);

int main(){
	float p1e;
cout<<"ingresar pies  ";	
cin>>p1e;
cout<<"medida en pulgadas="<<ConvertirPiesPulgadas(p1e)<<endl;
cout<<"medida en CM="<< ConvertirPiesCm(p1e)<<endl;
cout<<"medida en M="<<ConvertirPiesMetros(p1e)<<endl;
cout<<"medida en yardas="<<ConvertirPiesYardas(p1e)<<endl;
}
float ConvertirPiesPulgadas(float pies){
	float pulgadas;
	pulgadas=pies*(12/1);
	return pulgadas;
}
float ConvertirPiesCm(float pie){
	float cm;
	cm=pie*(30.48/1.0);
	return cm;
}
float ConvertirPiesMetros(float pi){
	float Metros;
	Metros=pi*(3.28/1.0);
	return Metros;
}
float ConvertirPiesYardas(float p){
		float yardas;
	yardas=p*(0.333/1.0);
	return yardas;
}