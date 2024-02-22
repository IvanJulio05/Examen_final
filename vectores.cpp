
#include <iostream>

using namespace std;

int main(){
    
    int numeros[20];
    
    //llenando vector;
    for(int i=0;i<20;i++){
        cout<<"Digite un numero: ";cin>>numeros[i];
    }
    
    //ordenando arreglo
    int aux;
    for(int i=0;i<20;i++){
        for(int j=0;j<19;j++){
            
            if(numeros[j]>numeros[j+1]){
                aux=numeros[j];
                numeros[j]=numeros[j+1];
                numeros[j+1]=aux;
            }
            
        }
    }
    
    //mostrando arreglo ordenado
    for(int i=0;i<20;i++){
        cout<<numeros[i]<<"-";
    }
    
    return 0;
}