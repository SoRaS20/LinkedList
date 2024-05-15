#include<bits/stdc++.h>
using namespace std;

struct Student{
	int id;
  char name[20];
  float cgpa;
};


int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  struct Student student1;
  struct Student studentarray[10];

  cin>>studentarray[0].id>>studentarray[1].cgpa>>studentarray[2].name;
  getchar();
  cout<<studentarray[0].id<<" "<<studentarray[1].cgpa<<" "<<studentarray[2].name<<endl;;

  student1.id = 1;
  student1.cgpa = 3.5;
  strcpy(student1.name, "SOHAN");

  printf("%d %f %s \n", student1.id, student1.cgpa, student1.name );




  return 0;
}
