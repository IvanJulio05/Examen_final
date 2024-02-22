#include <iostream>

using namespace std;

struct nodo{
    int dato;
    nodo *next;
};

void insertar(int dato,nodo *&lista);
void mostrar(nodo *lista);

int main(){
    
    nodo *lista=NULL;
    int dato;
    for(int i=0;i<20;i++){
        cout<<"digite un numero: ";cin>>dato;
        insertar(dato,lista);
    }
    cout<<"\tLISTA"<<endl;
    mostrar(lista);
    
    return 0;
}

void insertar(int dato,nodo *&lista){
    
    nodo *new_nodo=new nodo();
    new_nodo->dato=dato;
    nodo *aux1=lista;
    nodo *aux2;
    
    //ordenando lista
    
    while(aux1!=NULL && aux1->dato<dato){
        aux2=aux1;
        aux1=aux1->next;
    }
    
    if(aux1==lista){
        lista=new_nodo;
    }
    else{
        aux2->next=new_nodo;
    }
    new_nodo->next=aux1;
    
}

void mostrar(nodo *lista){
    
    nodo *aux=lista;
    
    while(aux!=NULL){
        cout<<aux->dato<<"->";
        aux=aux->next;
    }
    cout<<"NULL"<<endl;
}