#include <iostream>
using namespace std;

double c_to_f(double c){
    return c * 1.8 + 32;
}

double f_to_c(double f){
    return (f-32) * 5 / 9;
}

int main(){
    double c;
    double f;
    cout << "Enter c degree values: ";
    for(int i = 0; i < 5; i++){
        cin >> c;
        cout << c << " degree C equals " << c_to_f(c) << " degree F" << endl;
    }
    cout << "Enter f degree values: ";
    for(int i = 0; i < 5; i++){
        cin >> f;
        cout << f << " degree F equals " << f_to_c(f) << " degree C" << endl;
    }
}