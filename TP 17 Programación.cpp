 #include <iostream>  
using namespace std;
int CalcularFactorial(int numero);
int main () 
{ 
  int numero, factorial, i;
  cout<<"cual es el numero?"<<endl;
  cin>>numero;
  factorial=CalcularFactorial(numero);
  cout<<"el factorial del numero es: "<<factorial<<endl;
  
  return 0;
}

int CalcularFactorial(int numero)
{
	int factorial=1, i;
	
	for(i=1; i<=numero; i++)
	{ 
	factorial=factorial*i;
	}
	return factorial;
}