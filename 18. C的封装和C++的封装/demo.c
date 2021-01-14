#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person
{
	char name[64];
	int age;
};

void eat(struct Person *p)
{
	printf("%s eating now ... ...", p->name);
}

void test01()
{
	struct Person p;
	strcpy(p.name, "Edward");
	eat(&p);
}

struct Dog
{
	char name[64];
	int age;
};

void dogEat(struct Dog *dog)
{
	printf("%s eating now ... ...", dog->name);
}


void test02()
{
	struct Dog dog;
	strcpy(dog.name, "WangCai");
	dogEat(&dog);
}

void test03()
{
	
	struct Dog dog;
	strcpy(dog.name, "WangCai");
	dogEat(&dog);

	struct Person person;
	strcpy(person.name, "Demo");
	// 这里编译的时候会有warning，但是却仍然可以执行；
	// C 语言这里没有很强的类型控制
	// C 语言struct 里面不能有函数，要分开处理；
	dogEat(&person);
}


int main()
{
	test03();
	return 0;
}
