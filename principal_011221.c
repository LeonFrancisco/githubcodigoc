#include <stdio.h>
/*prototipos*/
int inicio_de_sesion();
/*Funcion principal del programa*/
int main() {
	/*variable de los menus*/
	int opcion_menu_inicio=0,opcion_menu_principal=0;
	/*Variable que define el inicio de sesion*/
	int sesion=0;
	printf("Manual\nMenu\n1.-Registrarse\n2.-iniciar sesion\nInserte la opcion: ");
	scanf("%i",&opcion_menu_inicio);
	switch(opcion_menu_inicio){
		case 1:
			printf("Parte en desarrollo\n");
			break;
		case 2:
			sesion = inicio_de_sesion();
			printf("inicio de sesion: %i\n", sesion);
			break;
		default:
			printf("No exite esta opcion");
	}
/*Menu principal*/
	if(sesion==1){
		printf("Bienvenido\nMenu principal\nElija una opción\n1.-Registro\n2.-Consultar IMC\n3.-Registro de entrenamineto\n4.-Comparador\n");
		scanf("%i",&opcion_menu_principal);
		switch(opcion_menu_principal){
			case 1:
				printf("Registro");
				break;
			case 2:
				printf("Consultar IMC");
				break;
			case 3:
				printf("Registro de entrenamineto");
				break;
			case 4:
				printf("Comparador");
				break;
			default:
				printf("Esta opción no existe");
		}
	}
	else{
		printf("Lo sentimos ocurrio un error :c");
	}
	return 0;
}
/*funciones secundarias*/
/*registrar o iniciar sesión*/
int inicio_de_sesion(){
	/*Variables principales*/
	char usuarioadmin[20]="Admin",usuario[20]=" ",contrasenaadmin[20]="Sesion",contrasena[20]=" ";
	printf("Inserte su usuario: ");
	scanf("%s",&usuario);
	printf("\nInserte su contraseña: ");
	scanf("%s",&contrasena);
	
	if(strcmp(usuarioadmin,usuario)==0){
		if(strcmp(contrasenaadmin,contrasena)==0){
			printf("\ningreso con exito\n");
			return 1;
		}
		else{
			printf("Contrasena incorrecta\n");
		}
	}
	else{
		printf("\nEl usuario no existe\n");
	}
	return 0;
}
