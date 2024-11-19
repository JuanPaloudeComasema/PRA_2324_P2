#include<vector>
#include <iostream>
using namespace std;

int BusquedaBinaria(int x, vector<int> v, int ini, int fin){
       if(ini > fin){
        cout <<("Array no encontrada");
       }
       int medio = (ini + fin) / 2;

       if(v[medio] == x){
	       cout << ("valor encotrado en la posicion: ");
	       return medio;
       }else if(v[medio] > x){

	       return BusquedaBinaria(x, v, ini, medio - 1);
       }else{
		return BusquedaBinaria(x, v, medio +  1, fin);
       }
}

int BusquedaBinaria_INV(int x, vector<int> v, int ini, int fin){
	if(ini > fin){
        cout << ("Array no encontrada");
       }
       int medio = (ini + fin) / 2;

       if(v[medio] == x){
               cout << ("valor encotrado en la posicion: ");
               return medio;
	}else if(v[medio] > x){
		return BusquedaBinaria(x, v, medio +  1, fin);
       }else{
	        return BusquedaBinaria(x, v, ini, medio - 1);
       }
}

int Partition(vector<int> v, int ini, int fin){
        int x = v[fin];
        int i = ini;
        int val;
        for(int j = ini; j < fin; j++){
                if(v[j] <= x){
                        val = v[i];
                        v[i] = v[j];
                        v[j] = val;
                        i++;
		}
	}
	 val = v[i];
         v[i] = v[fin];
	 v[fin] = val;
	 return i;
}


void QuickSort(vector<int> v, int ini, int fin){
	if(ini < fin){
		int pivot = Partition(v, ini, fin);
		QuickSort(v, ini, pivot -1);
		QuickSort(v, pivot + 1, fin);
	}
}					
