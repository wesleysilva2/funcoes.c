#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//aritimetica questão 2  

float opera (float a, float b, int c){
       
  float z;
	   
   if(c==0){
	z=a+b;
   }
	else if(c==1){
	 z=b-a;
	}
		 
	 else if(c==2){
	  z=a*b;
	 }
		   
	  else if(c==3){
	   z=a/b;
	  }  

return (z);
      
  } 
  
//comparação questão 1 

int maiordedois(int num1 , int num2){
  
   if(num1<num2){
	  	
      
        x=num2;
       
    }
        
	     else{
	    	
      	
      	   x=num1;
	    
		 }
		
return (x);
		
	
}

//comparação questão 2

int menordetres(int num1 , int num2, int num3){
	
	int z;
	
     if(num1<=num2 && num1<=num3){
     	z=num1;
     	 
	 }
	 
	   else if(num2<=num1 && num2<=num3){
	  	  z=num2;
	  	  
		    
	  }
	     else if(num3<=num1 && num3<=num2){
	        z=num3;
	    	  
		}
		
return(z);
	
}

//aritimética questão 1 

float soma (int a int b){
	
	int c
	
	 c=a+b
      
	   return (c);
      
  } 

//comparação questão 5

int conjuntos_iguais(int ta1[], int ta2[], int valor){

int i , k

 for(i=0;i<valor;i++){

    for(k=0;k<valor;k++){

      if(ta1[i]==ta2[k]){

        valor=1;
      }
       else{

        valor=0

       }
    }

 }

 return valor;

}

//comparação questão 4

int existe(int cont[20], int tamanho, int resultado){

int i;
cont=0;

 for(i=0 i<tamanho i++){
    if(cont[i]==resultado){
      cont++
 }
 }


 return cont ;

}



		
	
	 
	 
	



	

    
    
	
	
	
