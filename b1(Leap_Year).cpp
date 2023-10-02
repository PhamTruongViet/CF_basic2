//! Đề: Kiểm tra xem năm cho trước có phải năm nhuận hay không?
//! vd: 2016 là năm nhuận thì in ra "1" ngược lại in ra "0".

#include <stdio.h>

int main() {
  int y;
  scanf("%d", &y);
  if (y % 400 == 0 || y % 100 != 0 && y % 4 == 0) {
    printf("1");
  } else
    printf("0");
}