//! Đề: cho 3 số nguyên là 3 góc, cho biết 3 góc này có thể tạo thành 1 tam giác hay
//! không?

#include <stdio.h>
int main() {
  int anga, angb, angc, sum; 

  scanf("%d %d %d", &anga, &angb, &angc);

  sum = anga + angb + angc;

  if (sum == 180) {
    printf("1\n");
  } else {
    printf("0\n");
  }
}
