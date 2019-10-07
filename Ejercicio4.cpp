//Calculadora basica con 2 funciones adicionales
 
 #include<iostream>
 #include<stdlib.h>
 using namespace std;
 

 
 int main()
 {
 int opcion;
 int n, x=0, y=1, z=1;
 int numero,factorial=1; 
 	float a,b,suma,resta,multiplicacion,division;

 	cout<<"**INGRESE UNA OPCION**"<<endl;
 	cout<<"1- Suma de dos numeros"<<endl;
 	cout<<"2- Resta de dos numeros"<<endl;
 	cout<<"3- Multiplicacion de dos numeros"<<endl;
 	cout<<"4- Division de dos numeros"<<endl;
 	cout<<"5- Fibonacci de un numeros"<<endl;
 	cout<<"6- Factorial de un numero"<<endl;
 	cout<<"7- Salir"<<endl;
 	
 	cout<<"Ingrese numero de opcion:";cin>>opcion;
 	
 	if (opcion==1)
 	{cout<<"Ingrese primer numero a sumar:";
 	cin>>a;
 	cout<<"Ingrese segundo numero a sumar:";
 	cin>>b;
 	suma = a+b; 
 	cout<<"El resultado de la suma es:"<<suma;
	 }
 	
 	
 	if (opcion==2)
 	{cout<<"Ingrese primer numero a restar:";
 	cin>>a;
 	cout<<"Ingrese segundo numero a restar:";
 	cin>>b;
 	resta = a-b; 
 	cout<<"El resultado de la resta es:"<<resta;
	 }
 	
 	
 	if (opcion==3)
 	{cout<<"Ingrese primer numero a multiplicar:";
 	cin>>a;
 	cout<<"Ingrese segundo numero a multiplicar:";
 	cin>>b;
 	multiplicacion = a*b; 
 	cout<<"El resultado de la multiplicacion es:"<<multiplicacion;
	 }
	 
	 if (opcion==4)
 	{cout<<"Ingrese primer numero a dividir:";
 	cin>>a;
 	cout<<"Ingrese segundo numero a dividir:";
 	cin>>b;
 	division = a/b; 
 	cout<<"El resultado de la multiplicacion es:"<<division;
	 }

	
 	
	 if (opcion==5)
	 
 		cout<<"Digite el numero de elementos:"; cin>>n;
 		cout<<"1 ";
	for(int i=1;i<n;i++)
	{
	
		z = x+y;//1 2 3 5 
		cout<<z<<"";//1 2 3 5
		x=y;//1 1 2
		y=z;//1 2 3
	
 		
	
		
		
	}
		
		
	
	if (opcion==6)
		cout<<"Digite un numero:";cin>>numero;
	for (int i=1;i<=numero;i++){
		factorial= factorial*i;
		
		
	
	
	
	cout<<"\nEl factorial del numero es:"<<factorial <<endl;
	
	system("pause");
	}
	
	
		
	if (opcion==7)
	cout<< "Seguro que quieres finalizar?	  SI O NO?";
	cout<<"\n 1-SI";
	cout<<"\n 2-NO";
	cin>>b;
	if(b=1){
		return 0;
	
	}
	else{
		return main();
	}
	
		
		
		
	
	
 	
 	
 	
 	
 return 0;
 
 }
