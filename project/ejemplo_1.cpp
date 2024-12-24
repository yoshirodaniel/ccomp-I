//Hacer un programa que lea 5 numeros  en un arreglo, los copie a otro arreglo multiplicados por 2
//y muestre el segundo arreglo  

#include <iostream>

using namespace std;

int main() {

    int vec1[]={1,2,3,4,5},vec2[4];

    for (int i=0;i<5;i++){
        vec2[i]=vec1[i]*2;

        cout<<vec2[i]<<endl;
        
    }
    cout<<"bie";
    return 0;
} 