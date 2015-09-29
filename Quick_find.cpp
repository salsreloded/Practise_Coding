#include<iostream>
#include<cstdio>
#include<cstring>

class UF {
private:
     int *array;

public:
    UF() {
    array = new int[10];
    for(int i=0;i<10;i++)
        array[i]=i;
    }

bool connected(int p,int q) {
    return array[p]==array[q];
}
void makeUnion(int p,int q) {
    int valA=array[p];
    int valB=array[q];
    for(int i=0;i<10;i++) {
        if (array[i]==valA)
            array[i]=valB;
    }

}
};

int main() {
    UF* uf = new UF;
    printf("%d",(int)uf->connected(0,1));
    printf("%d",uf->connected(0,2));
    uf->makeUnion(0,1);
    printf("%d",uf->connected(0,1));
    printf("%d",uf->connected(0,2));
    uf->makeUnion(1,2);
    printf("%d",uf->connected(0,1));
    printf("%d",uf->connected(0,2));

return 0;
}
