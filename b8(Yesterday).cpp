//! Đề: Yêu cầu nhập ngày tháng năm (theo đúng định dạng 'd/m/y'), in ra
//! ngày tháng năm của 1 ngày trước đó. Ví dụ: 01/01/2019 -> 31/12/2018

#include <stdio.h>

int main() {
  int day = 0, month = 0, year = 0;
  int maxLastMonthDay = 0;

  scanf("%d/%d/%d", &day, &month, &year);

  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
      month == 10 || month == 12) {
    maxLastMonthDay = 31;
  } else if (month == 4 || month == 6 || month == 9 || month == 11) {
    maxLastMonthDay = 30;
  } else if (month == 2) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
      maxLastMonthDay = 29;
    } else {
      maxLastMonthDay = 28;
    }
  }
  if (day == 1) {
    day = maxLastMonthDay;
    month--;
  } else
    day--;
  if (month == 0) {
    month = 12;
    year--;
  }

  printf("%d/%d/%d", day, month, year);
}
