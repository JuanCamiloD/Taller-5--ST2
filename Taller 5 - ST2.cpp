#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct tiempot{
	int hora;
	int minuto;
	int segundos;
	
}tiempototal[3];

struct Estudiante{
	char nombre[30];
	int edad, grado;
	float notas[4];
	float promedio;
};

char const l=100;
struct persona{
	char nombre[30];
	int ban;
}personas[l];


struct persona_sin{
	char nombre[30];
}personasin[l];



struct persona_con{
	char nombre[30];
}personacon[l];








struct Competidor{
	char nombre[30], club[30],sexo[15];
	int edad;
	
} players;




struct trabajadores{
    char nombre[30];
	int salario;	
};




 
 struct estudiante{
	char nombre[30],sexo[15];
	int edad;
	int notas[3];
	int promedio;	
} estu[3];


struct promedio{
	float notas[3];
	estudiante datos;
}prom;

struct Estudiante2{
	char nombre1[30];
	int edad1, grado1;
	float notas[4];
	float promedio;
};

Estudiante2 estu2[3];


persona_sin* pPsin = personasin;
promedio* pProm=&prom;
trabajadores trabajador[l], *pTrabajador=trabajador;
float suma=0;
persona* pPsonas = personas;
Competidor *pPlayers=&players;
int a,i,j=0,n=0,contador1=0,contador2=0;

int cantEstu = 0;
int* pCantEstu = &cantEstu;
persona_con* pPcon = personacon;

void menu();
void par_impar();
void num_primo();
void array_pares();
void menor_numero();
void arreglo_acendente ();
void buscar_numero ();
void vocales_en_nombre();
void vocales_nom();
void matriz_suma();
void traspuesta();
void estudiantes_crum();
void crearEstudiante();
void mostrarEstudiantes();
void mejorEstudiante();
void tiempo();
void pedir_datos();
void salarios_t();
void mostrar_datos();
void pedir_datos_persona();
void alumnos_n_limit();
void ingresar();
void categoria();
void menu2();
void crearEstudiante();
void mostrarEstudiantes();
void mejorEstudiante();


int main(){
	
	menu();
	
	return 0;
}

void menu(){
	
	int opcion;
	do{
		
	
		printf("MENU \n");
	    printf("1. Verificar si el numero es par o impar. \n");
		printf("2. Verificar si un numero es primo o no. \n");
		printf("3. Rellena un arreglo de 10 numeros, despues el programa saca los numeros pares de este arreglo . \n");
		printf("4. Rellena un arreglo de n muneros y muestra el elemento menor   . \n");
		printf("5. Rellenar un vector con N elementos, posteiormente ordenarlos elemento en orden acendente. \n");
		printf("6. Rellenar una vector con n elmentos, posteriormente puede buscar un numero en ese vector . \n");
		printf("7. Ingrese su nombre para ver cuantas vocales ahi en el. . \n");
		printf("8. Ingrese una palabra para saber cuantas vocales aparece asi . \n");
		printf("9. Suma de dos matrices dinamicas . \n");
		printf("10. Matriz traspuesta . \n");
		printf("11. Guardar alumnos y mostrarlos, tambien mostrar su promedio  . \n");
		printf("12. Sumar tiempo de 3 etapas de ciclismo . \n");
		printf("13. Ingresar usuarios, determina su club y su edad. \n");
		printf("14.  Ingresar datos de alumnos y saber su promedio. \n");
		printf("15.  ingresar trabajadores, ver el del salario menor y mayor. \n");
		printf("16. Ingresar alumnos y ver su promedio  . \n");
		printf("17.  . \n");
		printf("18. Ingresar personas y saber si tienen discapacidad o no  . \n");
		printf("0. exit \n");
		printf("Ingrese un opcion: \n");
		scanf("%d", &opcion);
		switch(opcion){
			case 1: par_impar() ;
				break;
			case 2: num_primo();
				break;	
			case 3: array_pares();
			 	break;	
			case 4: menor_numero();
				break;
			case 5: arreglo_acendente ();
				break;
			case 6: buscar_numero ();
				break;
			case 7: vocales_en_nombre();
				break;
			case 8: vocales_nom();
				break;
			case 9: matriz_suma();
				break;
			case 10: traspuesta();
				break;
			case 11: estudiantes_crum();
				break;
			case 12:  tiempo();
				break;
			case 13: ingresar();
				break;
			case 14:  menu2();
				break;
			case 15: salarios_t();
				break;
			case 16: alumnos_n_limit();
				break;
			case 17: ;
				break;
			case 18: pedir_datos_persona() ;
				break;
			case 0: exit(0);
				break;
			default: printf("Opcion invalida\n");
		}
		system("pause");
		system("cls");
	}while(opcion != 0);
}

void par_impar(){
		
	system("cls");
	int n;
	int* pn = &n;
	printf("ingrese un numero para determinar si es par o impar : \n");
	scanf("%d",&n);
	if(n % 2 == 0 ){
		printf("El numero %d es par.\n",*pn);
		printf("La posicion es memoria es: %p \n",pn);
	}else{
		printf("El numero %d es impar.\n",*pn);
		printf("La posicion es memoria es: %p \n",pn);
	}
	system("pause");
}


void num_primo(){
	
		int a=0,i,n,*b=&n;
         printf("Ingrese un numero: \n");
         scanf("%d",&n);
         for(i=1;i<(*b+1);i++){
         if(*b%i==0){
             a++;
            }
         }
         if(a!=2){
              printf("No es Primo\n");
              printf("La direccion en memoria es: %p\n",b);
            }else{
                printf("Si es Primo\n");
                printf("La direccion en memoria es: %p\n",b);
         }
 
 system("pause");
}

void array_pares(){
	
	int vec[10],i;
	int* Pvec;
	
	Pvec = &vec[0];
	
	printf("ingresa 10 numeros:\n");
	for( i=0 ; i<10 ; i++ ){
	 printf("ingresa el numero #%d:\n",i+1);
	 scanf("%d",&vec[i]);
    }
    
    printf("numeros pares del arreglo son:\n");
    for( i=0 ; i<10 ; i++ ){
    	if(vec[i]%2==0){
		printf("La posicion de memoria es  #%d el numero es par : %d  \n",&*Pvec+i,*Pvec+i);
	    }
	}
	
}

void menor_numero(){
	
	char const l=100;
	int vec[l],i,a,menor=999;
	int* Pvec;
    int* m;
	Pvec = &vec[0];
    m = &menor;
	printf("cual es la cantidad de numeros que ingresaras:\n");
	scanf("%d",&a);
	for( i=0 ; i<a ; i++ ){
	 printf("ingresa el numero #%d:\n",i+1);
	 scanf("%d",&vec[i]);
    }
    
    
    for( i=0 ; i<a ; i++ ){
	 if(*Pvec+i<menor){
	 	menor= vec[i];
	 }
    }
    
   printf("El numero menor del arreglo es : %d",*m);
    
     system("pause");
     
}
void arreglo_acendente (){
	int num[100],n,aux,i,j;
	int* numero;
	int* tam;
	
	numero = &num[0];
	tam = &n;
	printf("Escriba el tamaño del vector: \n");
	scanf("%d",&n);
		for(int i=0;i<*tam;i++){
		printf("digite el elemente #%d del vector: \n",i+1);
	    scanf("%d",&num[i]);
	}
	for (i=0; i<*tam-1; i++){
        for (j=i+1; j<*tam; j++) {
           if(num[i]>num[j]){
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
           }
         }
       for(int i=0;i<*tam;i++){
		printf("los elementos del vector son: %d \n",*numero+i);}

}

void buscar_numero (){
	
	int num[100],n,busqueda,ban=0;
	int* dera;
	int* busca;
	int* tam;
	
	dera = &ban;
	busca = &busqueda;
	tam = &n;
	printf("Escriba el tamaño del vector: \n");
	scanf("%d",&n);
		for(int i=0;i<*tam;i++){
		printf("digite el elemente #%d del vector: \n",i+1);
	    scanf("%d",&num[i]);
	}
	
	printf("¿Que numero desea buscar en el arreglo?\n");
	scanf("%d",&busqueda);
	for(int i=0;i<*tam;i++){
		if(num[i]==*busca){
			printf("Si esta.\n");
	        *dera=1;
		
		}
	}
		if(*dera==0){
		
		printf("No esta.\n");}
		
	system("pause");
}


void vocales_en_nombre(){
	
const char l=20;
char c1 [l];
int i,A=0,e=0,I=0,o=0,u=0,suma;
const char* longitud;
int* mas;


longitud = &l;
mas = &suma;
 printf("Digite su nombre para determinar cuantas vocales tiene: ");
 fflush(stdin); //borra el bufer de entrada
 fgets (c1, *longitud, stdin);
 	
	
	for( i=0;i<*longitud;i++){
		if (c1[i]==97){
			A++;
		}
	}
		for( i=0;i<*longitud;i++){
		if (c1[i]==101){
			e++;
		}
	}
		for( i=0;i<*longitud;i++){
		if (c1[i]==105){
			I++;
		}
	}
	
		for( i=0;i<*longitud;i++){
			if (c1[i]==111){
			o++;
		}
	}
		for( i=0;i<*longitud;i++){
			if (c1[i]==117){
			u++;
		}
	}
     suma = A+e+I+o+u;
	
		printf("la cantidad de vocales que ahi es:%d\n ",*mas);
	
	system("pause");
	
}

void vocales_nom(){
	
const char l=20;
char c1 [l];
int i,A=0,e=0,I=0,o=0,u=0,suma;
const char* longitud;
int* q;
int* w;
int* r;
int* t;
int* y;

q = &A;
w = &e;
r = &I;
t = &o;
y = &u;

longitud = &l;

 printf("Digite su nombre para determinar cuantas vocales tiene: ");
 fflush(stdin); //borra el bufer de entrada
 fgets (c1, *longitud, stdin);
 	
	
	for( i=0;i<*longitud;i++){
		if (c1[i]==97){
			A++;
		}
	}
		for( i=0;i<*longitud;i++){
		if (c1[i]==101){
			e++;
		}
	}
		for( i=0;i<*longitud;i++){
		if (c1[i]==105){
			I++;
		}
	}
	
		for( i=0;i<*longitud;i++){
			if (c1[i]==111){
			o++;
		}
	}
		for( i=0;i<*longitud;i++){
			if (c1[i]==117){
			u++;
		}
	}
    if(*q>=1){
	
	printf("la cantidad de veces que esta la vocal a es:%d \n",*q);
	}else{
	}
	
	if(*w>=1){
		
		printf("la cantidad de veces que esta la vocal e es:%d\n ",*w);
		}else{
		}
	
	if(*r>=1){
		printf("la cantidad de veces que esta la vocal i es:%d\n ",*r);
		}else{
		}
	
	if(*t>=1){
		printf("la cantidad de veces que esta la vocal o es:%d\n ",*t);
		}else{
		}
	
	if(*y>=1){
		printf("la cantidad de veces que esta la vocal u es:%d\n ",*y);
		}else{
		} 
	
	system("pause");
	
}

void matriz_suma(){
    
   
    int matriz1[20][20],matriz2[20][20],matriz3[20][20],ram;
    int* pa = &a;
    int* pn =&n;
	//rellenando matrices
	printf("De que tamaño seran las matrices que desea sumar NXM\n");
	printf("Digite el numero de filas\n");
	scanf("%d",&n);
	printf("Digite el numero de columnas:\n");
	scanf("%d",&a);
	
	 srand(time(NULL));
	 
	for(i = 0 ; i < *pn ; i++ ){
		for(j = 0 ; j  < *pa ; j++){
		
			ram=rand()%101;
			matriz1[i][j]=ram;
			printf("[%d]",matriz1[i][j]);
     
		}
		printf("\n");
		
	}
	
	printf("\n");
	
	for(i = 0 ; i < *pn ; i++ ){
		for(j = 0 ; j  < *pa ; j++){
		
			ram=rand()%101;
			matriz2[i][j]=ram;
			printf("[%d]",matriz2[i][j]);
     
		}
		printf("\n");
		
	}
	printf("\n");
	
	for(i = 0 ; i < *pn ; i++ ){
		for(j = 0 ; j  < *pa ; j++){
			
			matriz3[i][j]=matriz1[i][j]+matriz2[i][j];
			printf("[%d]",matriz3[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
}

void traspuesta(){
	int m1[20][20],f,c;
    printf("ingrese el numero de filas :");
	scanf("%d",&f);
	printf("ingrese el numero de columnas :");
	scanf("%d",&c);
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			printf("digite un numero:");
			scanf("%d",&m1[i][j]);
		}	
	}
		for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){ 
			printf("[%d]",m1[j][i]);
			
		}
		printf(" \n");
	}
}


void estudiantes_crum(){
	int opcion;
	int* pOpcion;
	pOpcion = &opcion;
	do{
		printf("MENU\n");
		printf("1. Crear Estudiante\n");
		printf("2. Mostrar Estudiantes\n");
		printf("3. Mejor Estudiante\n");
		printf("0. Salir\n");
		printf("Ingrese una opcion: ");
		scanf("%d", &*pOpcion);
		switch(opcion){
			case 1: crearEstudiante();
				break;
			case 2: mostrarEstudiantes();
				break;
			case 3: mejorEstudiante();
				break;
			case 0: exit(0);
				break;
			default: printf("Opcion invalidad\n");
		}

	}while(opcion != 0);
}

void crearEstudiante(){
	int i, sumatoria = 0;
	int* pSuma;
	pSuma = &sumatoria;
	printf("Ingrese nombre: ");
	fflush(stdin);
	fgets(estu[*pCantEstu].nombre, 30, stdin);
	printf("\nIngrese edad: ");
	scanf("%d", &estu[*pCantEstu].edad);

	
	for(i = 0; i < 4; i++){
		printf("\nIngrese nota %d: ", i + 1);
		scanf("%f", &estu[*pCantEstu].notas[i]);
		*pSuma += estu[*pCantEstu].notas[i];
	}
	estu[*pCantEstu].promedio = *pSuma / 4;
	printf("Estudiante registrado con exito\n");
	cantEstu += 1;
	system("pause");
	system("cls");
}
void mostrarEstudiantes(){
	int i, j;
	for(i = 0; i < *pCantEstu; i++){
		printf("Estudiante No. %d\n", i + 1);
		printf("Nombre: %s\n", estu[i].nombre);
		printf("Edad: %d\n", estu[i].edad);
		for(j = 0; j < 4; j++){
			printf("Nota %d = %.f\n", j + 1, estu[i].notas[j]);
		}
		printf("Promedio: %.f\n", estu[i].promedio);
	}
	system("pause");
	system("cls");	
}
void mejorEstudiante(){
	int mayor = 0, i, indice, j;
	for(i = 0; i < *pCantEstu; i++){
		if(estu[i].promedio > mayor){
			mayor = estu[i].promedio;
			indice = i;
		}
	}

	printf("Estudiante No. %d\n", indice + 1);
	printf("Nombre: %s\n", estu[indice].nombre);
	printf("Edad: %d\n", estu[indice].edad);
	
	for(j = 0; j < 4; j++){
		printf("Nota %d = %.f\n", j + 1, estu[indice].notas[j]);
	}
	printf("Promedio: %.f\n", estu[indice].promedio);
	system("pause");
	system("cls");
}

void tiempo(){
	
	int  st=0,mt=0,ht=0;
	int* pst = &st;
	int* pmt = &mt;
	int* pht = &ht;
	fflush(stdin);
	for(int i=0; i<3 ;i++){
		printf("digite el numero horas de la etapa #%d: ",i+1);
		scanf("%d",&tiempototal[i].hora);
		printf("digite el numero de minutos de la etapa #%d:",i+1); 
		scanf("%d",&tiempototal[i].minuto);
		printf("digite el numero de segundos de la etapa #%d:",i+1); 
		scanf("%d",&tiempototal[i].segundos);
		}
		
	st = tiempototal[0].segundos+ tiempototal[1].segundos + tiempototal[2].segundos;
	mt = tiempototal[0].minuto+ tiempototal[1].minuto + tiempototal[2].minuto;
	ht = tiempototal[0].hora + tiempototal[1].hora + tiempototal[2].hora;
	
	while(st>59){
	
		if(st > 59){
			mt += 1;
			st -= 60;
        }
    }
    	while(mt>59){
	
		if(mt > 59){
		ht += 1;
		mt -= 60;
        }
    }
    
printf("El tiempo empleado en las 3 etapas es de : %d : %d : %d\n",*pht,*pmt,*pst);
}

void ingresar(){
	printf ("ingrese el nombre del jugador.\n");
    fflush (stdin);
    fgets(players.nombre,30,stdin);
    printf ("Ingrese su edad.\n");
    scanf("%d",&players.edad);
    printf ("Ingrese su sexo.\n");
    fflush (stdin);
    fgets(players.sexo,15,stdin);
    printf ("Ingrese su club.\n");
    fflush (stdin);
    fgets(players.club,30,stdin);
  

	printf ("\n el nombre del jugador es : %s ",(pPlayers->nombre));
	printf ("\n la edad del jugador es : %d ",(pPlayers->edad));
	printf ("\n el club del jugador es : %s ",(pPlayers->club));
	printf("su categoria es: \n"); categoria();



}

void categoria(){
	if (players.edad>30){
		printf("mayor");
	}else if (players.edad<30&&players.edad>15){
	   printf("Joven");
	}else{
	  printf("Infantil");
	}
}

void salarios_t(){
	int a,aux=0,base;
	int* paux = & aux;
	int* pbase = & base;
	printf("Cuantos trabajadores ahi : ");
	scanf("%d",&a);
	for(int i=0; i<a ;i++){
		printf("digite su nombre : ");
		fflush(stdin);
		fgets(trabajador[i].nombre,30,stdin);
		printf("digite su salario : ");
		scanf("%d",&trabajador[i].salario);
		
		}
		
		system("cls");
	for(int i=0; i<a; i++){
        if(trabajador[i].salario>aux){
            *paux= trabajador[i].salario;
            *pbase=i;
        }
    }
    printf("\n Trabajador de mayor paga su nombre es : %s ",(pTrabajador+base)->nombre);
		
	printf("\n su salario es de : %d ",(pTrabajador+*pbase)->salario);
	printf("\n");
	
		for(int i=0; i<a; i++){
        if(trabajador[i].salario<*paux){
            *paux = trabajador[i].salario;
            *pbase=i;
        }
    }
    printf("\n Trabajador de menor paga su nombre es : %s ",(pTrabajador+base)->nombre);
		
	printf("\n su salario es de : %d \n",(pTrabajador+*pbase)->salario);
}
void alumnos_n_limit(){
	pedir_datos();
	promedio();
	mostrar_datos();
	
}

void pedir_datos(){
	int suma=0;
printf("Ingrese el nombre del estudiante : ");
fflush(stdin);
fgets(prom.datos.nombre,30,stdin);
printf("Ingrese el sexo del estudiante : ");
fflush(stdin);
fgets(prom.datos.sexo,15,stdin);
printf("Ingrese la edad del estudiante : ");
scanf("%d",&prom.datos.edad);

for(int i=0;i<3;i++){
printf("Ingrese la nota #%d : ",i+1);
scanf("%f",&prom.notas[i]);	
}

}

void mostrar_datos(){
	float promedio_1, suma=0;
	float* pprom = & promedio_1;
printf("\n El nombre del estudiante : %s",pProm->datos.nombre);
printf("\n El sexo del estudiante : %s",pProm->datos.sexo);
printf("\n Ingrese la edad del estudiante : %d\n", pProm->datos.edad);
for(int i=0;i<3;i++){
printf("\n La nota #%d : %.1f",i+1,prom.notas[i]);
}	
for(int i=0;i<3;i++){
	suma+=prom.notas[i];
}
*pprom=suma/3;
printf("\n El promedio del alumno es:  %.1f\n",*pprom);
}

void pedir_datos_persona(){
	
	printf("\n cuantos usuarios va ingresar : ");
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		
		printf("\n ingrese el nombre del usuario : ");
		fflush(stdin);
		fgets(personas[i].nombre,30,stdin);
		
	    printf("si el usuario tiene alguna dicapacidad ingrese: 1 ; si el usuario no tiene ingrese: 0 ");
	    scanf("%d",&personas[i].ban);
	    
    	if((pPsonas+i)->ban==0){
		
			for(int z = 0; z < l ; z++){
				
				personasin[j].nombre[z] = personas[i].nombre[z];	
			}
			j++;
		}else{
			
			for(int z = 0; z < l ; z++){
				personacon[n].nombre[z] = personas[i].nombre[z];	
			}
			n++;
		}
	}

	for(i=0;i<j;i++){
 		printf("\n Personas sin discapasidad: %s",(pPsin+i)->nombre);
	}

	printf("\n\n");
	
	for(i=0;i<n;i++){
	 printf("\n persona con discapacidad: %s",(pPcon+i)->nombre);
	}
	
}
void menu2(){
	int opcion;
	
	do{
		printf("MENU\n");
		printf("1. Crear Estudiante\n");
		printf("2. Mostrar Estudiantes\n");
		printf("3. Mejor Estudiante\n");
		printf("0. Salir\n");
		printf("Ingrese una opcion: ");
		scanf("%d", &opcion);
		switch(opcion){
			case 1: crearEstudiante();
				break;
			case 2: mostrarEstudiantes();
				break;
			case 3: mejorEstudiante();
				break;
			case 0: exit(0);
				break;
			default: printf("Opcion invalidad\n");
		}

	}while(opcion != 0);
}

void crearEstudiante1(){
	int i, sumatoria = 0;
	printf("Ingrese nombre: ");
	fgets(estu2[cantEstu].nombre1, 30, stdin);
	printf("\nIngrese edad: ");
	scanf("%d", &estu2[cantEstu].edad1);
	printf("\nIngrese grado: ");
	scanf("%d", &estu2[cantEstu].grado1);
	for(i = 0; i < 4; i++){
		printf("\nIngrese nota %d: ", i + 1);
		scanf("%f", &estu2[cantEstu].notas[i]);
		sumatoria += estu2[cantEstu].notas[i];
	}
	estu2[cantEstu].promedio = sumatoria / 4;
	printf("Estudiante registrado con exito\n");
	cantEstu += 1;
}
void mostrarEstudiantes1(){
	int i, j;
	for(i = 0; i < cantEstu; i++){
		printf("Estudiante No. %d\n", i + 1);
		printf("Nombre: %s\n", estu2[i].nombre1);
		printf("Edad: %d\n", estu2[i].edad1);
		printf("Grado: %d\n", estu2[i].grado1);
		for(j = 0; j < 4; j++){
			printf("Nota %d = %.f\n", i + 1, estu2[i].notas[j]);
		}
		printf("Promedio: %.f\n", estu2[i].promedio);
	}	
}
void mejorEstudiante1(){
	int mayor = 0, i, indice, j;
	for(i = 0; i < cantEstu; i++){
		if(estu2[i].promedio > mayor){
			mayor = estu2[i].promedio;
			indice = i;
		}
	}

	printf("Estudiante No. %d\n", indice + 1);
	printf("Nombre: %s\n", estu2[indice].nombre1);
	printf("Edad: %d\n", estu2[indice].edad1);
	printf("Grado: %d\n", estu2[indice].grado1);
	for(j = 0; j < 4; j++){
		printf("Nota %d = %.f\n", i + 1, estu2[indice].notas[j]);
	}
	printf("Promedio: %.f\n", estu2[indice].promedio);
}
