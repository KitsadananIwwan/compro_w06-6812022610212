#include <stdio.h>

int main() {
    int x = 12, y = 7, z = 12;// กำหนดค่าตัวแปร x, y, z
    printf("x = %d, y = %d, z = %d\n", x, y, z);// แสดงค่าตัวแปร

    //กำหนดให้ 1 = ถูก, 0 = ผิด

    printf("%d\n", x > y);  
    //เปรียบเทียค่าเเล้วได้ 1 เพราะ 12 > 7 ถูก
    printf("%d\n", x < z);  
    //เปรียบเทียค่าเเล้วได้ 0 เพราะ 12 < 12 ผิด
    printf("%d\n", x == z); 
    //เปรียบเทียค่าเเล้วได้ 1 เพราะ 12 == 12 ถูก
    printf("%d\n", x != y); 
    //เปรียบเทียค่าเเล้วได้ 1 เพราะ 12 != 7 ถูก
    printf("%d\n", !(2*5 >= y) || (5 != (5/3))); 
    //เปรียบเทียค่าเเล้วได้ 1 
    //เพราะ !(10 >= 7) || (5 != 1) ได้ !1 || 1 ได้ 0 || 1 เท่ากับ 1 
    printf("%d\n", !(x < y)); 
    //เปรียบเทียค่าเเล้วได้ 1 เพราะ !(12 < 7) ได้ !0 เท่ากับ 1 
    printf("%d\n", (x + y) > (z * 2)); 
    //เปรียบเทียค่าเเล้วได้ 0 เพราะ 19 > 24 ผิด
    printf("%d\n", (x % 2 == 0) || (y % 2 == 1));
    //เปรียบเทียค่าเเล้วได้ 1 เพราะ (12%2==0) || (7%2==1) ได้ 1 || 1 
    printf("%d\n", (x > y) && (z < y)); 
    //เปรียบเทียค่าเเล้วได้ 0 เพราะ (12 > 7 ) && (12 < 7 ) ได้ 1 || 0 ผิด

    return 0;
}
