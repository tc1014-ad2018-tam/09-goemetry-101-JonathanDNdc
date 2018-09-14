/*
 * Este programa tiene como proposito sacar el perimetro, la superficie y el volumen de diferentes figuras y cuerpos.
 *
 * Autor: Jonathan Nuñez de Caceres
 * Fecha 13 de Septiembre del 2018
 * Correo: A01411277@itesm.mx
 */

#include <stdio.h>
#include <math.h>


// Funcion del menu principal.
char MainMenu(){
    char choice;

    printf("\nOpciones:\n");
    printf("A. Perimetro.\n");
    printf("B. Superficie.\n");
    printf("C. Volumen.\n");
    printf("X. Salir.\n");
    printf("Introduce tu eleccion:");

    scanf(" %c", &choice);
    // Regresa la letra que se eliga a la funcion main.
    return choice;
}

// Funcion del menu del perimetro.
char PerimeterMenu(){
    char choice;

    printf("\nOpciones:\n");
    printf("A. Cuadrado.\n");
    printf("B. Rectangulo.\n");
    printf("C. Triangulo equilatero.\n");
    printf("X. Salir.\n");
    printf("Introduce tu eleccion:");

    scanf(" %c", &choice);
    return choice;
}

// Funcion del menu de la superficie.
char SurfaceMenu() {
    char choice;

    printf("\nOpciones:\n");
    printf("A. Cuadrado.\n");
    printf("B. Rectangulo.\n");
    printf("C. Triangulo equilatero.\n");
    printf("X. Salir.\n");
    printf("Introduce tu eleccion:");

    scanf(" %c", &choice);
    return choice;
}

// Funcion del menu del volumen.
char VolumeMenu(){
    char choice;

    printf("\nOpciones:\n");
    printf("A. Cubo.\n");
    printf("B. Prisma rectangular.\n");
    printf("C. Piramide triangular.\n");
    printf("X. Salir.\n");
    printf("Introduce tu eleccion:");

    scanf(" %c", &choice);
    return choice;
}

// Funcion del perimetro del cuadrado.
void SquarePerimeter(){
    float side;

    printf("\nCUADRADO\n");
    printf("Ingresa la longitud de uno de sus lados:");
    scanf("%f", &side);
    printf("El perimetro del cuadrado es: %.2f\n", 4*side);
}

// Funcion del perimetro del rectangulo.
void RectanglePerimeter(){
    float length;
    float width;

    printf("\nRECTANGULO\n");
    printf("Ingresa la longitud del largo y del ancho (separados por coma):");
    scanf("%f, %f", &length, &width);
    printf("El perimetro del rectangulo es: %.2f\n", 2*length + 2*width);
}

// Funcion del perimetro del triangulo.
void TrianglePerimeter(){
    float side;

    printf("\nTRIANGULO\n");
    printf("Ingresa la longitud de uno de sus lados:");
    scanf("%f", &side);
    printf("El perimetro del triangulo es: %.2f\n", 3*side);
}

// Funcion de la superficie del cuadrado.
void SquareSurface(){
    float side;

    printf("\nCUADRADO\n");
    printf("Ingresa la longitud de uno de sus lados:");
    scanf("%f", &side);
    printf("La superfice del cuadrado es: %.2f\n", side*side);
}

// Funcion de la superficie del rectangulo.
void RectangleSurface(){
    float length;
    float width;

    printf("\nRECTANGULO\n");
    printf("Ingresa la longitud del largo y del ancho (separados por coma):");
    scanf("%f, %f", &length, &width);
    printf("La superficie del rectangulo es: %.2f\n", length * width);
}

// Funcion de la superficie del triangulo.
void TriangleSurface(){
    float side;

    printf("\nTRIANGULO\n");
    printf("Ingresa la longitud de uno de sus lados:");
    scanf("%f", &side);
    printf("La superficie del triangulo es: %.2f\n", sqrt(3) / 4 * side * side);
}

// Funcion del volumen del cubo.
void CubeVolume(){
    float side;

    printf("\nCUBO\n");
    printf("Ingresa la longitud de uno de sus lados:");
    scanf("%f", &side);
    printf("El volumen del cubo es: %.2f\n", pow(side, 3));
}

// Funcion del volumen del prisma rectangular.
void RectPrismVolume(){
    float length;
    float width;
    float height;

    printf("\nRECTANGULO\n");
    printf("Ingresa la longitud del largo, del ancho y la altura (separados por coma):");
    scanf("%f, %f, %f", &length, &width, &height);
    printf("El volumen del prisma rectangular es: %.2f\n", length * width * height);
}

// Funcion del volumen de la piramide cuadrangular.
void QuadPyramidVolume(){
    float side;
    float height;

    printf("\nPIRAMIDE CUADRANGULAR\n");
    printf("Ingresa la longitud de un lado de la base y la altura (separados por coma):");
    scanf("%f, %f", &side, &height);
    printf("El volumen de la piramide cuadrangular es: %.2f\n", side * side * height / 3);
}

// Funcion del perimetro donde esta el loop.
void Perimeter(){
    printf("\nPERIMETRO\n");

    char choice;

    do{
        choice = PerimeterMenu();

        switch(choice) {
            case 'A':
                SquarePerimeter();
                choice = 'X';
                break;
            case 'B':
                RectanglePerimeter();
                choice = 'X';
                break;
            case 'C':
                TrianglePerimeter();
                choice = 'X';
                break;
            case 'X':
                break;
            default:
                printf("Introduce una opcion valida.\n");
                break;
        }
    } while(choice != 'X');

}

// Funcion de la superficie donde esta el loop.
void Surface(){
    printf("\nSUPERFICIE\n");

    char choice;

    do{
        choice = SurfaceMenu();

        switch(choice) {
            case 'A':
                SquareSurface();
                choice = 'X';
                break;
            case 'B':
                RectangleSurface();
                choice = 'X';
                break;
            case 'C':
                TriangleSurface();
                choice = 'X';
                break;
            case 'X':
                break;
            default:
                printf("Introduce una opcion valida.\n");
                break;
        }
    } while(choice != 'X');

}

// Funcion del volumen donde esta el loop.
void Volume(){
    printf("\nVOLUMEN\n");

    char choice;

    do{
        choice = VolumeMenu();

        switch(choice) {
            case 'A':
                CubeVolume();
                choice = 'X';
                break;
            case 'B':
                RectPrismVolume();
                choice = 'X';
                break;
            case 'C':
                QuadPyramidVolume();
                choice = 'X';
                break;
            case 'X':
                break;
            default:
                printf("Introduce una opcion valida.\n");
                break;
        }
    } while(choice != 'X');

}

int main() {
    char choice;

    // loop del menu
    do{
        choice = MainMenu();

        switch(choice){
            case 'A':
                Perimeter();
                break;
            case 'B':
                Surface();
                break;
            case 'C':
                Volume();
                break;
            case 'X':
                break;
            default:
                printf("Introduce una opcion valida.\n");
                break;
        }
    } while(choice != 'X');

    return 0;
}