
#include <stdio.h>
int main(){


    FILE *archivo;
    archivo = fopen("output.txt", "w");
    
    if(archivo == NULL){
        printf("Error al abrir el archivo");
    }

    fprintf(archivo, "Hola, Tomas Tsangoulas!\n");
    fclose(archivo);


    return 0;
}