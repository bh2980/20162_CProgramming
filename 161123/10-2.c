#include <stdio.h> 
#define PROBLEM 
 
struct list { 

	char name, sex;  
	int age; 

}; 
 
typedef struct list list; 
 
typedef struct{  

	char name[20], address[30];
	int age; 

}student; 
 
int main(void) {  

	list lst1 = {'T', 'M', 25};  
	student st2 = {"Moon", "Seoul", 30}; 
	
	printf("이름 = %c, 성별 = %c, 나이 = %d\n", lst1.name, lst1.sex, lst1.age);  
	printf("이름 = %s, 주소 = %s, 나이 = %d\n", st2.name, st2.address, st2.age); 
	
	return 0;
}
