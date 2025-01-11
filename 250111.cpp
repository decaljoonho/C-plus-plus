#include <stdio.h>
#include <string.h>

//struct Coordi {
//	int x;
//	int y;
//};
//
//int main()
//{
//	int a,b;
//	scanf("%d %d",&a,&b);
//	
//	struct Coordi p1;
//	struct Coordi p2 = {5, 9};
//	struct Coordi p3 = {a, b};
//	struct Coordi p4;
//	
//	p1.x = 2;
//	p1.y = 3;
//	
//	printf("p1의 좌표( %d, %d )\n", p1.x, p1.y);
//	printf("p3의 좌표( %d, %d )",p3.x, p3.y);
//	
//	return 0;
//}

//struct Circle {
//	int x;
//	int y;
//	double r;
//};
//
//int main()
//{
//	struct Circle c1, c3 , c4;
//	c1.x = 2;
//	c1.y = 0;
//	c1.r = 3.1;
//	struct Circle c2 = {-1,-5,10.0};
//	c3.x = c1.x;
//	c3.y = c1.y;
//	c3.r = c1.r;
//	c4.r = 5.0;
//	c4.x = c2.y;
//	c4.y = c2.x;
//	
//	printf("c1의 좌표 : (%d,%d), 반지름 : %.1lf\n",c1.x,c1.y,c1.r);
//	printf("c2의 좌표 : (%d,%d), 반지름 : %.1lf\n",c2.x,c2.y,c2.r);
//	printf("c3의 좌표 : (%d,%d), 반지름 : %.1lf\n",c3.x,c3.y,c3.r);
//	printf("c4의 좌표 : (%d,%d), 반지름 : %.1lf\n",c4.x,c4.y,c4.r);
//	return 0;
//}

//struct Person{
//	char name[10];
//	int age;
//	double height;
//};
//
//int main()
//{
//	struct Person m1;
//	struct Person m2 = {"허난설현", 13, 159.9};
//	struct Person m3;
//	struct Person m4;
//	
//	scanf("%s %d %lf",&m3.name, &m3.age,&m3.height);
//	
//	strcpy(m1.name, "허균");
//	m1.age = 19;
//	m1.height = 168.34;
//	
//	strcpy(m4.name, "김준호");
//	m4.age = 15;
//	m4.height = 173.5;
//	
//	printf("m1의 이름 : %s\nm1의 나이 : %d\nm1의 키 : %.2lf\n",m1.name,m1.age,m1.height);
//	printf("m2의 이름 : %s\nm2의 나이 : %d\nm2의 키 : %.1lf\n",m2.name,m2.age,m2.height);
//	printf("m3의 이름 : %s\nm3의 나이 : %d\nm3의 키 : %.1lf\n",m3.name,m3.age,m3.height);
//	printf("m4의 이름 : %s\nm4의 나이 : %d\nm4의 키 : %.1lf",m4.name,m4.age,m4.height);
//	
//	return 0;
//}

struct Circle {
	int x;
	int y;
	double r;
    double a;
    double b;
};

int main()
{
	struct Circle c;
	c.r = 5;
	c.a = c.r*c.r*3.14;
	c.b = 2*c.a*3.14;
	printf("원의 넓이 : %.3lf\n원의 둘레 : %3lf",c.a,c.b);
	
	
}