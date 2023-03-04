#include<stdio.h>
int main(){
	int age=22;
	int _age=23;
	int *ptr=&age;
	int *_ptr=&_age;
	printf("%d\n",*ptr);
	printf("%u\n",*ptr-*_ptr);
	printf("%d\n",ptr - _ptr);
	return 0;
}
