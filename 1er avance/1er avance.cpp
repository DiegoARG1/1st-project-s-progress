#include <iostream>
#include <math.h> 
#include <conio.h> 
#include <stdio.h>
using  namespace std;

int main()
{
    int opcion, na, op1;
    char name[100], des[100], clas[100], gen[50], con[50];
    float pres, total, imp, timp;
    imp = 0.16;
    cout << "\t ***MENU DE OPCIONES***" << endl;
    cout << "1.-Alta de Articulos" << endl;
    cout << "2.-Baja de Articulos" << endl;
    cout << "3.-Modificacion de Articulo" << endl;
    cout << "4.-Lista" << endl;
    cout << "5.-Limpiar Pantalla" << endl;
    cout << "6.-Salir" << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        cout << "Numero de Articulo" << endl;
        cin >> na;

        cout << "Nombre de Articulo" << endl;
        cin >> name;

        cout << "Descripcion" << endl;
        cin >> des;

        cout << "Clasificacion" << endl;
        cin >> clas;

        cout << "Genero" << endl;
        cin >> gen;

        cout << "Consola" << endl;
        cin >> con;

        cout << "Precio Unitario" << endl;
        cin >> pres;

        timp = pres * imp;
        total = pres + timp;

        cout << "¿desea regresar al menu?"<<endl;
        cout << "1.- si" << endl;
        cout << "2.- no" << endl;
        cin >> op1;
        if (op1 == 1)
        {
            return main();
        }
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        system("cls");
        return main();
        break;
    case 6:
        exit(1);
        break;
    }
}