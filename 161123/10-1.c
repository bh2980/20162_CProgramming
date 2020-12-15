#include <stdio.h>

struct list{  

	char name;
	char sex;
	int age; 

}; 
 
int main(void){  

	struct list st1 = {'T', 'M', 25};
	
	printf("이름 = %c, 성별 = %c, 나이 = %d\n", st1.name, st1.sex, st1.age);  
	
	return 0; 

}
