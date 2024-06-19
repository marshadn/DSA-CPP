#include<stdio.h>
#include<string.h>
int main()
{
   struct students{
      int price;
      float topspeed;
      char segment[15];
   };
struct students s={1200000,234.34,"sedan"};
//    s.rollno=23;
//    s.percent=97.8;
//    s.grade='A';
    strcpy(s.segment,"sedan");
   printf("%d\n", s.price);
   printf("%f\n", s.topspeed);
   printf("%s", s.segment);
   return 0;
}