//! Đề: cho 1 số là tháng trong năm, cho biết tháng đó có bao nhiêu ngày(tháng 2
//! có 28 ngày)

#include <stdio.h>
int main() {
  int monno;
  char monnm[15];
  scanf("%d", &monno);
  switch (monno) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    printf("31\n");
    break;
  case 2:
    printf("28 \n");
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    printf("30\n");
    break;
  default:
    break;
  }
}
