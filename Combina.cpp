#include<iostream>
using namespace std;
int main ()
{
float a,b,c;
cout <<"Ingrese el valor de los 2 productos: ";
cin >>a>>b;
c=a-b;
if(c<0)
{
	cout <<"Saldo insuficiente"<<c;
}else{
cout<<"Su saldo es de: "<<c;
}
return (0);
}
