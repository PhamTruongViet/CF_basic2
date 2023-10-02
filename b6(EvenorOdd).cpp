//! Đề: Cho 1 số nguyên n, cho biết n là số lẻ hay chẵn

#include <stdio.h>
int main() {
  int num1, rem1;

  scanf("%d", &num1);
  rem1 = num1 % 2;
  if (rem1 == 0)
    printf("0\n");
  else
    printf("1\n");
}
