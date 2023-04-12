
#include <iostream>
using namespace std;

int main()
{
    double tuntipalkka, tyokustannukset, materiaalikulut, toimPakkaus, omaKustHinta, kateProsentti;
    double jakaja, kateSumma, verotonHinta, verot, kokonaisHinta;
    int tunnit;
    const double alv = 1.24, yel = 1.8;


    cout << "\t*******************************\n";
    cout << "\t******* HINTALASKURI *******\n";
    cout << "\t*******************************\n";


    cout << "\tTuntipalkkasi: " << endl;
    cout << "\t";
    cin >> tuntipalkka;
    cout << "\tTyotuntien maara: " << endl;
    cout << "\t";
    cin >> tunnit;
    tyokustannukset = tunnit * tuntipalkka * yel;

    cout << "\tMateriaalikulut: " << endl;
    cout << "\t";
    cin >> materiaalikulut;
    cout << "\tToimitus- ja pakkauskulut: " << endl;
    cout << "\t";
    cin >> toimPakkaus;
    omaKustHinta = tyokustannukset + materiaalikulut + toimPakkaus;

    cout << "\tKateprosentti: " << endl;
    cout << "\t";
    cin >> kateProsentti;
    jakaja = (100 - kateProsentti) / 100;

    verotonHinta = omaKustHinta / jakaja;

    kateSumma = verotonHinta - omaKustHinta;

    kokonaisHinta = verotonHinta * alv;
    verot = kokonaisHinta - verotonHinta;

    cout << endl << endl;
    cout << "\tTyokustannukset: " << tyokustannukset << " €" << endl;
    cout << "\tMateriaalikulut: " << materiaalikulut << " €" << endl;
    cout << "\tToimitus- ja pakkauskulut: " << toimPakkaus << " €" << endl << endl;
 
    cout << "\tOmakustannushinta: " << omaKustHinta << " €" << endl << endl;

    cout << "\tKatteen maara: " << kateSumma << " €" << endl;
    cout << "\tVeroton hinta: " << verotonHinta << " €" << endl;
    cout << "\tVeron maara: " << verot << " €" << endl;
    cout << endl << endl;
    cout << "\tKokonaishinta: " << kokonaisHinta << " €" << endl;


    system("pause>0");
}
