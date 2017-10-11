void mostrarCadena(char *ptrcadena){

    while(*ptrcadena!='\0'){
        printf("%c",*ptrcadena);
        ptrcadena++;

    }return;

}

typedef struct{
    int dia;
    int mes;
    int anio;

}Efecha;

typedef struct{
long int dni;
char nombre[31];
Efecha FechaNac;

}Epersona;

Epersona per,*ptrPer;
