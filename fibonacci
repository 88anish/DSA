/*submitted by 
   Anish Jain (2012017)
*/
 
 
#include <stdio.h>

#define MAX 5500

void add(char first[], char second[], char result[])
{
  int carry = 0;
  for (int i = MAX - 1; i >= 0; i--)
  {
    int digit = (first[i] - '0') + (second[i] - '0') + carry;
    result[i] = (digit % 10) + '0';
    carry = digit / 10;
  }
}

void copy(char first[], char second[])
{
  for (int i = MAX - 1; i >= 0; i--)
    first[i] = second[i];
}

char fibonacci1[MAX];
char fibonacci2[MAX];
char result[MAX];

int main()
{

  for (int i = 0; i < MAX; i++)
  {
    fibonacci1[i] = fibonacci2[i] = result[i] = '0';
  }
  fibonacci2[MAX - 1] = '1';

  int n;
  scanf("%d", &n);

  if (n == 0 || n == 1)
  {
    printf("%c", n + '0');
  }
  else
  {
    for (int i = 2; i <= n; i++)
    {
      add(fibonacci1, fibonacci2, result);
      copy(fibonacci1, fibonacci2);
      copy(fibonacci2, result);
    }

    int start = 0;
    for (int i = 0; i < MAX; i++)
    {
      if (start == 0 && result[i] == '0')
        continue;

      if (start == 0 && result[i] != '0')
        start = 1;
      printf("%c", result[i]);
    }
    printf("\n");
  }
  return 0;
}
