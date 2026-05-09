#include <stdio.h> 
#include <string.h> //para utilizar strcmp y _stricmp || to use strcmp and _stricmp
#include <ctype.h>  //para utilizar tolower || this library letting me use tolower

//Hola mundo estructurado con funciones. (Comentario formato senior). || hello world structure by funcion. (comment formatted like a senior xd)
void holamundo(void){
    printf("Hola Mundo\n");
    return;
}
    
void linea(void){
    printf("---------------------------------------------\n\n\n");
    return;
}

//argc = Etiqueta de advertencia en la mochila que es el main para saber cuantos papelitos hay. || label warning into the backpack that is the main to know how much little papers there is.
//argv = Los compartiento de la mochila para los papelitos. || The compartment of the backpack for little papers.
//Los papelitos son texto crudo. || little papers are only texts
int main ()
{



    printf("Hola mundo\n");
    




    linea();
    





/*Hola mundo con comentacion con formato junior || Hello world with comment formatted like a junior*/
    printf("Hola Mundo\n");
    






    linea();
    






//Hola mundo llamado a llamar como funcion, que se encuentra antes de el main. || Hello world called to call as a function, that is located before the main.
    holamundo();
    holamundo(), holamundo();
    





    linea();
    






	
//Hola mundo con for para mostrar 5 hola mundos. || hello world with for to show 5 hello world.
    int i;
    for(i = 1; i<=5; i++){
        printf("%i Hola mundo\n",i);
    }
    






    linea();
    









//Te prgunta si lo quieres o no. || Ask you if you want to
    char respuesta;

    printf("¿Estas listo para lo que sigue?\n");
    scanf("%9s", respuesta); // Sin el '&' porque es un arreglo (array) de caracteres
        
//strcmp sirve para las comparar cadenas de textos letra por letra || it's used to compare chains of text letter to letter
//_stricmp es para convertir mayusculas en min ignorando si las pones en mayusculas || it's to convert capital letters to min ignoring if you put in capital letters.
//No recomendable este metodo por que no es compatible con muchas versiones || Don't recomended this methot because itn's competible with a lot versions.
//El 0 lo regresa el codigo compara letra por letra su igualdad || The 0 returned the code, comparing letter to letter if they are equal
//<0 (Va antes alfabeticamente.) || (before alphabetically)
//>0 (Va despues alfabeticamente) || (after alphabetically)

    if(strcmp(respuesta, "si") == 0){
        printf("Hola Mundo\n");
    } else if(_stricmp(respuesta, "no") == 0){
        printf("Good luck\n");
    } else {
        printf("Dime si o no verguero\n");
    }
        
	







    linea();
    













//Aqui implemento el codigo mismo de arriba pero con diferente metodo (tolower) || here I use the same code as before but with diferent methot (tolower)
//tolower convierte las mayusculas en minusculas || tolower transform then capital letters in min
//Este metodo es mas compatible con otros intrerpretes || this methot are better to use in diferents code interpreters
    char respuesta2[10]; // Aumenté el tamaño para evitar desbordamientos || I increased the size to avoid overflows
    
    printf("¿pero si vas a querer o no?\n");
    scanf("%9s", respuesta2); // Sin el '&' porque es array
    
    int w;
	
    for (w = 0; respuesta2[w]; w++){
        respuesta2[w] = tolower(respuesta2[w]);
    }
     
    if(strcmp(respuesta2, "si") == 0){
        printf("Hola mundo\n");
    } else if(strcmp(respuesta2, "no") == 0){
        printf("Good luck\n");
    } else {
        printf("Si o no verga\n");
    }
     










    linea();
    
//Lo mismo que un for pero en while || the same as for but with while
    int a = 1;
    while(a < 6) {
        printf("%i Hola Mundo\n", a);
        a++;
    }
    












    linea();
    












//Mismo pero do-while YK || same but do-while YK
    int h = 1;
    do {
        printf("%i Hola mundo\n", h);
        h++;
    } while(h < 6);











    linea();
    









//Utilizando switch case || Using switch case
    int opc = 0;
    
    printf("Ya les dijiste a tus papas que eres gay? |1 = Si | 2 = No|\n");
    scanf("%i", &opc); // Aquí sí lleva '&' porque es una variable de tipo int (entero) || here it does have '&' becase it's a variable of type int (integer)

    switch(opc) {
        case 1:
            printf("Ja joto\n");
            break;
        case 2:
            printf("Ja mas joto xd\n");
            break;
        default:
            printf("No sea puto conteste\n");
            break;
    }










    linea();
    










    return 0;
}