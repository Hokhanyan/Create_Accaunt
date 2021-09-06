#include "Accaunt.hpp"

int LogRes();
string Login();
string Registr();

int main(){
        int lr = LogRes();

        if(lr == 1){
                Login();
        }
        else if(lr == 2){
                Registr();
        }
        else if(lr != 1 && LogRes() != 2){
                lr;
                cout << "   Error 404 " << endl;
                cout << " Page not found" << endl;
        }

        return 0;
}
