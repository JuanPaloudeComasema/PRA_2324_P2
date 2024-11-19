#include<vector>
#include<iostream>
#include "DyV.h"
#include<stdlib.h>

using namespace std;

std::vector<int> a(20);//Vector de ints vacío
std::vector<int> c(20);
std::vector<float> b(10);      //Vector de floats con 10 elementos
std::vector<short> d{1, 2, 3}; //Vector de shorts con 3 elementos: 1, 2 y 3


int main(){
	for(int i = 0; i < 20; i++){
		a[i] = i;
	}
	for(int i = 0; i < 20; i++){
                c[i] = 20 - i;
        }

BusquedaBinaria(3, a, 0, 20);

BusquedaBinaria_INV(9, c, 20, 0);
}
