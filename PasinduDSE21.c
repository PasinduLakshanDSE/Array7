#include<stdio.h>
void main(){
	int my_array[10];
	char st_name[20];
	int count;
	int total;
	int avg;
	
	printf("Enter the student Name:");
	scanf("%s",&st_name);
	
	for(count=0;count<10;count++){
		printf("Enter the Mark:");
		scanf("%d",&my_array[count]);
		
		
	}
	for(count=0;count<10;count++){
		total=total+my_array[count];
		
		
	}
	avg=total/10;
	
	if(avg>=70){
		printf("Final grade is:A\n");
	}else if(avg>=55){
		printf("Final grade is:B\n");
	}else if(avg>=40){
		printf("Final grade is:C\n");
	}else{
		printf("Final grade is:F\n");
	}
		
	
	
}