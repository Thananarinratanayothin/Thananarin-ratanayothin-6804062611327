#include <stdio.h>

int main() {
 
    const double discountA = 0.05;
    const double discountB = 0.15;  
    const double discountC = 0.30; 


    double price1 = 600.0;
    double price2 = 799.0;
    double price3 = 200.0;

    double finalPrice1 = price1 * (1.0 - discountA);
    double finalPrice2 = price2 * (1.0 - discountB);
    double finalPrice3 = price3 * (1.0 - discountC);
    double totalPayment = finalPrice1 + finalPrice2 + finalPrice3;

    
    printf("1. ราคาสินค้าชิ้นที่ 1: %.2f\n", price1);
    printf("2. ยอดที่ต้องชำระโปรโมชัน A (ลด %.0f%%): %.2f\n", discountA * 100, finalPrice1);
    printf("3. ราคาสินค้าชิ้นที่ 2: %.2f\n", price2);
    printf("4. ยอดที่ต้องชำระโปรโมชัน B (ลด %.0f%%): %.2f\n", discountB * 100, finalPrice2);
    printf("5. ราคาสินค้าชิ้นที่ 3: %.2f\n", price3);
    printf("6. ยอดที่ต้องชำระโปรโมชัน C (ลด %.0f%%): %.2f\n", discountC * 100, finalPrice3);
    printf(" ยอดรวมที่ต้องชำระทั้งหมด: %.2f\n", totalPayment);
   

    return 0;
}