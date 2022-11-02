#include <stdio.h>

int main (){


                //Jose Miguel Ramirez Ramirez - 00095322

    //Declaramos nuestro archivo

    FILE* archivo = fopen("vocales.txt","w"); //Usamos W ya que seguiremos escribiendo y sobreescribiendo en el archivo las veces que desee el usuario


    char string1[5]; //Apartado de los contadores. Ya que en este caso es una condicion de cinco vocales
    int contador=0;
    int contador2=0;
    int contador3=0;
    int contador4=0;
    int contador5=0;
    


     printf("escriba una oracion\n");
     fgets(string1, sizeof(string1), stdin,);


 
     for(int i=0 ; i < 5; i++){
     switch(string1[i]){
     case 'a':
            contador++;
            break;
        case 'e':
         contador2++;
         break;
        case 'i':
         contador3++;
         break;
      case 'o':
        contador4++;
        break;
      case 'u':
      contador5++;
      break;
     }

     }
    
    fprintf(vocales,"el total de las repetciones de la vocal a es %d\n",contador);
    fprintf(vocales,"el total de repeticiones de la vocal e es %d\n",contador2);
    fprintf(vocales,"el total de repeticiones de la vocal i es %d\n",contador3);
    fprintf(vocales,"el total de repeticiones de la vocal o es %d\n",contador4);
    fprintf(vocales,"el total de repeticiones de la vocal u es %d\n",contador5);


    return 0;
}