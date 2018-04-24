#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANIO 5
typedef struct{
        int estado;
        int legajo;
        char nombre[50];
        int nota1;
        int nota2;
        float promedio;
}Alumno;


Alumno pedirAlumno(void);
void mostrarAlumno(Alumno []);
int buscarLugarLibre(Alumno[],int);
int buscarIndiceDelAlumno(Alumno listado[],int legajo,int cantidad);
int insertarAlumnoEnLaLista(Alumno[]);
void mostrarListado(Alumno listado[],int cantidad);
float calcularPromedio(int ,int);
void ordenarPorPromedio(Alumno[],int cantidad);
/**
para el martes 24 de abril
1-completar las funciones faltantes con sus implementaciones
2- hacer un menu de opciones (en el main o en funciones)
3- Terminar el alta baja y modificacion de un alumno del listado
*/
int main()
{

    Alumno aluDelMain[TAMANIO];



    int i;
    Alumno listadoDelMain[TAMANIO];
    for(i=0;i<TAMANIO;i++)
    {
        aluDelMain[i]= pedirAlumno();
        //listadoDelMain[i].estado=0;
    }
    //mostrarListado(listadoDelMain,TAMANIO);
    //ordenarPorPromedio(listadoDelMain,TAMANIO);
    mostrarAlumno(aluDelMain);

    return 0;
}

/*void ordenarPorPromedio(Alumno listado[],int cantidad)
{
     int i;
    for(i=0;i<cantidad;i++)
    {
        listado[i].legajo=i*9;
    }

}*//*
void mostrarListado(Alumno listado[],int cantidad)
{
     int i;
    for(i=0;i<cantidad;i++)
    {
       mostrarAlumno( listado[i]);
    }
}*/
Alumno pedirAlumno(void)
{
    Alumno aluRetorno;
    aluRetorno.legajo=666;
    aluRetorno.estado=1;
    aluRetorno.nota1=7;
    aluRetorno.nota2=8;
    strcpy(aluRetorno.nombre,"Hola");
    //pido todos los datos
    return aluRetorno;

}
void mostrarAlumno(Alumno aluAux [])
{
    for(int i=0;i<TAMANIO;i++)
    {
    printf("\nel legajo es : %d\n",aluAux[i].legajo );
    printf("el estado es : %d\n",aluAux[i].estado );
    printf("\nla nota 1 es : %d\n",aluAux[i].nota1 );
    printf("la nota 2 es : %d",aluAux[i].nota2 );
    printf("\nEL nombre del alumno es: %s",aluAux[i].nombre);
    }
}
int buscarLugarLibre(Alumno listado[],int tamanio)
{
    int indice=-1;
    int i;
    for(i=0;i<tamanio;i++)
    {
        if(listado[i].estado==0)
        {
            indice=i;
            break;
        }
    }
    return indice;
}


