/*

        ARITMETICOS || ARITHMETIC

a + b       suma || sum
a - b       resta || minus
a * b       multiplicacion || multiplicacion
a / b       divicion || division
a % b       modulo (residuo de divicion) || module (remainder of division) 
a++         incrementa 1 despues de usarlo || increases 1 after to used
++a         incrementa 1 antes de usarlo || increases 1 before to used
a--         decrementa 1 despues de usarlo || decreases 1 after to sed
--a         decrementa 1 antes de usarlo || decreases 1 before to used


        ASIGNACION  || assignment

a = b       asigna un valor de una variable a otra || Assigns a value from one variable to another
a+=b        Asigna la suma de a y b para a || Assigns jthe sum of a and b to a
a-=b        Asigna la resta de a y b para a || Assigns the subtraction of a and b to a
a*=b        Asigna la multiplicacion de a y b para a || Assigns the multiplication of a and b to a
a/=b        Asigna la divicion de a y b para a || Assigns the division of a and b to a
a%=b        Asigna el modulo de a y b para a || Assigns the module of a and b to a

        COMPARACION  ||  COMPARISON

a == b    igual  || equal
a != b    diferente  || different
a > b     mayor que  || greater than
a < b     menor que  || Less than
a >= b    mayor o igual  || greater or equal 
a <= b    menor o igual  || Less or equal


        LOGICOS ||  LOGICAL

a && b    AND - ambos deben ser verdad || both must be true
a || b    OR  - al menos uno verdad  || at least one true
!a        NOT - invierte el valor  || inverts the value


        BIT A BIT || 

a & b     Comparativo AND utilizando binario || AND comparison using binary 
a | b     Comparativo OR utilizando binario || OR comparison using binary
a ^ b     Cmparativo XOR utilizando binario  || XOR comparison using binary
~a        NOT bit a bit, invierte todos los bits  || NOT bit by bit, inverts all bits
a << n    desplaza bits a la izquierda n posiciones (multiplica por 2^n)  || shifts bits to the left n positions (multiplies by 2^n)
a >> n    desplaza bits a la derecha n posiciones (divide por 2^n) || shifts bits to the right n positions (divides by 2^n) 


        TERNARIO  ||  TERNARY

condicion ? si_verdad : si_falso || condition ? if_true : if_false

int max = (a > b) ? a : b;   asigna a max el valor de a si a es mayor que b, sino asigna el valor de b || asssigns to max the value of a if a is greater than b, otherwise assigns the value of b. 
printf("%s", esAdmin ? "Admin" : "Usuario");      Ya sea que esAdmin sea verdadero o falso, se imprimira "Admin" o "Usuario" respectivamente || whether esAdimin is true or false,, it will print "Admin" or "User" respectively


        SIZEOF  


sizeof(int)      4  Devuelve el tamaño en bytes de un tipo de dato o variables el int es 4 bytes  || Returns the size in bites of a data type or variable
sizeof(char)     1  Devuelve el tamaño en bytes de un tipo de dato o variables el char es 1 byte  || Returns the size in bites of a data type or variable
sizeof(double)   8  Devuelve el tamaño en bytes de un tipo de dato o variables el double es 8 bytes  || Returns the size in bites of a data type or variable
sizeof(arr)      tamaño total del arreglo en bytes  || Returns the total size in bytes of an array


        PUNTEROS  || POINTERS

&a     dirección de memoria de a  || memory address of a
*p     valor al que apunta el puntero p  || Value pointed to by pointer p
p = &a  asigna a p la dirrecion de memoria de a  || assigns to p the memory address of a
*p = 10  asigna el valor 10 a la dirrecion a la que apunta p  || assigns the value 10 to the address pointed to by p







*/




#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define M_PI 3.14159265358979323846





void linea(void){
        printf("\n-----------------------------------------------\n");
        return;
}




int main(){


/*






linea();











//      SUMA  || SUM


//1. Suma de 2 o mas variables || sum of two o more varible

  int cantidad = 0;

  printf ("Cuantos numeros quieres sumar?\n");
  scanf("%d", &cantidad);

  int suma = 0;
  
  int q;

  for(q = 0; q < cantidad; q++){
        int num  = 0;
        printf("Dame el numero: \n");
        scanf("%d", &num);
        suma += num;                    // += Suma el numero de la variable suma y num asignandolo a suma || += adds the number of the variable suma and num assigning it to suma
  }

  printf("La suma total es: %d\n", suma);




linea();




//2. suman 2 o mas numeros pero con una condicion || sum two o more numbers but with one condicion.



  int cantidad1;

  printf("Cuantos numeros quieres sumar?\n");
  scanf("%d", &cantidad1);

  int suma1 = 0;
  int numero;
  int condicion = 0;
  int condicionInfe = 1;
  int condicionSupe = 9;
  int p;
  int e;

  printf("De cuantos digitos tienen que ser los numeros a sumar? \n");
  scanf("%d", &condicion);

  if(condicion > 0){

        for(e = 1; e < condicion; e++){
                condicionInfe *= 10;
                condicionSupe = condicionSupe * 10 + 9;
        }

        for(p = 0; p < cantidad1; p++){

                do{

                printf("Dame el numero: \n");
                scanf("%d", &numero);
                if(numero >= condicionInfe && numero <= condicionSupe){
                        suma1 += numero;

                }else{
                        printf("Ingresa un numero con %d digitos\n", condicion);
                }


                }while(numero < condicionInfe || numero > condicionSupe);

                suma1 += numero;
                                
                
        }
  printf("La suma total es %d\n", suma1);
  }





  linea();





//3. suma de valors flotantes y enteros || sum of float and int values


  int cantidad2;
  int suma2 = 0;
  float suma3 = 0.0;
  float sumf;

  printf("Cuantos numeros quieres sumar?\n");
  scanf("%d", &cantidad2);

  int r;

  for(r = 0; r < cantidad2; r++){
        int tipo;
        printf("El numero es entero o flotante? (1. entero, 2.flotante): \n");
        scanf("%d", &tipo);
        if(tipo == 1){
                int sume;
                printf("Dame el numero entero: \n");
                scanf("%d",&sume);
                suma2 += sume;
        }else if(tipo == 2){
                do{
                
                printf("Dame el numero flotante: \n");
                scanf("%f", &sumf);
                if(sumf == 0.0){
                suma3 += sumf;
        }else{
                printf("Ingresa un numero flotante valido.\n");
        }}while(sumf == 0.0);
        }
  }

  printf("La suma total de los numeros es: %2.f\n", suma2 + suma3);



linea();




//              RESTA || MINUS



//1. Resta de 2 o mas variables || subtraction of two o more variables


  int cantidad3;

  printf("Cuantos numeros quieres restar?\n");
  scanf("%d", &cantidad3);

  if(cantidad3 > 0){
        int resta = 0;
        int t;
        for(t = 0; t < cantidad3; t++){
                int num;
                printf("Dame el numero: \n");
                scanf("%d", &num);
                if(num == 0){
                        printf("Ingresa numero valido\n");
                }else{
                        if(t == 0){
                                resta = num;
                        }else{
                                resta -= num;
                        }
                }
        }

        printf("La resta total es: %d \n", resta);

        }else{
                printf("Ingresa una cantidad valida \n");
        }




linea();



//2. Se le da 5 numeros randoms al ususario y el elige si sumar o restalos || the user is given 5 random numbers and he chooses if sum or subtract them


  srand(time(NULL));
  int numeros[5];
  int o;
  for(o = 0; o < 5; o++){
        numeros[o] = rand() % 10000000;  //Genera numeros ramdoms entre 0 y 9999999 || Generates random numbers between 0 and 9999999
  }
  
  int u;
  printf("Los numeros son: \n");
    for(u = 0; u < 5; u++){
        printf("%d, ", numeros[u]);
    }

    int operacion;
    printf("\nQuieres sumar o restar los numeros? (1. Sumar, 2. Restar): \n");
    scanf("%d", &operacion);
    if(operacion == 1){
        int suma4 = 0;
        int v;
        for(v = 0; v < 5; v++){
                suma4 += numeros[v];
        }
        printf("La suma total es: %d\n", suma4);
    }else if(operacion == 2){
        int resta1 = 0;
        int w;
        for(w = 0; w < 5; w++){
                if(w == 0){
                        resta1 = numeros[w];
                }else{
                        resta1 -= numeros[w];
                }
        }
        printf("La resta total es %d\n", resta1);
    }
    







linea();


//3. Resta de valores elevados al cuadrado || Subtraction of values raised to the square


  int cantidad4;

  printf("Cuantos numeros quieres restar al cuadrado?\n");
  scanf("%d", &cantidad4);

    if(cantidad4 > 0){
        int resta3 = 0;
        int x;
        for(x = 0; x < cantidad4; x++){
                int numero6;
                printf("Dame el numero: \n");
                scanf("%d", &numero6);
                if(numero6 == 0){
                        printf ("ingresa numero valido\n");
                }else{
                        if(x == 0){
                                resta3 = pow(numero6, 2);  //Eleva al cuadrado el numero6 || Raises to the square the number6
                        }else{
                                resta3 -= pow(numero6, 2);  //Resta al cuadrado el numero6 || Subtracts to the square the number6
                        }
                }

        }

            printf("La resta total es: %d\n", resta3);


    }else{
        printf("Ingresa una cantidad valida\n");
    }




linea();




//             MULTIPLICACION || MULTIPLICATION



//1. Multiplicacion de 2 o mas variables || Multiplication of two o more variables

  int cantidad5;

  printf("Cuantos numeros quieres multiplicar?\n");
  scanf("%d", &cantidad5);

  if(cantidad5 > 0){
        int multiplicacion = 1;
        int y;
        for(y = 0; y < cantidad5; y++){
                int numero7;
                printf("Dame el numero: \n");
                scanf("%d", &numero7);
                if(numero7 == 0){
                        printf("Ingresa numero valido\n");
                }else{
                        multiplicacion *= numero7;
                }
        }
        printf("La multiplicacion total es: %d\n", multiplicacion);
  }




linea();





//2. Multiplicacion de fracciones  || Multiplication of frations

  int cantidad33;

  printf("Cuantas fracciones quieres multiplicar?\n");
  scanf("%d", &cantidad33);

  int v;
  float resultado = 1.0;

  for(v = 0; v < cantidad33; v++){
        int numerador;
        int denominador;
        printf("dame el numerador: \n");
        scanf("%d", &numerador);
        if(numerador == 0){
                printf("Ingresa un numerador valido");        
        }else{
        printf("Dame el denominador: \n");
        scanf("%d", &denominador);
        if(denominador == 0){
                printf("Ingresa un denominador valido\n");
                }else{
                        resultado =  (float)numerador / denominador; // convierte el numerador a flotante para obtener un resultado con decimales || convert the numerator to float to get a result with decimals
                        if(v == 0){
                                resultado *= 1; // asigna el resultado a la veariable resultado  || assigns the results to the variable
                        }else{
                                resultado *= resultado;

                        }

                }

                

        }

        
  }

  printf("El resultado total es: %2.2f\n", resultado);




linea();




//3. Generador de tablas de multiplicar con limite dado por el usuario || Multiplication table generator with user given limit


  int numero8;
  int limite;

  printf("dame el numero del cual quieres la tabla de multiplicar: \n");
  scanf("%d", &numero8);
  printf("Dame el limite de la tabla de multiplicar: \n");
  scanf("%d", &limite);

  int z;
  for(z = 1; z <= limite; z++){
        printf(" %d x %d = %d \n", numero8, z, numero8 * z);
  }



  




//                              DIVICION  || DIVISION


//1. Generador de numeros divisibles por el numero dado por el usuario || Generator of numbers divisible by the user given number


  int numero9;
  int cantidad22;;

  printf("Dame el numero por el cual quieres los numeros divisibles: \n");
  scanf("%d", &numero9);
  printf("Cuantos numeros divisibles quieres generar? \n");
  scanf("%d", &cantidad22);

  int x;
  for(x = 1; x <= cantidad22; x++){
        printf("%d, \n", numero9 * x);
  }


linea();



//2. diviciones con funciones trigonometricas (Tangente de un angulo)|| Divisions with trigonometric functions (Tangent of an angle)


  double angulo;



  printf("Dame el angulo: \n");
  scanf("%lf", &angulo);

  double radianes = angulo * M_PI / 180.0;  //Convierte el angulo a radianes || Converts the angle to radians


  double tangente = tan(radianes);  //calcula la tangente del angulo en radianes || Calculates the tangent of the angle in radians
  double coseno = cos(radianes);  //Calcula el coseno del angulo en radianes || Calculates the cosine of the angle in radians
  double seno = sin(radianes);  //Calcula el seno del angulo en radianes || Calculates the sine of the angle in radians

  printf("Seno: %4.2lf\n", seno);
  printf("Coseno: %4.2lf\n", coseno);
  printf("Tangente: %4.2lf\n", tangente);





linea();


//3. Divicion de numeros con decimales || Division of numbers with decimals

 

  float numero10;
  float numero11;

  printf("Dame el primer numero: \n");
  scanf("%f", &numero10);

  printf("Dmae el segundo numero: \n");
  scanf("%f", &numero11);
  
  if(numero11 == 0){
        printf("No se puede dividir entre cero\n");
  }else{
        float resultado1 = numero10 / numero11;
        printf("El resultado de la divicion es %2.2f \n", resultado1);
  }






linea();



//                              MODULO || MODULE


//1. Veririficar si es par o impar y si es primo o no || Verify if it's even or odd and if it's prime or not

  int numero12;
  _Bool esPar;
  _Bool esPrimo;

  printf("Dame un numero: \n");
  scanf("%d", &numero12);

  if(numero12 % 2 == 0){
        esPar = 1;
  }else{
        esPar = 0;
  }

  if(numero12 <= 1){
        esPrimo = 0;
  }else{
        esPrimo = 1;
        int s;
        for(s = 2; s <= sqrt(numero12); s++){  //sqrt(numero12) devuelve la raiz cuadrada de numero12 || sqrt(numero12) returns the square root of numero12
                if(numero12 % s == 0){   // Si numero12 es divisible por s, entonces no es primo || If numero12 is divisible by s, then it's not prime
                        esPrimo = 0;
                        break;
                }
        }
  }

  printf("El numero es %s \n", esPar ? "par" : "impar"); 
  printf("El numero es %s \n", esPrimo ? "primo" : "no primo");



  linea();




//2. listado de conversores disponibles para el usuario || List of converters available for the user

int conversor;
int horas, minutos, segundos;
int opc1;
int minutos1;
int opc2;

 printf("Conversores disponibles: \n (1). Horas --> Minutos --> segundos \n (2). Kilometros --> Metros --> Centimetros \n (3). Gramos --> Onzas --> Libras \n (4). Años --> Meses --> Dias \n ");
 scanf("%d", &conversor);

 switch (conversor){

         case 1:

                do{
                printf("Quieres convertir\n 1.horas \n 2.minutos \n 3.segundos? \n");
                scanf("%d", &opc1);
                if(opc1 == 1){
                        printf("Dame las horas: \n");
                        scanf("%d", &horas);
                        minutos = horas * 60;
                        segundos = horas * 3600;
                        printf("%d horas son %d minutos y %d segundos\n", horas, minutos, segundos);
                }else if(opc1 == 2){

                        printf("Dame los minutos: \n");
                        scanf("%d", &minutos1);
                        printf("Quieres convertirlos \n 1.horas \n 2.segundos? \n");
                        scanf("%d", &opc2);
                        if(opc2 == 1){
                                horas = minutos1 / 60;
                                printf("%d minutos son %d horas\n", minutos1, horas);
                        }else if(opc2 == 2){
                                segundos = minutos1 * 60;
                                printf("%d minutos son %d segundos\n", minutos1, segundos);
                        }
                }else if(opc1 == 3){
                        printf("Dame los segundos: \n");
                        scanf("%d", &segundos);
                        minutos = (segundos % 3600) / 60;
                        horas = segundos / 3600;
                        printf(" %d segundos son %d minutos y %d horas\n", segundos, minutos, horas);
                }else{
                        printf("Opcion no vaida\n");
                }}while(opc1 < 1 || opc1 > 3);
       
                break;

        case 2:

        do{
                printf("Quieres convertir\n 1.Kilometros \n 2.Metros \n 3.centimetros? \n");
                scanf("%d", &opc1);
                if(opc1 == 1){
                        float kilometros;
                        printf("Dame los kilometros: \n");
                        scanf("%f", &kilometros);
                        if(kilometros <= 0){
                                printf("Ingresa un numero valido\n");
                        }else{
                                float metros = kilometros * 1000;
                                float centimetros = kilometros * 100000;
                                printf("%2.f kilometros son %2.f metros y %2.f centimetros \n", kilometros, metros, centimetros);
                        }
                }else if(opc1 == 2){
                        float metros;
                        printf("Dame los metros: \n");
                        scanf("%f", &metros);
                        if(metros <= 0){
                                printf("Ingresa un numero valido\n");
                        }else{
                                printf("Quieres convertilos \n 1. Kilometros \n 2. Centimetros \n");
                                scanf("%d", &opc2);
                                if(opc2 == 1){
                                        float kilometros = metros / 1000;
                                        printf("%2.f metros son %2.f kilometros\n", metros, kilometros);
                                }else if(opc2 == 2){
                                        float centimetros = metros * 100;
                                        printf("%2.f metros son %2.f centimetros\n", metros, centimetros);
                                }
                        }
                }else if(opc1 == 3){
                        float centimetros;
                        printf("Dame los centimetros: \n");
                        scanf("%f", &centimetros);
                        if(centimetros <= 0){
                                printf("Ingresa un numero valido\n");
                        }else{
                                float kilometros = centimetros / 100000;
                                float metros = centimetros / 100;
                                printf("%2.f centimetros son %2.f metros y %2.f kilometros\n", centimetros, metros, kilometros);
                        }
                }
          }while(opc1 < 1 || opc1 > 3);
          
          break;

        case 3:

        do{
                printf("Quieres cconvertir \n 1.Gramos \n 2.Onzas \n 3.Libras \n");
                scanf("%d", &opc1);
                if(opc1 == 1){
                        float gramos;
                        printf("En que los quieres convertir? \n 1. Onzas \n 2. Libras \n");
                        scanf("%d", &opc2);
                        if(opc2 == 1){
                                printf("Dame los gramos: \n");
                                scanf("%f", &gramos);
                                if(gramos <= 0){
                                        printf("Ingresa un valor valido\n");
                                }else{
                                        float onzas = gramos / 28.3495;
                                        printf("%2.f gramos son %2.f onzas\n", gramos, onzas);
                                }
                        }else if(opc2 == 2){
                                printf("Dame los gramos: \n");
                                scanf("%f", &gramos);
                                if(gramos <= 0){
                                        printf("Ingresa un valor valido\n");
                                }else{
                                        float libras = gramos / 453.592;
                                        printf("%2.f gramos son %2.f libras\n", gramos, libras);
                                }
                        }else{
                                printf("Opcion no valida\n");
                        }
                }else if(opc1 == 2){
                        float onzas;
                        printf("En que los quieres convertir? \n 1. Gramos \n 2. Libras \n");
                        scanf("%d", &opc2);
                        if(opc2 == 1){
                                printf("Dame las onzas: \n");
                                scanf("%f", &onzas);
                                if(onzas <= 0){
                                        printf("Ingresa un valor valido\n");
                                }else{
                                        float gramos = onzas * 28.3495;
                                        printf("%2.f onzas son %2.f gramos\n", onzas, gramos);
                                }
                        }else if(opc2 == 2){
                                printf("Dame las onzas: \n");
                                scanf("%f", &onzas);
                                if(onzas <= 0){
                                        printf("Ingresa un valor valido\n");
                                }else{
                                        float libras = onzas / 16;
                                        printf("%2.f onzas son %2.f libras\n", onzas, libras);
                                }
                        }else{
                                printf("Opcion no valida\n");
                        }
                }else if(opc1 == 3){
                        float libras;
                        printf("En que los quieres convertir? \n 1. Gramos \n 2. Onzas \n");
                        scanf("%d", &opc2);
                        if(opc2 == 1){
                                printf("Dame las libras: \n");
                                scanf("%f", &libras);
                                if(libras <= 0){
                                        printf("Ingresa un valor valido\n");
                                }else{
                                        float gramos = libras * 453.592;
                                        printf("%2.f libras son %2.f gramos\n", libras, gramos);
                                }
                        }else if(opc2 == 2){
                                printf("Dame las libras: \n");
                                scanf("%f", &libras);
                                if(libras <= 0){
                                        printf("Ingresa un valor valido\n");
                                }else{
                                        float onzas = libras * 16;
                                        printf("%2.f libras son %2.f onzas\n", libras, onzas);
                                }
                        }else{
                                printf("Opcion no valida\n");
                        }
                }else{
                        printf("Opcion no valida\n");
                }
          }while(opc1 < 1 || opc1 > 3);
          
          break;

        case 4:
          
        do{
                printf("Quieres convertir \n 1.Años \n 2.Meses \n 3.Dias \n");
                scanf("%d", &opc1);
                if(opc1 == 1){
                        int anos;
                        printf("dame los años: \n");
                        scanf("%d", &anos);
                        if(anos <= 0){
                                printf("Ingresa un valor valido\n");
                        }else{
                                int meses = anos * 12;
                                int dias = anos * 365;
                                printf("%d anos son %d meses y %d dias\n", anos, meses, dias);
                        }
                }else if(opc1 == 2){
                        int meses;
                        printf("Quieres convertirlos \n 1. Años \n 2. Dias \n");
                        scanf("%d", &opc2);
                        if(opc2 == 1){
                                printf("Dame los meses: \n");
                                scanf("%d", &meses);
                                if(meses <= 0){
                                        printf("Ingresa un numero valido\n");
                                }else{
                                        int anos = meses / 12;
                                        printf("%d meses son %d años\n", meses, anos);
                                }
                        }else if(opc2 == 2){
                                printf("Dame los meses: \n");
                                scanf("%d", &meses);
                                if(meses <= 0){
                                        printf("Ingresa un numero valido\n");
                                }else{
                                        int dias = meses * 30;
                                        printf("%d meses son %d dias\n", meses, dias);
                                }
                        }else{
                                printf("Opcion no valida\n");
                        }
                }else if(opc1 == 3){
                        int dias;
                        int anos;
                        int meses;
                        printf("Dame los dias: \n");
                        scanf("%d", &dias);
                        if(dias <= 0){
                                printf("Ingresa un numero valido\n");
                        }else{
                                anos = dias / 365;
                                meses = (dias % 365) / 30;
                                printf("%d dias son %d años y %d meses\n", dias, anos, meses);
                        }
                }
 }while(opc1 < 1 || opc1 > 3);

        break;


         default:
         printf("Opcion no valida\n");

                break;





 }



linea();






//3. verificar si un numero es divisible entre otro || verify if a number is divisible by another

  int numero13;
  int numero14;

  printf("Dame el primer numero: \n");
  scanf("%d", &numero13);

  printf("Dame el segundo numero: \n");
  scanf("%d", &numero14);

  if(numero14 == 0 && numero13 == 0){
        printf("No se puede dividir entre cero\n");
  }else{
        if(numero13 % numero14 == 0){
                printf("%d es divisible entre %d\n", numero13, numero14);
        }else{
                printf("%d no es divisible entre %d\n", numero13, numero14);
        }
  }



linea();





//              INCREMENTO Y DECREMENTO || INCREMENT AND DECREMENT



//1. Incremento dado por el usuario a numero dado por el usuario || Increment given by the user to a number given by the user

  int numero15;
  int incremento;
  int veces;

  printf("Numero a incrementar: \n");
  scanf("%d", &numero15);

  printf("Cuanto quieres incrementar el numero? \n");
  scanf("%d", &incremento);

  printf("Cuantas veces quieres incrementar el numero? \n");
  scanf("%d", &veces);


  int x;
  for(x = 0; x < veces; x++){

          numero15 += incremento; 

  }

  printf("El numero final es: %d \n", numero15);


linea();




//2.Evaluar condiciones en un ciclo while || Evaluate conditions in a while loop

 int contador = 0;

 printf("Iniciando conteo...\n");
 while(++contador <= 10){
        printf("Vuelta numero: %d\n", contador);
        clock_t startTime = clock();
        while(clock() < startTime + 5 * CLOCKS_PER_SEC);
 }



 linea();







//3. Decremento a numero dado por el usuario || Decrement given by the user to number given by th user

  int numero16;
  int veces;


  printf("Numero a decrementar: \n");
  scanf("%d", &numero16);

  printf("Cuantas veces quieres decrementar el numero? \n");
  scanf("%d", &veces);

  while(veces-- > 0){
        --numero16;
  }

  printf("El numero final es: %d \n", numero16);

  
linea();












//              COMPARACION || COMPARISON


//1. Verificar si un numero es mayor o menor que otro || Verify if a number is greater or less than another



  int numero17;
  int numero18;
  int opcion33;

  printf("Dame el primer numero: \n");
  scanf("%d", &numero17);
  printf("Dame el segundo numero: \n");
  scanf("%d", &numero18);

  if(numero17 == numero18){
        printf("%d Igual que: %d\n", numero17, numero18);
  }else if(numero17 != numero18){
        printf("%d Este numero es diferente de: %d\n", numero17, numero18);
        printf("Quieres saber si es meyor o menor? (1. Si, 2. No)\n");
        scanf("%d", &opcion33);
        if(opcion33 == 1){
                if(numero17 > numero18){
                        printf("%d es mayor que %d\n", numero17, numero18);
                }else if(numero17 < numero18){
                        printf("%d es menor que %d\n", numero17, numero18);
                }else{
                        printf("No tu ere' un alien mi hermano\n");
                }
        
  }
  }


    



    linea();





//              LOGICOS || LOGICAL


//1.Te habla de los operadores logicos y te da ejemplos de cada uno || It talks about logical operators and given you examples of each one

  _Bool a = 1; // Verdadero || True
  _Bool b = 0; //Falso || False

  printf("a && b: %d\n", a && b); // AND - ambos deben ser verdad || both must be true
  printf("a || b: %d\n", a || b); // OR - al menos uno debe ser verdad || at least one must be true
  printf("!a: %d\n", !a); // NOT - invierte el valor de a || inverts the value of a
  printf("!b: %d\n", !b); // NOT - invierte el valor de b || inverts the value of b



linea();






//                                      BIT A BIT || BIT BY BIT


//1. Transformador de Un numero a binario || Transformer of a number to binary

  int numero19;
  int f;

  printf("Dame un numero (Solo muestra los numeros de 2^5): \n");
  scanf("%d", &numero19);

  printf("El numero en binario es: ");
  for(f = 5; f >= 0; f--){
        int bit = (numero19 >> f) & 1; // Desplaza el numero a la derecha f posiciones y obtiene el bit mas a la derecha || Shifts the number to the right f positions and gets the rightmost bit
        printf("%d", bit);
  }
        printf("\n");



linea();



//2. Comparativos utilizando operadores binarios || Comparatives using binary operators

  int numero20;
  int numero21;
  int g;

  printf("Dame el primer numero: \n");
  scanf("%d", &numero20);
  printf("Dame el segundo numero: \n");
  scanf("%d", &numero21);

  printf("Comparativo AND (a & b): %d\n", numero20 & numero21); // AND bit a bit || AND bit by bit
  printf("Comparativo OR (a | b): %d\n", numero20 | numero21); // OR bit a bit || OR bit by bit
  printf("Comparativo XOR (a ^ b): %d\n", numero20 ^ numero21); // XOR bit a bit || XOR bit by bit
  printf("NOT de a (~a): %d\n", ~numero20); // NOT bit a bit, invierte todos los bits de a || NOT bit by bit, inverts all bits of a
  printf("NOT de b (~b): %d\n", ~numero21); // NOT bit a bit, invierte todos los bits de b || NOT bit by bit, inverts all bits of b

  for(g = 5; g >= 0; g--){ // <--- Aqui esta la correccion: g--
        int bitAnd = (numero20 & numero21) >> g & 1; 
        int bitOr = (numero20 | numero21) >> g & 1; 
        int bitXor = (numero20 ^ numero21) >> g & 1; 
        int notA = (~numero20) >> g & 1; 
        int notB = (~numero21) >> g & 1; 
        printf("Bit %d: AND=%d, OR=%d, XOR=%d, NOT A=%d, NOT B=%d\n", g, bitAnd, bitOr, bitXor, notA, notB);
  }



linea();



//                              TERNARIO || TERANRY



//1. Verificar si un numero es positivo negativo o cero utilizando el operador ternario || Verify if a number is positive, negative or zero using the ternary operator

  int numero22;
  int resultado2;

  printf("Dame un numero: \n");
  scanf("%d", &numero22);

  resultado2 = (numero22 > 0) ? 1 : (numero22 < 0) ? -1 : 0; // Si numero22 es mayor que 0, resultado2 es 1; si numero22 es menor que 0, resultado2 es -1; si numero22 es igual a 0, resultado2 es 0 || If numero22 is greater than 0, resultado2 is 1; if numero22 is less than 0, resultado2 is -1; if numero22 is equal to 0, resultado2 is 0 

  if(resultado2 == 1){
        printf("El numero es positivo\n");
  }else if(resultado2 == -1){
        printf("El numero es negativo\n");
  }else if(resultado2 == 0){
        printf("El numero es cero\n");
  }else{
        printf("No tu' ta' loco mi hermano.");
  }



linea();



//                                      SIZEOF || SIZEOF





//1. Verificar el tamaño de diferentes tipos de datos y variables utilizando el operador sizeof || Verify the size of different data types and variables using the sizeof operator

  printf("Tamaño de int: %d bytes\n", sizeof(int)); //%d es el especificador de formato para size_t, que es el tipo de dato devuelto por sizeof || %d is the format specifier for size_t, which is the type of data returned by sizeof
  printf("Tamaño de float: %d bytes\n", sizeof(float));
  printf("Tamaño de double: %d bytes\n", sizeof(double));
  printf("Tamaño de char: %d bytes\n", sizeof(char));
  printf("Tamaño de _Bool: %d bytes\n", sizeof(_Bool));
  printf("Tamaño de int*: %d bytes\n", sizeof(int*)); // Tamaño de un puntero a int || Size of a pointer to int
  printf("Tamaño de float*: %d bytes\n", sizeof(float*)); 
  printf("Tamaño de double*: %d bytes\n", sizeof(double*));
  printf("Tamaño de char*: %d bytes\n", sizeof(char*));
  printf("Tamaño de _Bool*: %d bytes\n", sizeof(_Bool*));








  linea();
  





//                              PUNTEROS || POINTERS





//1.Muestreo de direccion de memoria de numero dado por el usuario || Sampling of memory address given by the user

  int numero23;
  int* punteroNumero23;

  printf("Dame un numero: \n");
  scanf("%d", &numero23);
  punteroNumero23 = &numero23;

  printf("La direcciion de memoria de tu numero es %p\n", (void*)punteroNumero23);



  linea();



*/



//2. Lista de numeros y se le da la opcion al usuario de escoger un numero y conocer su direccion de memoria || List of numbers and the user is given the opcion to choose a number and know its memory address

  int numeros[5];
  int* punteroNumeros[5];
  int i;
  int opcion44;


  do{

  printf("Dame 5 numeros: \n");;
  for(i = 0; i < 5; i++){
        scanf("%d", &numeros[i]);
        punteroNumeros[i] = numeros + i;
  }

  
  printf("Quieres conocer la direccion de memoria de alguno de los numeros? (1. Si, 2. No)\n");
  scanf("%d", &opcion44);
  if(opcion44 == 1){
        int numeroEscogido;
        printf("Dame el numero del cual quieres conocer la direccion de memoria: \n");
        scanf("%d", &numeroEscogido);
        int j;
        _Bool encontrado = 0;
        for(j = 0; j < 5; j++){
                if(numeros[j] == numeroEscogido){
                        printf("La direccion de memoria de %d es %p\n", numeroEscogido, (void*)punteroNumeros[j]);
                        encontrado = 1;
                        break;
                }
        }
        if(!encontrado){
                printf("El numero no se encuentra en la lista.\n");
        }
  }
  printf("Quieres ingresar otros numeros? (1. Si, 2. No)\n");
  scanf("%d", &opcion44);
}while(opcion44 == 1);


return 0;

}




