#include <iostream>
using namespace std;

int main() {
    float a=0, b=0, triangolo=0, quadrato=0, rettangolo=0;
    cin >> a>> b;
    int opzione=0;
    cin >> opzione;
    switch(opzione) {
        case 0:
            triangolo=a*b/2;
            cout << triangolo;
            break;
        case 1:
            quadrato=a*a;
            cout << quadrato;
            break;
        case 2:
            rettangolo=a*b;
            cout <<rettangolo;
            break;
        default:
            cout << "opzione non valida" <<endl;
    }
    return 0;
}
