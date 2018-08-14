// Librerias
#include <iostream>
#include<cstdlib>
using namespace std;

// Declaracion
void MenuPrincipal();
void MenuUnity();
void MenuUnreal();
void MenuCPP();
void MenuWeb();

// Variables Globales
int input;

// Main
int main()
{
    // Menu Principal
    MenuPrincipal();

    // Logica de eleccion
    switch(input)
    {
        case 0:

            break;
    }

    system("pause");
    return 0;
}

// Metodo Menu Principal
void MenuPrincipal()
{

    cout << "************      CATEGORIAS    ************" << endl;
    cout << "************ 0->       Unity    ************" << endl;
    cout << "************ 1->       Unreal   ************" << endl;
    cout << "************ 2->       C/C++    ************" << endl;
    cout << "************ 3->       Web      ************" << endl;
    cout << "********************************************" << endl;

    cout << "Introduce la categoria" << endl;
    cin >> input;
}

// Metodo Menu Unity
void MenuUnity(){}

// Metodo Menu Unreal
void MenuUnreal(){}

// Metodo Menu C/C++
void MenuCPP(){}

// Metodo Menu Web
void MenuWeb(){}
