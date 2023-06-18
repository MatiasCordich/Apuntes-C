/*
-------- TRABAJADO INTEGRADOR FINAL --------
Fecha 18/06/2023
Autores:
        Alvarez, Alan
        Buggenthin, Nicolas
        Olivera, Abril
        Sio Cordich, Matias
        Tassara Franco, Santino
----------------------------------
Materia: Progrmacion I (C)
----------------------------------
Universidad Nacional de Lomas de Zamora
----------------------------------
-------- AGENDA --------
Objetivo:
    Realizar un programa el cual permita gestionar una agenda de 100 personas

Requisitos:
    1- Cada persona agendada deberá contar con un nombre (iniciales), un apellido, DNI, un teléfono y una fecha de cumpleaños
    2- Se deberá poder ver un listado general de todas las personas registradas
    3- Se deberá poder mostrar un listado de todas las personas nacidas en un año en específico
    4- Se deberá poder mostrar quién es la persona más joven del listado
    5- Se deberá poder editar los datos de una persona en específico
    6- Debe existir una funcionalidad para mostrar los datos de una persona
    7- Se deberá poder buscar una persona por su DNI
    8- El DNI de una persona debe ser único
*/

#include <stdio.h>
// Estructura para la fecha de nacimiento de la persona 
typedef struct
{
    int dia;
    int mes;
    int anio;
} s_fecha;

// Estructura de los datos que debe tener la persona en la agenda
typedef struct
{
    char nombre;
    char apellido;
    int dni;
    int telefono;
    s_fecha cumpleanios;
} s_persona;

//Se declaran las variables globales
s_persona personas[100];
int cant_elementos=0;

// La Funcion nos devuelve el indice donde esta el dni o -1 si no existe
int buscar_dni(s_persona personas[],int cant_elementos, int dni)
{
    int indice_buscado = -1;
    int i;
    for (i = 0; i < cant_elementos; i++)
    {
        if (personas[i].dni == dni)
        {
            indice_buscado = i;
            break;
        }
    }
    return indice_buscado;
}

// Esta es la funcion que sirve para construir la persona
s_persona construir_persona(char nombre, char apellido, int dni, int telefono, s_fecha cumpleanios)
{

    s_persona persona_nueva;

    persona_nueva.nombre = nombre;
    persona_nueva.apellido = apellido;
    persona_nueva.dni = dni;
    persona_nueva.telefono = telefono;
    persona_nueva.cumpleanios = cumpleanios;

    return persona_nueva;
}

//Esta es la funcion que sirve para verificar que el dni no este registrado
int comparar_dni(s_persona personas[],int cant_elementos)
{
    int i,salida,dni;
    printf("Por favor, el DNI (unico): ");
    scanf(" %d", &dni);
    for ( i = 0; i < cant_elementos; i++)
    {
        while (personas[i].dni==dni)
        {
			printf("Ese dni ya esta registrado, ingrese el correcto:  \n");
            scanf("%d",&dni);
        }
    }
    return dni;
}

// La funcion pide los datos y tiene como salida una persona 
s_persona ingresar_persona()
{
    // la funcion pide los datos y tiene como salida una persona

    char nombre;
    char apellido;
    int dni;
    int telefono;
    int salida;
    s_fecha cumpleanios;

    printf("-------------------- INGRESO DE DATOS -------------------\n");
    printf("------------------------- NOMBRE ------------------------\n");
    printf("Por favor, ingrese inicial del nombre: ");
    scanf(" %c", &nombre);
    printf("----------------------- APELLIDO ------------------------\n");
    printf("Por favor, ingrese inicial del apellido: ");
    scanf(" %c", &apellido);
    printf("-------------------------- DNI --------------------------\n");
    dni=comparar_dni(personas,cant_elementos);
    printf("----------------------- TELEFONO ------------------------\n");
    printf("Por favor, ingrese telefono: ");
    scanf(" %d", &telefono);
    printf("---------------------- CUMPLEANIOS ----------------------\n");
    printf("Por favor, ingrese el dia: ");
    scanf(" %i", &cumpleanios.dia);
    printf("Por favor, ingrese el mes: ");
    scanf(" %i", &cumpleanios.mes);
    printf("Por favor, ingrese el anio: ");
    scanf(" %i", &cumpleanios.anio);
    printf("---------------------------------------------------------\n");
    cant_elementos++;

    return construir_persona(nombre, apellido, dni, telefono, cumpleanios);
}

// El procedimiento pide el arreglo y el tamanio y muestra los contactos
void mostrar_contactos(s_persona personas[], int tamanio)
{
    int i;
    printf("------------------ LISTA DE CONTACTOS: ------------------\n");
    for (i = 0; i < tamanio; i++)
    {
        printf("Posicion %i : Nombre: %c \n", i+1, personas[i].nombre);
        printf("---------------------------------------------------------\n");
    }
}

//toma el arreglo y pide la posicion
// Acceder y modificar los elementos del arreglo utilizando punteros
void editar_contacto(s_persona *arreglo, int posicion ) { 
    char nuevo_nombre;
    char nuevo_apellido;
    char opcion;
    int nuevo_dni, nuevo_telefono, dia, mes, anio;
    
    printf("Desea editar el nombre? s/n: ");
    scanf(" %c", &opcion);
    if (opcion == 's' || opcion == 'S'){
    	printf("Ingrese nuevo nombre: \n");
    	scanf(" %c", &nuevo_nombre);
    	(arreglo + posicion)->nombre = nuevo_nombre;
	}
	
    printf("Desea editar el apellido? s/n: ");
    scanf(" %c", &opcion);
    if (opcion == 's' || opcion == 'S'){
    	printf("Ingrese nuevo apellido: \n");
    	scanf(" %c", &nuevo_apellido);
    	(arreglo + posicion)->apellido = nuevo_apellido;
	}
	
	printf("Desea editar el DNI? s/n: ");
    scanf(" %c", &opcion);
    if (opcion == 's' || opcion == 'S'){
    	nuevo_dni=comparar_dni(personas, cant_elementos);
		(arreglo + posicion)->dni = nuevo_dni;
	}
	
	printf("Desea editar el telefono? s/n: ");
    scanf(" %c", &opcion);
    if (opcion == 's' || opcion == 'S'){
    	printf("Ingrese nuevo telefono: \n");
    	scanf("%i", &nuevo_telefono);
    	(arreglo + posicion)->telefono = nuevo_telefono;
	}
	
    printf("Desea editar la fecha de nacimiento? s/n: ");
    scanf(" %c", &opcion);
    if (opcion == 's' || opcion == 'S'){
		printf("Ingrese fecha de nacimiento: \n");
    	printf("Día: ");
    	scanf("%i", &dia);
    	(arreglo + posicion)->cumpleanios.dia = dia; // almacena el dia
    
    	printf(" Mes: ");
    	scanf("%i", &mes);
    	(arreglo + posicion)->cumpleanios.mes = mes; // almacena el mes
    
    	printf(" Año: ");
    	scanf("%i", &anio);
  		(arreglo + posicion)->cumpleanios.anio = anio; // almacena el anio
	}
    printf("\n");
    printf("Contacto modificado. \n");
}

//Al llamar este procedimiento te muestra los datos de la persona buscada a partir del dni
void mostrar_persona(s_persona personas[],int indice_buscado){
    printf("---------------------------------------------------------\n");
            printf("NOMBRE: %c\n", personas[indice_buscado].nombre);
            printf("APELLIDO: %c\n", personas[indice_buscado].apellido);
            printf("DNI: %i\n", personas[indice_buscado].dni);
            printf("TELEFONO: %i\n", personas[indice_buscado].telefono);
            printf("FECHA DE NACIMIENTO: %02d/%02d/%04d \n",personas[indice_buscado].cumpleanios.dia,personas[indice_buscado].cumpleanios.mes,personas[indice_buscado].cumpleanios.anio);
}
 

 
void mostrar_nacidos_en_anio (s_persona personas[], int cant_elementos, int anio)
{
    int i;

    printf("---------- LISTA DE CONTACTOS NACIDOS EN %i -----------\n", anio);
    for (i = 0; i < cant_elementos; i++)
    {
        if (personas[i].cumpleanios.anio == anio)
        {
            printf("---------------------------------------------------------\n");
            printf("NOMBRE: %c\n", personas[i].nombre);
            printf("APELLIDO: %c\n", personas[i].apellido);
            printf("DNI: %i\n", personas[i].dni);
            printf("TELEFONO: %i\n", personas[i].telefono);
            printf("FECHA DE NACIMIENTO: %02d/%02d/%04d \n",personas[i].cumpleanios.dia,personas[i].cumpleanios.mes,personas[i].cumpleanios.anio);
        }
    }
    
} 

// Funcion comparadora de fechas de cumpleaños
int comparar(s_fecha fecha1, s_fecha fecha2){

    int resultado = fecha1.anio - fecha2.anio;
    if(resultado == 0){
        resultado = fecha1.mes - fecha2.mes;
        if(resultado==0){
            resultado= fecha1.dia- fecha2.dia;
        }
    }

    return resultado;
}

//Devuelva la posicion del mas joven
int mas_joven (s_persona personas[],int cant_elementos){ 
    int i;
    int i_joven=-1;
    for ( i = 0; i < cant_elementos; i++)
    {
        if (i==0||comparar(personas[i].cumpleanios,personas[i_joven].cumpleanios)>0)
        {
            i_joven=i;
        }
           
    }
    printf("--------------------- PERSONA JOVEN ---------------------\n");
    printf("NOMBRE: %c\n", personas[i_joven].nombre );
    printf("APELLIDO: %c\n", personas[i_joven].apellido );
    printf("TELEFONO: %d\n",  personas[i_joven].telefono );
    printf("DNI: %d\n", personas[i_joven].dni);
    printf("CUMPLEANIOS: %d/%d/%d \n", personas[i_joven].cumpleanios.dia, personas[i_joven].cumpleanios.mes, personas[i_joven].cumpleanios.anio);
}

// Menu para preguntar si queremos seguir utlizando el programa
char menu_salir()
{
    char respuesta;
    printf("------------------------ AGENDA -------------------------\n");
    printf("Desea seguir con el programa? s/n: ");
    scanf(" %c", &respuesta);
    printf("---------------------------------------------------------\n");

    return respuesta;
}

// Menu de opciones al ingreso
int opciones_menu (){
    int opcion;
    system("cls");
    printf("------------------------- MENU --------------------------\n");
    printf("1) Crear nuevo contacto\n");
    printf("2) Ver listado general\n");
    printf("3) Buscar persona por DNI\n"); //al buscar nos mostraria la informacion personal y podriamos editarla al verla
    printf("4) Ver personas nacidas en determinado año\n");
    printf("5) Ver persona más joven\n");
    scanf("%d", &opcion);
    return opcion;
}

// Funcion principal
int main(int argc, char const *argv[])
{
    char respuesta_1,respuesta_2;
    int opcion;
    int dni,resultado_busqueda;
    int anio;

    // Ingreso un valor para respuesta para determinar si voy a bucle o no
    printf("------------------------ AGENDA -------------------------\n");
    printf("Bienvenido/a a la agenda, desea comenzar con el programa? s/n: ");
    scanf("%c", &respuesta_1);
    printf("---------------------------------------------------------\n");

    while (respuesta_1 == 's' || respuesta_1 == 'S')
    {  
    //Procedimiento que pide opcion y segun el caso nos enviaria a cada opcion del case (opciones del menú)  
        opcion=opciones_menu();
        switch (opcion) {
    case 1:
        personas[cant_elementos]=ingresar_persona();
        break;
    case 2:
        mostrar_contactos(personas,cant_elementos);
        break;
    case 3:
        printf("ingrese el DNI de la persona a buscar: ");
        scanf("%d",&dni);
        resultado_busqueda=buscar_dni(personas,cant_elementos,dni);
        if (resultado_busqueda==-1)
        {
            printf("\n");
			printf("El DNI buscado no existe. \n");
        }else
        {
            mostrar_persona(personas,resultado_busqueda);
            printf("Quiere editar el contacto? (s/n): ");
            scanf(" %c",&respuesta_2);
            if (respuesta_2== 's' || respuesta_2 == 'S')
            {
                editar_contacto(personas,resultado_busqueda);
            }
        }
        break;
    case 4:
        printf("Ingrese el anio por el cual desea buscar: ");
        scanf("%d",&anio);
        printf("\n");
        mostrar_nacidos_en_anio(personas,cant_elementos,anio);
        break;
    case 5:
        mas_joven(personas,cant_elementos);
        break;
    default:
    	printf("\n");
        printf("Opcion incorrecta");
      break;
}
        // Menu para verificar si seguimos utilizando la agenda 
        respuesta_1 = menu_salir();
    }

    printf("---------------------- FIN DE PROGRAMA ---------------------\n");

    return 0;
}