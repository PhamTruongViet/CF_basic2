//! Đề: Cho 1 số x(2>=x<=8) là thứ trong tuần, in ra tên tiếng anh của nó
//! vd: 2 là Monday

#include <stdio.h>

int main() {
  int day;
  scanf("%d", &day);
  switch (day) {
  case 1:
    printf("Monday \n");
    break;
  case 2:
    printf("Tuesday \n");
    break;
  case 3:
    printf("Wednesday \n");
    break;
  case 4:
    printf("Thursday \n");
    break;
  case 5:
    printf("Friday \n");
    break;
  case 6:
    printf("Saturday \n");
    break;
  case 7:
    printf("Sunday  \n");
    break;
  default:
    break;
  }
}
