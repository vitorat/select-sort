//Author: Vitor tolomelli
//SelectSort

#include<stdio.h>
#include<stdlib.h>

void selectSort(int numbers[], int size2){
	int smaller, i, j;
	
	for(j=0; j<size2; j++){
            smaller = j;
    for(i=j+1; i<size2; i++){
        if(numbers[i]<numbers[smaller]){
                smaller = i;
}
    }

    if(j!=smaller){

    int aux;

    aux = numbers[j];

    numbers[j] = numbers[smaller];

    numbers[smaller] = aux;
    }
}
}

main(){
	int size;
	int z, a;

	printf("\n----->Type the vector size:");
  	scanf("%d",&size);
  	
  	int vector[size];
  	int value;
  	
  	for(z=1; z<size+1; z++){
	  	printf("\n----->Type a value:");
  		scanf("%d",&value);
  		vector[z-1] = value;
  		
  		printf("\n#####Vector Image#####\n");
  		for(a=0; a<z; a++){
            printf("\n [%d]  %d\n", a, vector[a] );
        }
  	}
  	
    printf("\n\n----->Time to sort...\n");


    selectSort(vector, size);

    printf("\n#####Vector Image#####\n");
	for(a=0; a<z-1; a++){
	    printf("\n [%d]  %d\n", a, vector[a] );
	}

    
	system("pause");
}
