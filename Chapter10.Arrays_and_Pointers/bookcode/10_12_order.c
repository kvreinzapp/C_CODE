#include <stdio.h>
int data[2] = {100, 200};
int moredata[2] = {300, 400};
int main(void) {

  int *p1, *p2, *p3, *p4;
  p1 = p2 = data;
  p3 = p4 = moredata;
  printf("  *p1=%d   *p2=%d     *p3=%d     *p4=%d\n", *p1, *p2, *p3, *p4);
  printf("*p1++=%d *++p2=%d (*p3)++=%d ++(*p4)=%d\n", *p1++, *++p2, (*p3)++,
         ++(*p4));
  printf("  *p1=%d   *p2=%d     *p3=%d     *p4=%d\n", *p1, *p2, *p3, *p4);

  return 0;
}
