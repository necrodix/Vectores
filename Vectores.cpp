#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main ()
{
    string username;
    string pass;
    int intentos = 1;
	int arreglo[15];
	int escalar;
	int menu=999;
	int opc;
	int temp;
	char ch;
    while (intentos <4)
    {
        cout << "Por favor captura tu usario: \n";
        cin >> username;
        cout << "Por favor password: \n";
        ch = _getch();
		   while(ch != 13){//character 13 is enter
		      pass.push_back(ch);
		      cout << '*';
		      ch = _getch();
		   }
		cout<<"*";
        if (username == "admin" && pass == "admin")
        {
            cout << "Bienvenido !\n";
             for (int n=0 ; n<15 ; ++n )
			  {
			  	cout<<"Cual es el valor del arreglo en la posicion "<<n+1<<"\n";
			    cin >>arreglo[n];
			  }
			  
			  while(menu==999)
			  {
			  	cout<<"¿Que opcion deseas realizar?\n";
			  	cout<<"1)Clasificar\n";
			  	cout<<"2)Multiplicar por escalar\n";
			  	cout<<"3)Mostrar elemento de un vector\n";
			  	cout<<"4)Modificar elemento del vector \n";
				cout<<"5)Imprimir Arreglo\n";
			  	cout<<"6)Salir\n";
			  	
			  	cin>>opc;
			  	switch(opc)
				  {
				  	case 1:
					  {						   
						    for(int i=0; i<15; i++)
						    {
						        for(int j=i+1; j<15; j++)
						        {
						            if(arreglo[j] < arreglo[i])
						            {
						                temp = arreglo[i];
						                arreglo[i] = arreglo[j];
						                arreglo[j] = temp;
						            }
						        }
						    }
						    cout<<"Arreglo ordenado \n";
						    	for (int i=0;i<15;i++)
								{
									cout<<arreglo[i]<<"\n";
								}
						    
						    
						break;
					  }
					case 2:{
						cout<<"Por que escalar vamos a multiplicar el arreglo\n";
						cin>>escalar;
						
						for (int i=0;i<15;i++)
						{
							arreglo[i]=arreglo[i]*escalar;
						}
						cout<<"Arreglo multiplicado";
						for (int i=0;i<15;i++)
						{
							cout<<arreglo[i]<<"\n";
						}
						break;
					}
					case 3:
					{
						int posArr;
						cout<<"Que posicion del arreglo deseas imprimir \n";
						cin>>posArr;
						if(posArr<15)
						{
							cout<<arreglo[posArr]<<"\n";
						}else
						{
							cout<<"No hay un valor en la posicion que solicitaste \n";
						}
						break;
					}
					case 4:{
						int posArr;
						int valor=0;
						cout<<"Que posicion del arreglo deseas modificar \n";
						cin>>posArr;
						if(posArr<15){
							cout<<"Cual sera el valor nuevo?";
							cin>>valor;
							arreglo[posArr]=valor;
							cout<<"El valor nuevo es :"<<arreglo[posArr]<<"\n";
							
							cout<<"Arreglo modificado \n";
						    	for (int i=0;i<15;i++)
								{
									cout<<arreglo[i]<<"\n";
								}
						}else
						{
							cout<<"No hay un valor en la posicion que solicitaste \n";
						}
						break;
					}
					case 5:
					{
						for (int i=0;i<15;i++)
						{
							cout<<arreglo[i]<<"\n";
						}
						break;
					}
					case 6:{
						menu=0;
						break;
					}
					default:{
						cout<<"Opcion incorrecta favor de seleccionar un numero correcto del menu \n";
						break;
					}
				  }
			  }
			  	break;
		}
			  
		else
		{
          cout << "El acceso es invalido favor de validar \n" << '\n';
          intentos++;
        } 
    }

    if (intentos >= 3)
    {
        cout << "Usuario bloqueado favor de llamar al administrador.";
        return 0;
    }
     
}
