#include <stdio.h>

// swap uses pass by value, swap2 uses pass by reference
void swap(int a, int b);
void swap2(int *a, int *b);

int main(void)
{
  int x = 1;
  int y = 2;
  swap(x, y);
  printf("x: %d\ny: %d\n", x, y);
  swap2(&x, &y);
  printf("x: %d\ny: %d\n", x, y);

  return 0;
}

void swap(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}
void swap2(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
