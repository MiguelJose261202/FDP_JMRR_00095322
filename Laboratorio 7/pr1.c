 #include <stdio.h>
 int main (){


                        //Jose Miguel Ramirez Ramirez - 00095322


        //Apartado para declarar los archivos.

 FILE* numeros_pos = fopen("numpositivos.txt", "w"); //Utilizamos la "w" de write ya que vamos a escribir sobre estos archivos
 FILE* numeros_nega = fopen("numnegativo.txt","w");
    
    if (numeros_pos == NULL)
    {
        printf("ERROR!");

        return 1;

    }


    //Condicion si no existe ningun tipo de archivo
     if (numeros_nega == NULL)
    {
        printf("ERROR!");
        return 1;
    }
    int x;
    int nega;


         //Condicion de bucle para escribir los numeros

  for(int i=0 ; i < 10; i++){
     printf("escriba un numero positivo\n");
    scanf("%d",&x);
    fprintf(numeros_pos,"%d",x);
}



     for(int i=0 ; i < 10; i++){
    printf("escriba un numero negativo\n");
    scanf("%d",&nega);
     fprintf(numeros_nega,"%d",nega);
     }
    
    //cierre de los archivos
    fclose(numeros_pos);
    fclose(numeros_nega);


    return 0;
}