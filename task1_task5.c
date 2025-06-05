#include <stdio.h>
#include <math.h> // для sqrt()

int main() {
    // 1. Ціна гри зі знижкою 15%
    int originalPrice = 450;
    float discount = 0.15;
    int discountedPrice = originalPrice - (int)(originalPrice * discount);
    printf("Ціна гри зі знижкою: %d грн\n\n", discountedPrice);

    // 2. Обчислення віку
    int birthYear, currentYear = 2025;
    printf("Введіть рік народження: ");
    scanf("%d", &birthYear);
    int age = currentYear - birthYear;
    printf("Ваш вік: %d років\n\n", age);

    // 3. Відстань між двома точками
    float x1, y1, x2, y2;
    printf("Введіть координати першої точки (x y): ");
    scanf("%f %f", &x1, &y1);
    printf("Введіть координати другої точки (x y): ");
    scanf("%f %f", &x2, &y2);
    float distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    printf("Відстань між точками: %.2f\n\n", distance);

    // 4. Кінцева вартість з урахуванням знижки
    float price, percent;
    printf("Введіть вартість товару: ");
    scanf("%f", &price);
    printf("Введіть відсоток знижки: ");
    scanf("%f", &percent);
    float finalPrice = price - (price * percent / 100);
    printf("Кінцева вартість: %.2f грн\n\n", finalPrice);

    // 5. Сума цифр тризначного числа
    int number;
    printf("Введіть тризначне число: ");
    scanf("%d", &number);
    int sum = (number / 100) + ((number / 10) % 10) + (number % 10);
    printf("Сума цифр: %d\n", sum);

    return 0;
}
