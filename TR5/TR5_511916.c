#include "heap.h"

HEAP* HEAP_create(int n, COMP* compara){
    HEAP* h;
    h = malloc(sizeof(HEAP));
    h -> P = 0;
    h -> N = n;
    h -> elems = malloc(sizeof(void*) *n);
    return h;
}

void swap(void* aux, HEAP* h){// muda os elementos de posição
    aux = h-> elems[h->P];
    h-> elems[h->P] = h-> elems[h->P/2];
    h-> elems[h->P/2] = aux;
}

void SUBIR(HEAP* h, int n, int p){
    if(h ->elems[h->P] < h->elems[h->P/2]){
        swap(0, h);
        SUBIR;
    }

}

void DESCER(HEAP* h, int n, int p){ // faz o elemento mais recente descer na árvore
    int son;
    if(2*(h->P) < h->N){
        son = 2*(h->P);
    }
    if(2*(h->P+1) < h->N){
        son = (h -> elems[2*(h->P)] < h->elems[2*(h->P+1)])? 2*(h->P) : 2*(h->P+1);
    }
    if(h->elems[son]< h->elems[h->P]){
        swap(0, h);
        DESCER(h,n, p);
    }
}

void HEAP_add(HEAP* h,void* newelem){
    if( h -> P < h -> N){ //se há espaço para mais um elemento, ele será inserido e o número de elementos contabilizados aumenta
        h -> P = h -> P + 1;
        h -> elems[h -> P] = newelem;
        SUBIR(h, 0, 0);
        COMP* compara(); //chama a função comp para reordenar
    }
}

void* HEAP_remove(HEAP* h){
    void *z = NULL;
    int x = 1;
    void* ptrx = &x;
    int diff = (h->N) -  (h -> P); //a partir da diferença, encontro a posição do ultimo elemento do vetor
    if(h -> P >= 1){ //precisa ter ao menos 1 elemento na arvore
        z = h->elems[h->N - diff];
        h->elems[h -> P] = ptrx; //o último elemento vai para a primeira posição
        h->elems[x] = h -> P;
        h->elems[h->P--];
        DESCER(h, 0, 0);
        COMP* compara();
    }
}
