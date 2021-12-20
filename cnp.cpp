#include <iostream>
#include <sstream>
using namespace std;

int main() {
    system("color f");

    string cnp;
    string anulincareneaflam4cifre;

    cout << "scrieti cnp-ul: ";
    cin >> cnp;


    if (cnp.size() == 13) {


        cout << "In ce an ne alfam? ";
        cin >> anulincareneaflam4cifre;

        system("CLS");

        


        string sex;
        string primacifraanasterii;
        string adouafraanasterii;


        string anulprimacifra;
        string anuladouacifra;
        anulprimacifra = anulincareneaflam4cifre[2];
        anuladouacifra = anulincareneaflam4cifre[3];
        string anulincareneaflam123 = anulprimacifra.append(anuladouacifra);

        stringstream geek3(anulincareneaflam123);

        int anulincareneaflamint = 0;
        geek3 >> anulincareneaflamint;

        stringstream geek4(anulincareneaflam4cifre);

        int anulincarenea4cifreint = 0;
        geek4 >> anulincarenea4cifreint;



        sex = cnp[0];


        primacifraanasterii = cnp[1];
        adouafraanasterii = cnp[2];
        string anulnasterii = primacifraanasterii.append(adouafraanasterii);


        stringstream geek(anulnasterii);

        int anulnasteriiint = 0;
        geek >> anulnasteriiint;


        string primazilaluni;
        string adouazialuni;
        primazilaluni = cnp[3];
        adouazialuni = cnp[4];
        string luna = primazilaluni.append(adouazialuni);



        string primazidenastere;
        string adouazidenastere;
        primazidenastere = cnp[5];
        adouazidenastere = cnp[6];
        string zidenastere = primazidenastere.append(adouazidenastere);


        string primazidejudet;
        string adouazidejudet;
        primazidejudet = cnp[7];
        adouazidejudet = cnp[8];
        string nrjudetului = primazidejudet.append(adouazidejudet);





        string nr19 = "19";


        string anul1900 = nr19.append(anulnasterii);

        stringstream geek2(anul1900);

        int anul1900int = 0;
        geek2 >> anul1900int;



        string nr20 = "20";


        string anul2000 = nr20.append(anulnasterii);

        stringstream geek5(anul2000);

        int anul2000int = 0;
        geek5 >> anul2000int;


        if (sex == "5") {
            cout << "Sex: M" << endl;
        }
        else if (sex == "1") {
            cout << "Sex: M" << endl;
        }
        else if (sex == "6") {
            cout << "Sex: F" << endl;
        }
        else if (sex == "2") {
            cout << "Sex: F" << endl;
        }
        else {
            cout << "eroare la sex" << endl;
        }

        int varstadupa90 = anulincarenea4cifreint - anul2000int;
        int varstainainte90 = anulincarenea4cifreint - anul1900int;
        int anulnasteriiinaite90 = anulincarenea4cifreint - varstainainte90; // tata
        int anulnasteriidupa90 = anulincarenea4cifreint - varstadupa90; // eu

        if (anulnasteriiint <= anulincareneaflamint) {
            cout << "Varsta: " << varstadupa90 << " Ani" << endl;
        }
        else if (anulnasteriiint > anulincareneaflamint) {
            cout << "Varsta: " << varstainainte90 << " Ani" << endl;
        }


        if (anulnasteriiint > anulincareneaflamint) {
            cout << "Data nasterii: " << zidenastere << "." << luna << "." << anulnasteriiinaite90 << endl; // ex tata
        }
        else if (anulnasteriiint <= anulincareneaflamint) {
            cout << "Data nasterii: " << zidenastere << "." << luna << "." << anulnasteriidupa90 << endl; // ex eu
        }
        else {
            cout << "Eroare la data de nastere" << endl;
        }


        if (nrjudetului == "01") {
            string judet = "Alba";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "02") {
            string judet = "Arad";
            cout << judet << endl;
        }
        else if (nrjudetului == "03") {
            string judet = "Arges";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "04") {
            string judet = "Bacau";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "05") {
            string judet = "Bihor";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "06") {
            string judet = "Bistrita-Nasaud";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "07") {
            string judet = "Botosani";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "08") {
            string judet = "Brasov";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "09") {
            string judet = "Braila";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "10") {
            string judet = "Buzau";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "11") {
            string judet = "Caras-Severin";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "12") {
            string judet = "Cluj";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "13") {
            string judet = "Constanta";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "14") {
            string judet = "Covasna";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "15") {
            string judet = "Dâmbovita";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "16") {
            string judet = "Dolj";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "17") {
            string judet = "Galati";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "18") {
            string judet = "Gorj";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "19") {
            string judet = "Harghita";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "20") {
            string judet = "Hunedoara";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "21") {
            string judet = "Ialomita";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "22") {
            string judet = "Iasi";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "23") {
            string judet = "Ilfov";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "24") {
            string judet = "Maramures";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "25") {
            string judet = "Mehedinti";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "26") {
            string judet = "Mures";
            cout << "Judet: " << judet << endl;
        }
        else if (nrjudetului == "27") {
            string judet = "Neamt";
            cout << judet << endl;
        }
        else if (nrjudetului == "28") {
            string judet = "Olt";
            cout << judet << endl;
        }
        else if (nrjudetului == "29") {
            string judet = "Prahova";
            cout << judet << endl;
        }
        else if (nrjudetului == "30") {
            string judet = "Satu Mare";
            cout << judet << endl;
        }
        else if (nrjudetului == "31") {
            string judet = "Salaj";
            cout << judet << endl;
        }
        else if (nrjudetului == "32") {
            string judet = "Sibiu";
            cout << judet << endl;
        }
        else if (nrjudetului == "33") {
            string judet = "Suceava";
            cout << judet << endl;
        }
        else if (nrjudetului == "34") {
            string judet = "Teleorman";
            cout << judet << endl;
        }
        else if (nrjudetului == "35") {
            string judet = "Timis";
            cout << judet << endl;
        }
        else if (nrjudetului == "36") {
            string judet = "Tulcea";
            cout << judet << endl;
        }
        else if (nrjudetului == "37") {
            string judet = "Vaslui";
            cout << judet << endl;
        }
        else if (nrjudetului == "38") {
            string judet = "Vâlcea";
            cout << judet << endl;
        }
        else if (nrjudetului == "39") {
            string judet = "Vrancea";
            cout << judet << endl;
        }
        else if (nrjudetului == "40") {
            string judet = "Bucuresti";
            cout << judet << endl;
        }
        else if (nrjudetului == "41") {
            string judet = "Bucuresti - Sector 1";
            cout << judet << endl;
        }
        else if (nrjudetului == "42") {
            string judet = "Bucuresti - Sector 2";
            cout << judet << endl;
        }
        else if (nrjudetului == "43") {
            string judet = "Bucuresti - Sector 3";
            cout << judet << endl;
        }
        else if (nrjudetului == "44") {
            string judet = "Bucuresti - Sector 4";
            cout << judet << endl;
        }
        else if (nrjudetului == "45") {
            string judet = "Bucuresti - Sector 5";
            cout << judet << endl;
        }
        else if (nrjudetului == "46") {
            string judet = "Bucuresti - Sector 6";
            cout << judet << endl;
        }
        else if (nrjudetului == "47") {
            string judet = "Bucuresti - Sector 7 (desfiintat)";
            cout << judet << endl;
        }
        else if (nrjudetului == "48") {
            string judet = "Bucuresti - Sector 8 (desfiintat)";
            cout << judet << endl;
        }
        else if (nrjudetului == "51") {
            string judet = "Calarasi";
            cout << judet << endl;
        }
        else if (nrjudetului == "52") {
            string judet = "Giurgiu";
            cout << judet << endl;
        }
        else {
            cout << "Eroare la judet" << endl;
        }


    }
    else {
        cout << "Trebuie sa introduci un cnp valid de 13 cifre!" << endl;
    }

    system("pause");
    return 0;
}
