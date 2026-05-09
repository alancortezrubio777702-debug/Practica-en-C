/*

				ENTEROS || INTEGRERS

char            // 1 byte  | -128 a 127
unsigned char   // 1 byte  | 0 a 255
short           // 2 bytes | -32,768 a 32,767
unsigned short  // 2 bytes | 0 a 65,535
int             // 4 bytes | -2,147,483,648 a 2,147,483,647
unsigned int    // 4 bytes | 0 a 4,294,967,295
long            // 4/8 bytes
unsigned long   // 4/8 bytes
long long       // 8 bytes | -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807
unsigned long long // 8 bytes | 0 a 18,446,744,073,709,551,615



					DECIMALES || DECIMALS

float       // 4 bytes | 6-7 decimales      | %f
double      // 8 bytes | 15-16 decimales    | %lf
long double // 16 bytes| 18-19 decimales    | %Lf




				TEXTO || TEXT

char        // un solo caracter            | %c
char[]      // arreglo de caracteres       | %s




SIN VALOR || WITHOUT VALUE

void        // sin tipo, usado en funciones que no retornan nada





		Booleano || Boolean

bool        // 0 o 1






		 Enteros de tamaño exacto 

int8_t      // exactamente 8 bits
int16_t     // exactamente 16 bits
int32_t     // exactamente 32 bits
int64_t     // exactamente 64 bits
uint8_t     // igual pero sin negativos
uint16_t
uint32_t
uint64_t



*/







#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h> // Libreria para usar el tipo de dato booleano || Library to use the boolean data type.
#include <time.h> //Toma el tiempo de la cpu || takes the time of the cpu
#define ESPACIO 6  //Tipo de dato Constate || constant data type



void linea(void){
	printf("\n-----------------------------------------------\n\n\n");
	return;
}


int main(){










//																	TDD	Caracter   (CHAR, c% (individual) %s (Arreglo-con-espacio-determinado)) || DT %c(indivual), %s (Array-with-determined-space)



//1.Crear y llamar un caracter || Create and call a character

	char i = 'A';
//Automaticamente al final del arreglo se pone /0 invisible gracias a las comillas para encontrar el final a la hora de llamarlo || automaically at the end of the array is put /0 invisible thanks to the quotes to find the end when calling it.
	char b[ESPACIO] = "hello";
	
//Dato unico. || Unique data.
	printf("%c \n\n", i);
//Dato en arreglo. || Data in array.
	printf("%s \n", b);






	linea();






//2.	Utilizando metodo de areglo por letra /0 al final para que termine la lectura en la ejecucion. || Using method of array by letter /0 at the end to end the reading in the execution.
	
	char z[6] = {'H', 'E', 'L', 'L','O', '\0'};
	
	printf("%s \n", z);
	
	
	
	
	
	
	linea();
	
	
	
	
	
	
	
	
//3.	Letra aleatoria || Random letter

//Crea una semilla random con la hora de la PC en segundos creando una semilla dif siempre || Create a random seed with the time of the pc in seconds creating a different seed always.
  srand(time(NULL));
  
//letra aleatroria del abecedario minuscula || Random letter of the lowercase alphabet
	char letra = 'a' + (rand() % 26);
//letra aleatroria del abecedario mayuscula || Random letter of the uppercase alphabet
	char lmayus = 'A' + (rand() % 26);
	
	printf("%c\n", letra);
	printf("%c\n", lmayus);	
	
	
	
	
	linea();
	
	
	
	
	
	
	
//4.	Palabra aleatoria || Ramdom word

//Arreglo para la palabra || Array for the word
  char aleatoria[6];
//Limite para el loop || Limit for the loop
  int largo = 5;
  
  int p;
  
  
//Loop para randomizar letra una a una del arreglo || Loop to randomze letter one by one of the array
  for(p = 0; p < largo; p++){
  	aleatoria[p] = 'a' + (rand() % 26);
	}
	
//Tengo que poner \0 manualmente por que utilizo loops || I have to put \0 manually because I use loops
	aleatoria[largo] = '\0';
	
	printf("%s \n", aleatoria);
	
	
	
	
	
	
	linea();
	
	
	

//5. Te pregunta para responder con un arreglo de char || It ask you to answer with an array of char.

	char q[12];
	char w[12] = {'S','A','L','U','D','O','S'};
	char e[12] = {'F','U','*','*',' ','Y','O','U'};
	char r[25] = "Si o no vergas";
	
	printf("Te gusta se saludado?  \n");
	scanf("%s", q);
	
	if(_stricmp(q, "si") == 0){
			printf("%s\n", w);
				}else if(_stricmp(q, "no") == 0){
					printf("%s\n", e);
				}else{
					printf("%s \n", r);
				}
	
	
	
	
	
	
	
	linea();
	
	
	
//6. Generara una parabra completa con un for || Generate a complete word with a for.
	
	char y[35] = "Hola esto se escribe uno a uno";
	
	int m;
	for(m = 0; m < 32; m++){
		printf("%c", y[m]);
	}

	
	
	
	
	
	
	linea();
	
//7. Pequeña charla con switch case || small talk with switch case
	
	int opc = 0;
	
	printf("Que quieres?\n1. Conocer mi futuro.\n2. Pedir una hamburguesa\n");
	scanf("%d", &opc);
	char u[35] = "Te va a ir mal xd\n";
	char a[35] = "Pizza pedida\n";
	
	switch(opc) {
		
		case 1:	
			printf("%s", u);
			break;
		case 2:
			printf("%s", a);
			break;
	default:
		printf("Elige una o te ira mal\n");
		break;
}

	
	
	linea();
	
	
	
	
//8. Pequeña charla con if || small talk with if	
	
	char j[50];
	char alea[10];
	int limit = 10;
	int l;
	
	printf("Te pareceria bien crear una palabra aleatoria?\n");
	scanf("%s", j);
	
	if(_stricmp(j, "si") == 0){

		for(l = 0; l < 9; l++){
			alea[l] = 'a' + (rand() % 26);
		}
		alea[limit] = '\0';
		printf("%s", alea);
	}else if(_stricmp(j, "no") == 0){
			printf ("Entonces que quieres un cafe o que vergas?\n");
			scanf("%s", j);
			if(_stricmp(j, "pito") == 0){
				printf("Golosa\n");
			}else if(_stricmp(j, "Perreo") == 0){
				printf("DALE\n");
			}
		}else{
			printf("A chinga a su madre pues\n");
		}
	
	
	
	
	
	
	linea();
	
	
	
	
	
	//Encryptacion de palabra sin librerias. || Encryption of word without libraries.





//9. Ceasar Cipher (Rotacion de letras) || Ceasar Cipher (Rotation of letters)

  char mensaje[] = "hola\n";
  
//Se podria decir que dandole el valor de 3 a clave mueve 3 posiciones la letra en el abecedario,, no c, no me se el abecedarioxd || you could say that givin the value of 3 to key moves 3 positions yhe letter in the alphabet, no c, I don't know the alphabet xd.
  int clave = 3;
  
  int hi;
  for(hi = 0; mensaje[hi]; hi++){
  	mensaje[hi] = mensaje[hi] + clave;
  }
  
  printf("%s", mensaje);
  
  
  
  
  linea();
  
  
  
//10. XOR Cipher (Encriptado de parlabra con el metodo XOR) || XOR Cipher (Encryption  of word with the XOR method)
  
	char mens[] = "hola\n";
	char clave1 = 'K';
	
	int f;
//Aqui el simbolo ^ representa la aplicacion de la logica XOR asi que cada letra es comparada con la estructura binaria de K mediante el metodo XOR, dando letras aleatorias. || here the symbol ^ represents the application of the XOR login so each letter is compared with the binary structure of k through the XOR method giving random letters.
	for(f = 0; mens[f]; f++){
		mens[f] = mens[f] ^ clave1;		
	}
	printf("%s\n", mens);
	
//Reverticion de lo que accabamos de hacer || Reversion of what we just did.
	for(f =0 ; mens[f]; f++ ){
		mens[f] = mens[f] ^ clave1;
	}
	
	printf("%s\n", mens);						
	
	
	
	linea();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//												TDD ENTERO (INT, %d (enteros) || %i (Entero-Puede registrar o enteder los valores en Octal y Hexadecimal), %s (Arreglos-Conjunto), %c (Arreglos-Separados) los datos de arreglos no son numeros seran caracteres || DT %d (integers) // %i (Integer-Can register or understand the values in Octal and Hexadecimal), %s (Arrays-Set), %c (Arrays-Separated) the data of arrays are not numbers they will be characters.

//1.	Darle valor y mandar a llamar un numero || Give value and call a number

  int t = 12;
	
  printf("\n%i\n", t);
  
  
  
  linea();
  
  
  
  
//2.	Crear y llamar lista de numeros || Create and call list of numbers

  char numeros[12] = {'1','2','3','4','5','6','7','8','9','\0'};
  
  int o;
  for(o = 0; o < 9; o++){ 	
  	printf("%c\n", numeros[o]);
	}
	
	
	
	
	
	linea();
	
	
	
	
	
	
//3. Mostrar lista de numero segudos. || Show list of numbers followed

	char num[10] = {'1','2','3','4','5','6','7','8','9','\0'};
	
	printf("%s \n", num);






	linea();	
	
	
	
	
	
//4.	Generacion de numero aleatorios || Generation of ramdom numbers

  
//Numero ramdom del 0 al 99 || Random numbers from 0 to 99.
  int numRam = rand() % 100;
  
  printf("%i \n", numRam);
  
  
  linea();
  
  








//5. Hasta que numero quieres que se escriba || Until what number do you want it to be written.

unsigned int h = 0; // Unsigned para que no acepte numeros negativos || Unsigned so it doesn't accept negative numbers.

printf("Hasta que numero quieres que se escriba? |1 al 100|\n");
	scanf("%u", &h);

  if(h > 0 && h <= 100){
	unsigned int k;
	for(k = 1; k <= h; k++){
		printf("%i\n", k);
	}
  }






	
linea();




//6. Generar numero aleatorio con limite dado por el usuario || Generate random number with limit given by the user.



  int limite;
  printf("Dame un limite superior para generar un numero aleatorio mayor a 0\n");
  scanf("%i", &limite);

  if(limite > 0){
	int numR = rand() % limite;
	printf("%i\n", numR);
  }






linea();
	
	
	
	
	
	
//7. Generar numero aleatorio entre dos numeros dados por el usuario (no funciona con numeros grandes:( ) || Generate random number between two numbers given by the user (not working with large numbers :( ).

  long lim1, lim2; //Long para que acepte numeros mas grandes || Long to accept bigger numbers.

  printf("Dame el limite inferior para generar un numero aleatorio mayor a 0\n");
  scanf("%li", &lim1);

  printf("Dame el limite superior para generar un numero aleatorio mayor a 0\n");
  scanf("%li", &lim2);

  if(lim1 > 0 && lim2 > lim1 && lim2 > 0){
	int numR = lim1 + rand() % (lim2 - lim1 +1);
	printf("%i\n", numR);
  }
	
	
linea();







//8. Te cuenta del uno al 3 con un delay de 5 segundos entre cada numero || It counts from one to 10 with a delay of 5 seconds between each number.
	
  int n;
  for (n = 1; n <= 3; n++){
	printf("%i\n", n);
	//Delay de 5 segundos || Delay of 5 seconds.
	clock_t startTime = clock();
	while (clock() < startTime + 5 * CLOCKS_PER_SEC){}

  }

  



linea();


	
  



//9. Te pregunta un numero y te dice si es par o impar || It ask you a nunmber and tells you if it's even or odd.

  long long numP; //Long long para que acepte numeros mas mas grnades || Long long to accept bigger bigger numbers.
  printf("Dame un numero y te dire si es pai o impar\n");
  scanf("%I64d", &numP);
  
  if(numP % 2 == 0){
	printf("El numero es par\n");
  }else{
	printf("El numero es impar\n");
  }




linea();



//10. Te pregunta un numero y te dice si es primo o no || It ask you a number and tells you if it's prime or not.

 int numPr;
 printf("Dmae un numero y te dire si es primo o no\n");;
 scanf("%i", &numPr);

 if(numPr <= 1){
	printf("El numero no es primo\n");;
 }else{

	int Esprimo = 1;
	int j;

	for(j = 2; j<= numPr/2; j++){
		if(numPr % j == 0){
			Esprimo = 0;
			break;
		}
	}

	if(Esprimo){
		printf("El numero es primo\n");
	}else{
		printf("El numero no es primo\n");
	}
}

linea();

	
	
	
	






// 													TDD Flotante (FLOAT,, %f (flotantes)) || DT FLOAT (FLOAT, %f (Floats))
	
	
	
//1. Crear y llamar un numero flotante || Create and call a float number

  float pi;

  printf("Dame el valor de pi\n");
  scanf("%f", &pi);

  printf("%.4f\n", pi);
	



linea();




//2. Llama a una lista de numero flotantes || Call a list of float numbers

  float numerosF[5] = {3.14, 2.23, 35.534, 234.4234, 0.234};

  int g;
  for(g = 0; g < 5; g++){
	printf("%f\n", numerosF[g]);
  }



linea();




//3. Generar numero flotante aleatorio entre 0 y 1 || Generate random float number between 0 and 1

  float numF = (float)rand() / RAND_MAX;

  printf("%.4f", numF);



linea();


//4. Convierte un decimal en fraccion || convert a decimal to fraction

  float decimal;
  printf("Dame un numero decimal y te lo convertire a fraccion, con limite de 4 decimales\n");
  scanf("%f", &decimal);

  int denominador = 10000; // limite de 4 decimales || limit of 4 decimals

  int numerador = (int)(decimal * denominador);
  printf("La fraccion es: %d/%d \n", numerador, denominador);




linea();






//5. Te pregunta numeros flotantes y te dice cual es mayor || It ask you float numbers and tells you which one is greater

  float num1, num2;
  printf("Dame dos numero flotantes y te dire cual es mayor\n");
  scanf("%f %f", &num1, &num2);

  if(num1 > num2){
	printf("El numero %.4f es mayor que %.4f \n", num1, num2);
  }else if(num2 > num1){
	printf("El numero %.4f es mayor que %.4f \n", num2, num1);
  }





linea();





//6. Te pregunta un numero flotante y te dice si es positivo, negativo o cero || It ask you a float number and tells you if it's positive, negative or zero.

  double number; // Double unicamente tiene mayor precision y capacidad de decimales, pero se manejan de la misma manera || Double only has greater precision and capacity of decimal, but they are handled in the same way.
  printf("Dame un numero flotante y te dire si es positivo, negativo o cero\n");
  scanf("%lf", &number);

  if(number == 0){
	printf("El numero es cero\n");
  }else if(number > 0){
	printf("El numero es positivo\n");
  }else{
	printf("El numero es negativo\n");
  }
	




linea();




//7. Cuestionario de mate con numeros flotantes || Math quiz with float numbers 

  char siono[10];
  char respuesta[10];
  printf("Estas listo para el cuestionario de flotantes? \n");
  scanf("%s", siono);

  if(_stricmp(siono, "si") == 0){
	printf("Cual es el valor de pi, con 4 decimales? a) 3.1415 b) 3.1416 c) 3.1417\n");
	scanf("%s", respuesta);

	switch(respuesta[0]){
		case 'a':
			printf("Correcto\n");
			break;
		case 'b':
			printf("Incorrecto\n");
			break;
		case 'c':
			printf("Incorrecto\n");
			break;
		default:
			printf("Elige una no seah malo rubiu\n");
			break;
	}

  printf("Cual es el valor de Euler (e), con 4 decimales? a) 2.7182 b) 2.7183 c) 2.7184\n");
  scanf("%s", respuesta);

	switch(respuesta[0]){
		case 'a':
			printf("Correcto\n");
			break;
		case 'b':
			printf("Incorrecto\n");
			break;
		case 'c':
			printf("Incorrecto\n");
			break;
		default:
			printf("Elige una no sea malo rubiu\n");
			break;
	}



  printf("Cual es el valor de la gravedad (g) de la Tierra? a) 98.0 b) 9.8 c) 980.0\n");
  scanf("%s", respuesta);

	switch(respuesta[0]){
		case 'a':
			printf("Incorrecto\n");
			break;
		case 'b':
			printf("Correcto\n");
			break;
		case 'c':
			printf("Incorrecto\n");
			break;
		default:
			printf("Elige una no sea malo rubiu\n");
			break;
	}

  }else{
	printf("Entonces que quieres un cafe o que vergas?\n");
  }
	
	


linea();






// TDD Booleano (BOOLEAN, _Bool, %d (0 o 1)) || DT Boolean (BOOLEAN _Bool, %d (0 or 1))



//1. Crear y llamar un valor booleano || Create and call a boolean value.

  _Bool esVerdadero = 1; // verdadero || true.
  _Bool esFalso = 0; //falso || false.

  printf("El valor de es verdadero es: %d \n", esVerdadero);
  printf("El valor de es falso es: %d \n", esFalso);


linea();






//2. Te pregunta una afirmacion y tu respondes con valor booleno || It ask you a statement and you answer with boolean valor.

 char afirmacion[50];
 printf("El cielo es azul? (responde si o no)\n");
 scanf("%s", afirmacion);
	if(_stricmp(afirmacion, "si") == 0){
		printf("%d\n", esVerdadero);
	}else if(_stricmp(afirmacion, "no") == 0){
		printf("%d\n", esFalso);
	}else{
		printf("Responde si o no, verguero\n");
	}



linea();





//3. Generar un valor booleano aleatorio || Generate a random boolean value.

  _Bool valorAleatorio = rand() % 2; // Genera 0 o 1 || Generate 0 or 1.

  printf("El valor booleano aleatorio es: %d\n", valorAleatorio);



linea();







//4. Validar acceso con AND (&&). || Validate access with AND (&&).


  char usuario67[20];
  char contrasena[20];
  printf("Dame tu usuario (admin)\n");
  scanf("%s", usuario67);
  printf("Dame tu contrasena (1234)\n");
  scanf("%s", contrasena);

  if(_stricmp(usuario67, "admin") == 0 && _stricmp(contrasena, "1234") == 0){
	printf("Acceso concedido\n");
  }else{
	printf("Acceso denegado\n");
  }



linea();







//5. Validar input con OR (||) || Validate input with OR (||)


  char color[20];
  printf("Dame tu color favorito\n");
  scanf("%s", color);
  
  if(_stricmp (color, "azul") == 0 || _stricmp(color, "rojo") == 0 || _stricmp(color, "verde") == 0){
	printf("Esta bien si conozco ese color\n");
  }else{
	printf("No, no conozco ese color\n");
  }



linea();



 
//6. Toogle (activar desactivar) con NOT (!) || Toogle (activate desactivate) with NOT (!)


  int ActNoact = 0;

  printf("Quieres activar el modo oscuro? |1| si \n |2| no \n |0| salir \n");
  scanf("%d", &ActNoact);

  if(ActNoact == 1){
  	ActNoact = !ActNoact; // Activa el modo oscuro || Activate dark mode.
  	printf("%d Activado\n", ActNoact);
  }else if(ActNoact == 2){
	printf("%d Desactivado\n", ActNoact); 
  }else if(ActNoact == 0){
	printf("saliendo...\n");
  }





linea();






//7. Validar si un numero esta entre dos numeros con AND (&&) || Validate if number is betweem two numbers with AND (&&)

  int numEntre;
  int limInf, limSup;

  printf("Dame el limite inferior el numero a validar\n");
  scanf("%d", &limInf);

  printf("Dame el limite superior\n");
  scanf("%d", &limSup);

  printf("Ahora dame el numero a validar\n");
  scanf("%d", &numEntre);

  if(numEntre > limInf && numEntre < limSup){
	printf("El numero %d esta en el limite que me diste\n", numEntre);
  }else{
	printf("Su numero no esta entre los limites que me diste");
  }





linea();


  




//8. Validar si un numero es divisible por otro con el operador modulo (%) || Validate if a number is divisible by another with the modulo operator (%)


  int numDiv, divisor;

  printf("Dame un numero y te dire si es divisible por otro numero\n");
  scanf("%d", &numDiv);

  printf("Ahora dame el divisible\n");
  scanf("%d", &divisor);

  if(numDiv % divisor == 0){
	printf("Los numero que me diste si son divisibles\n");
  }else{
	printf("Los numeros que me diste no son divisibles\n");
  }


linea();






//9. Validar si una palabra es igual a otra con strcmp || Validate if a text string is equal to another with strcmp

  char cadena1[20];
  char cadena2[20];

  printf("Dame la primera palabra\n");
  scanf("%s", cadena1);
  printf("Dame la segunda palabra\n");
  scanf("%s", cadena2);

  if(_stricmp(cadena1, cadena2) == 0){
	printf("Las cadenas son iguales\n");
  }else{
	printf("Las cadenas no son iguales\n");
  }



linea();









//10. Validar un usuario hecho por stuctures con booleanos y pequeña charla pra el usuario || Validate a user made by structure with small talk for the user.

 struct usuario{   //Esto lo puedes ingresar fuera del main || this you can take out of the main.
	char nombre[20];
	char contrasena[20];
	_Bool esAdmin;
 };

 struct usuario usuario[4] = {
	{"Alan", "123456", 1},
	{"Carlos", "654321", 0},
	{"Maria", "abcdef0", 0},
	{"Luisa", "fsaefaff", 0}
 };


struct usuario input;
  
  printf("Bienvenido al sistema.\n    Antes de emtrar tienes que ser validado :) \nPor favor ingresa tu usuario\n");
  scanf("%s", input.nombre);
  printf("Ahora ingresa tu contraseña\n");
  scanf("%s", input.contrasena);


  int idx;
  for(idx = 0; idx < 4; idx++){
	if(_stricmp(input.nombre, usuario[idx].nombre) == 0 && _stricmp(input.contrasena, usuario[idx].contrasena) == 0){
		printf("Bienvenido %s\n", usuario[idx].nombre);
		if(usuario[idx].esAdmin){
			printf("Eres admin\n");
		}

		int opci = 0;

		do{

		printf("Que quiers hacer hoy?\n 1. ver el clima\n 2. ver noticias. \n 3. Jugar. \n 4. Salir\n");
		scanf("%d", &opci);

		switch(opci){  
			case 1:
				printf("Srroy for party rock them\n");
				break;
			case 2:
				printf("Srroy for party rock them\n");
				break;
			case 3:
				printf("Srroy for party rock them\n");
				break;
			case 4:
				printf("Saliendo.... \n");
				break;
		}

	}while(opci != 4);


		}else{
	printf("Usuario invalido");
		
	}
  
  }
















	return 0;

}
