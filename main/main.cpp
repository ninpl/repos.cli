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

    cout << "Gaia  - > https://github.com/Nerve-Alexandria/Gaia" << endl;

    cout << "**************************************************" << endl;

    cout << "1-> Volver" << endl;
    cin >> input;
    system("CLS");
}

// Metodo Menu Sub Unity
void MenuSubUnity()
{
    cout << "************      Lista  Unity        ************" << endl;

    cout << "Imagen2Text                - > https://github.com/MoonAntonio/Imagen2Text" << endl;
    cout << "DES                        - > https://github.com/MoonAntonio/DES" << endl;
    cout << "BehaviourScenes            - > https://github.com/MoonAntonio/BehaviourScenes" << endl;
    cout << "UCamaraSetup               - > https://github.com/MoonAntonio/UCamaraSetup" << endl;
    cout << "Beta-Sanbox                - > https://github.com/MoonAntonio/Beta-Sanbox" << endl;
    cout << "Beta-xbot                  - > https://github.com/MoonAntonio/beta-xbot" << endl;
    cout << "UnityEditor-MiniExtension  - > https://github.com/MoonAntonio/UnityEditor-MiniExtension" << endl;
    cout << "Pcg                        - > https://github.com/MoonAntonio/pcg" << endl;
    cout << "Proto-Tactic               - > https://github.com/MoonAntonio/Proto-Tactic" << endl;
    cout << "UKeybindsC                 - > https://github.com/MoonAntonio/UKeybindsC" << endl;
    cout << "Scne-memory                - > https://github.com/MoonAntonio/scne-memory" << endl;
    cout << "Menu-circular              - > https://github.com/MoonAntonio/menu-circular" << endl;
    cout << "UGUI-Effect                - > https://github.com/MoonAntonio/UGUI-Effect" << endl;
    cout << "U.roomba2                  - > https://github.com/MoonAntonio/u.roomba2" << endl;
    cout << "WaterLowpoly               - > https://github.com/MoonAntonio/WaterLowpoly" << endl;
    cout << "LightsManager              - > https://github.com/MoonAntonio/LightsManager" << endl;
    cout << "GestorEscenasUnity         - > https://github.com/MoonAntonio/GestorEscenasUnity" << endl;
    cout << "Ia.party.u5                - > https://github.com/MoonAntonio/ia.party.u5" << endl;
    cout << "U.camara.shake             - > https://github.com/MoonAntonio/u.camara.shake" << endl;
    cout << "U.preloader                - > https://github.com/MoonAntonio/u.preloader" << endl;
    cout << "UBallisticaProject         - > https://github.com/MoonAntonio/UBallisticaProject" << endl;
    cout << "Pb-unity                   - > https://github.com/MoonAntonio/pb-unity" << endl;
    cout << "U.data                     - > https://github.com/MoonAntonio/u.data" << endl;
    cout << "U.roomba                   - > https://github.com/MoonAntonio/u.roomba" << endl;
    cout << "2d-draw-unity              - > https://github.com/MoonAntonio/2d-draw-unity" << endl;
    cout << "CustomInspectorUnity       - > https://github.com/MoonAntonio/CustomInspectorUnity" << endl;

    cout << "**************************************************" << endl;

    cout << "1-> Volver" << endl;
    cin >> input;
    system("CLS");
}
