#include <iostream>
using namespace std;

// deklarasi variabel 
float r;
float phi = 3.14159;
// fungsi awal
void input(){
    cout << "Masukan jari-jari = ";
    cin >> r;
}
// fungsi proses
float luas_lingkaran (float phi, float r) {
    return phi * r * r;
}

void output (){
    cout << "Luas lingkaran tersebut = " << luas_lingkaran(phi, r) << endl;

}
int main(){
    input();
    output();
}