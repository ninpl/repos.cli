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
void MenuSubMoon();
void MenuSubNerve();
void MenuSubUnity();

// Variables Globales
int input;
bool isIteraction;

// Main
int main()
{
    isIteraction = true;

    // Menu Principal
    MenuPrincipal();

    // Logica de eleccion
    while(isIteraction)
    {
      switch(input)
        {
            case 0:
                isIteraction = false;
                return 0;
                break;

            case 1:
                MenuPrincipal();
                break;

            case 2:
                MenuUnity();
                break;

            case 3:
                MenuUnreal();
                break;

            case 4:
                MenuCPP();
                break;

            case 5:
                MenuWeb();
                break;

            case 6:
                MenuSubMoon();
                break;

            case 7:
                MenuSubNerve();
                break;

            case 8:
                MenuSubUnity();
                break;
        }
    }
    return 0;
}

// Metodo Menu Principal
void MenuPrincipal()
{
    cout << "************      CATEGORIAS    ************" << endl;
    cout << "************ 1->       Menu     ************" << endl;
    cout << "************ 2->       Unity    ************" << endl;
    cout << "************ 3->       Unreal   ************" << endl;
    cout << "************ 4->       C/C++    ************" << endl;
    cout << "************ 5->       Web      ************" << endl;
    cout << "************ 0->       Salir    ************" << endl;
    cout << "********************************************" << endl;

    cout << "Introduce la categoria" << endl;
    cin >> input;
    system("CLS");
}

// Metodo Menu Unity
void MenuUnity()
{
    cout << "************      CATEGORIAS         ************" << endl;
    cout << "************ 6->   Moon-Type         ************" << endl;
    cout << "************ 7->   Nerve-Alexandria  ************" << endl;
    cout << "************ 8->   Unity             ************" << endl;
    cout << "************ 1->   Volver            ************" << endl;
    cout << "*************************************************" << endl;

    cout << "Introduce la categoria" << endl;
    cin >> input;
    system("CLS");
}

// Metodo Menu Unreal
void MenuUnreal()
{
    cout << "************      Lista  Unreal       ************" << endl;
    cout << "**************************************************" << endl;

    cout << "1-> Volver" << endl;
    cin >> input;
    system("CLS");
}

// Metodo Menu C/C++
void MenuCPP()
{
    cout << "************      Lista  C/C++        ************" << endl;

    cout << "Codingame - > https://github.com/MoonAntonio/codingame" << endl;
    cout << "SnakeCPP  - > https://github.com/MoonAntonio/SnakeCPP" << endl;

    cout << "**************************************************" << endl;

    cout << "1-> Volver" << endl;
    cin >> input;
    system("CLS");
}

// Metodo Menu Web
void MenuWeb()
{
    cout << "************      Lista  Web          ************" << endl;

    cout << "Github-windows  - > https://github.com/MoonAntonio/github-windows" << endl;
    cout << "Aboutmoonv2     - > https://github.com/MoonAntonio/aboutmoonv2" << endl;
    cout << "Rediset-minimal - > https://github.com/MoonAntonio/rediset-minimal" << endl;
    cout << "Aboutmoon       - > https://github.com/MoonAntonio/aboutmoon" << endl;
    cout << "Scared-min-404  - > https://github.com/MoonAntonio/scared-min-404" << endl;

    cout << "**************************************************" << endl;

    cout << "1-> Volver" << endl;
    cin >> input;
    system("CLS");
}

// Metodo Menu Sub Moon
void MenuSubMoon()
{
    cout << "************    Lista  Moon-Type      ************" << endl;

    cout << "MTodo       - > https://github.com/MOON-TYPE/MTodo" << endl;
    cout << "MDev        - > https://github.com/MOON-TYPE/MDev" << endl;
    cout << "Moonlib     - > https://github.com/MOON-TYPE/Moonlib" << endl;
    cout << "MIcaros     - > https://github.com/MOON-TYPE/MIcaros" << endl;
    cout << "MDoc        - > https://github.com/MOON-TYPE/MDoc" << endl;
    cout << "MHierarchy  - > https://github.com/MOON-TYPE/MHierarchy" << endl;

    cout << "**************************************************" << endl;

    cout << "1-> Volver" << endl;
    cin >> input;
    system("CLS");
}

// Metodo Menu Sub Nerve
void MenuSubNerve()
{
    cout << "************      Lista  Nerve        ************" << endl;
    cout << "**************************************************" << endl;

    cout << "1-> Volver" << endl;
    cin >> input;
    system("CLS");
}

// Metodo Menu Sub Unity
void MenuSubUnity()
{
    cout << "************      Lista  Unity        ************" << endl;
    cout << "**************************************************" << endl;

    cout << "1-> Volver" << endl;
    cin >> input;
    system("CLS");
}
