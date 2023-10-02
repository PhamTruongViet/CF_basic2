//! Trên trục XY, cho tọa độ (x,y) cho biết điểm này nằm ở góc phần tư thứ mấy.
//! vd: (7,8) nằm ở góc phần tư thứ 1 thì in ra "1"

#include <stdio.h>

int main() {
  int co1, co2;

  scanf("%d %d", &co1, &co2);

  if (co1 > 0 && co2 > 0)
    printf("1");
  else if (co1 < 0 && co2 > 0)
    printf("2");
  else if (co1 < 0 && co2 < 0)
    printf("3");
  else if (co1 > 0 && co2 < 0)
    printf("4");
  else if (co1 == 0 && co2 == 0)
    printf("0");
}
