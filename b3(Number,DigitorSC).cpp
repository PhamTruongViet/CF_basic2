//! Đề: kiểm tra xem 1 ký tự là chữ cái, số ,hay 1 ký tự đặc biệt?
//! nếu là chữ in ra "a", số in ra "d", ký tự đặc biệt in ra "c"
#include <stdio.h>

int main() {
  char sing_ch;

  scanf("%c", &sing_ch);

  if ((sing_ch >= 'a' && sing_ch <= 'z') ||
      (sing_ch >= 'A' && sing_ch <= 'Z')) {
    printf("a\n");
  } else if (sing_ch >= '0' && sing_ch <= '9')
  {
    printf("d\n");
  } else 
  {
    printf("c\n");
  }
}
