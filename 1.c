#include<stdio.h>

int main(){
    char a[100];
    scanf("%[^\n]",&a); //input kalimat sampai enter
    printf("%s\n",a); //print kalimat yg diinputkan
    return 0;
}
