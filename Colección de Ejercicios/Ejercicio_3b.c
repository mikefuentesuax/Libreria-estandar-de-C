#include <stdio.h>

int main() {
    const char *nombre_archivo = "archivo.txt";

    FILE *archivo = fopen(nombre_archivo, "w");

    if (archivo != NULL) {
        fprintf(archivo, "Hola, esto es un ejemplo de fprintf().\n");

        fclose(archivo);

        archivo = fopen(nombre_archivo, "r");

        if (archivo != NULL) {
            char buffer[100];
            fscanf(archivo, "%99[^\n]", buffer);

            printf("El contenido del archivo es: %s\n", buffer);
           
            fclose(archivo);
        } else {
            printf("No se pudo abrir el archivo\n");
        }
    } else {
        printf("No se pudo abrir el archivo\n");

    }

    return 0;

}