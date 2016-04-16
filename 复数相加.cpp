#include<stdio.h>
struct complex
{
  int NUMreal;
  char add;
  int NUMcomplex;
  char root_i;
  /* data */
};
struct complex complex3[3];
main(int argc, char const *argv[])
{
  while(scanf("%d%c%d%c",&complex3[0].NUMreal,&complex3[0].add,&complex3[0].NUMcomplex,&complex3[0].root_i)!=EOF)
  {
    scanf("%d%c%d%c",&complex3[1].NUMreal,&complex3[1].add,&complex3[1].NUMcomplex,&complex3[1].root_i);
    complex3[2].NUMreal=complex3[0].NUMreal+complex3[1].NUMreal;
    complex3[2].NUMcomplex=complex3[0].NUMcomplex+complex3[1].NUMcomplex;
    printf("%d%c%d%c\n",complex3[2].NUMreal, complex3[0].add,complex3[2].NUMcomplex,complex3[0].root_i);
  }
}
