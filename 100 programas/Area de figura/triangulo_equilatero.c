#include<stdio.h>
#include<math.h>

int main()
{
    int side;
    float area,r_4;

    r_4 =sqrt(3)/4;

    printf("\nEntre com o comprimento do lado: ");
    scanf("%d", &side);

    area = r_4*side*side;
    printf("Area do tringulo equilatero: %.2f", area);
    return(0);
}
