#include<stdio.h>
#include<stdlib.h>

int main()
{	
	unsigned long long number=0, i=0, j=0, finish=0, *array;
	int rest=0;

	FILE *file;
	file = fopen("Primes.txt","w");

	printf("- Prime Numbers List -\n");
	printf("Input the last number: ");
	scanf("%lld",&finish);
	
	array = (unsigned long long *) malloc ( sizeof ( unsigned long long ) *finish);
	
	array[j]=2;
	
	fprintf(file,"- Prime Numbers List (up to %llu) -\n\n",finish);
	
	printf("2\n");
	fprintf(file,"2\n");
	
	for(number=3;number<=finish;number+=2){
		for(i=0;i <= j;i++){
			rest=number%array[i];
			if(rest==0) break;
		}
	
		if(rest != 0){
			printf("%llu\n",number);
			fprintf(file,"%llu\n",number);
			
			j++;
			array[j]=number;
		}
	}
	
	printf("Number of primes: %llu\n", j+1);
	fprintf(file,"\nNumber of primes: %llu\n", j+1);
	
	free(array);
	
	fclose(file);

	return 0;
}	