
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

const string top = "<!doctype html>\n<html lang=\"en\">\n<head>\n<title>Mano asmeninis puslapis</title>\n<meta charset=\"UTF-8\">\n<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n<style>\ntable {border-collapse: collapse;width: 100%;}\nth, td {text-align: left; padding: 8px;}\ntr:nth-child(even) { background-color: #D6EEEE;}\n* {\nbox-sizing: border-box;\n}\nbody {\n background-image:url(\"https://www.appmachine.com/wp-content/uploads/2016/02/No-Branding-Header-Background-1.jpg\");\nmargin: 0;\n}\n.header {padding: 8px;text-align: center;background-image: url(\"https://www.appmachine.com/wp-content/uploads/2016/02/No-Branding-Header-Background-1.jpg\");color: white}\n.header h1 {font-size: 40px;}\n.navbar {overflow: hidden;background-color: black;position: sticky;position: -webkit-sticky;top: 0;}\n.navbar a {float: left;display: block;color: white;text-align: center;padding: 14px 20px;text-decoration: none;}\n.row {  display: -ms-flexbox;display: flex;-ms-flex-wrap: wrap; flex-wrap: wrap;}\n.side {-ms-flex: 30%;flex: 30%; background-image:url(\"https://www.desktopbackground.org/p/2010/06/04/28104_2560x1600-light-blue-solid-color-background-jpg_2560x1600_h.jpg\"); padding: 20px;}\n.main {-ms-flex: 70%; flex: 70%;background-image:url(\"https://www.desktopbackground.org/p/2010/06/04/28104_2560x1600-light-blue-solid-color-background-jpg_2560x1600_h.jpg\");padding: 20px;}\n.footer {padding: 20px;text-align: center;background: #ddd;}\n@media screen and (max-width: 700px) {.row {flex-direction: column;}}\n@media screen and (max-width: 400px) {.navbar a {float: none; width: 100%;}}\n</style>\n</head>\n<body>";

const string bottom = "\n</body>\n</html>";

void header(ofstream &document){
    cout<<"Iveskite svetaines pavadinima"<<endl;
    string name;
    getline(cin, name);
    document<<"<div class=\"header\">\n<h1>"<<name<<"</h1>\n</div>";
}

void navigationBar(ofstream &document){
    cout<<"Ar noresite prideti nuorodu juosta?  taip/ne";
    string temp;
    getline(cin, temp);
    document<<"<div class=\"navbar\">\n<a href=\"#\" class=\"active\">Pagrindinis</a>\n";
    while(temp == "taip"){
        cout<<"Iveskite nuorodos pavadinima"<<endl;
        getline(cin, temp);
        cout<<"Iveskite adresa, kuri busite nukreiti paspaude nuoroda (pradedami https://.....)"<<endl;
        string link;
        getline(cin, link);
        document<<"<a href=\""<<link<<"\">"<<temp<<"</a>\n";
        cout<<"Ar noresite prideti dar nuorodu? taip/ne"<<endl;
        getline(cin, temp);
    }
    document<<"</div>\n";
}

void personalInformation(ofstream &document){
    cout<<"Iveskite aprasyma apie save"<<endl;
    string info;
    getline(cin, info);
    document<<"<div class=\"row\">\n<div class=\"side\">\n<h2>Aprašymas apie mane:</h2>\n<p>"<<info<<"</p>\n";
    cout<<"Ar noresite prideti platesni aprasyma? taip/ne"<<endl;
    string temp;
    getline(cin, temp);
    if (temp == "taip"){
        cout<<"Kokia tema bus sio aprasymo?"<<endl;
        string temp;
        getline(cin, temp);
        document<<"<h2>"<<temp<<"</h2>\n";
        cout<<"Galite pradeti rasyti"<<endl;
        getline(cin, info);
        document<<"<p>"<<info<<"</p>\n";
        cout<<"Ar noresite prideti nuotrauka? taip/ne"<<endl;
        getline(cin, temp);
        if(temp == "taip"){
            cout<<"Pridetike nuotraukos nuoroda jpg formatu"<<endl;
            getline(cin, info);
            document<<"<img src=\""<<info<<"\" width=\"200\" height=\"200\">\n";
        }
    }
    document<<"</div>\n";
}

void table(ofstream &document){
    cout<<"Iveskite Lenteles pavadinima"<<endl;
    string temp;
    getline(cin, temp);
    document<<"<h2>"<<temp<<"</h2>\n";
    cout<<"Iveskite Lenteles aprasyma"<<endl;
    getline(cin, temp);
    document<<"<h5>"<<temp<<"</h5>\n";
    cout<<"Lentele sekurta 3x4, skirkite lentelei 3 skilciu pavadinimus ir uzpildykite duomenemis"<<endl;
    document<<"<table>\n<tr>\n";

    int i=1;
    string information[3];
    while (i<4) {
        cout <<i <<" skilties pavadinimas:" << endl;
        getline(cin, information[i-1]);
        document << "<th>"<<information[i-1]<<"</th>\n";
        i=i+1;
    }
    document<<"</tr>\n";
    i=1;
    cout<<endl;
    while (i<4){
        document<<"<tr>\n";
        cout<<i<<endl;
        cout <<"Iveskite duomenys: "<<information[0]<<endl;
        getline(cin, temp);
        document<<"<td>"<<temp<<"</td>\n";
        cout<<information[1]<<endl;
        getline(cin, temp);
        document<<"<td>"<<temp<<"</td>\n";
        cout<<information[2]<<endl;
        getline(cin, temp);
        document<<"<td>"<<temp<<"</td>\n";
        document<<"</tr>\n";
        i=i+1;
    }
    cout<<"Jeigu reikia, galite prideti papildomo teksto taip/ne"<<endl;
    getline(cin, temp);
    if(temp == "taip"){
        cout<<"Rasykite"<<endl;
        getline(cin,temp);
        document<<"<p>"<<temp<<"</p>\n";
    }
}

void otherInformation(ofstream &document){
    string temp;

        cout<<"Iveskite naujai sukurto turinio pavadinima"<<endl;
        getline(cin, temp);
        document<<"<div class=\"main\">\n<h2>"<<temp<<"</h2>\n";
        cout<<"Iveskite turinio trumpa aprasyma"<<endl;
        getline(cin, temp);
        document<<"<h5>"<<temp<<"</h5>\n";
        cout<<"Pradekite rasyti sia tema"<<endl;
        getline(cin, temp);
        document<<"<p>"<<temp<<"</p>";
        cout<<"Ar noresite prideti nuotrauka sia tema? taip/ne"<<endl;
        getline(cin, temp);
        if(temp == "taip"){
            cout<<"Pridekite nuotrauko nuoroda jpg formatu"<<endl;
            getline(cin, temp);
            document<<"<img src=\""<<temp<<"\" width=\"400\" height=\"300\">\n";

    }
        cout<<"Ar noresite sukurti nauja turini, kuris turi lentele? taip/ne"<<endl;
        getline(cin, temp);
        if (temp == "taip") table(document);

    document<<"</table>\n</div>\n</div>\n<div class=\"footer\">\n</div>";
}

void removeFile(bool isNeedToRemove, const string &filename) {
    if (isNeedToRemove)
        remove(filename.c_str());
}


int main() {

    SetConsoleOutputCP(CP_UTF8);
    ofstream file;

    removeFile(true, "index.html");

    file.open("index.html", ios::app);
    file << top;

    header(file);
    navigationBar(file);
    personalInformation(file);
    otherInformation(file);

    file<<bottom;

    file.close();

    ShellExecute(nullptr, "open", "index.html", nullptr, nullptr, SW_SHOWNORMAL);

    return 0;
}
