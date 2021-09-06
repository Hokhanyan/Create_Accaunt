#include "Accaunt.hpp"

string Registr(){

        string x, z, y, q;

        cout << "UserName "; cin >> x;
        cout << "Password "; cin >> y;
        cout << "Confirm password"; cin >> q;
        cout << "Write information = "; cin >> z;

        while(q != y){
                cout << "Password "; cin >> y;
                cout << "Confirm password "; cin >> q;
        }

        Person People;
        People.login = x;
        People.passw = y;
        People.info = z;

        ofstream file;
        file.open(x);
        file << z <<endl;
        file.close();

        return x, z;
}
