#include "Accaunt.hpp"

string Login(){

        string l, p;

        cout << "Login "; cin >> l;
        cout << "Password "; cin >> p;

        ifstream file;
        file.open(l);

        string myline;

        if(file.is_open()){
                cout << "Welcome your accaunt" << endl;
                while(file){
                        getline (file, myline);
                        cout << myline << endl;
                }
        }
	else{
                cout << "Accaunt not found" << endl;
                Login();
        }

        return l, p;
}

