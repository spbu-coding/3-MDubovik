#include <math.h>
#include <stdio.h>

void optimal_float_experiment() {
    int count = 0;
    float x1 = 1.0f, y1 = 1.0f, delta = 0.0001f;
    float x2, y2, difference;
    do {
        y2 = (0.0001f + delta) / 0.0001f;
        x2 = 2 - y2;
        difference = sqrtf(pow((x2 - x1), 2) + pow ((y2 - y1), 2));
        printf("x2:%0.20f y2:%0.20f \n", x2, y2);
        printf("difference:%0.20f \n", difference);
        delta/= 2.0f;
        count ++;
    } while (difference > 0.000001f);
    printf("Колическво шагов %d\n",count);
}
void optimal_double_experiment() {
    int count = 0;
    double x1 = 1, y1 = 1, delta = 0.0001;
    double x2, y2, difference;
    do {
        y2 = (0.0001 + delta) / 0.0001;
        x2 = 2 - y2;
        difference = sqrt(pow((x2 - x1), 2) + pow ((y2 - y1), 2));
        printf("x2:%0.20lf y2:%0.20lf \n", x2, y2);
        printf("difference:%0.20f \n", difference);
        delta/= 2.0;
        count ++;
    } while (difference > 0.000001);
    printf("Колическво шагов %d\n",count);
}

void float_experiment() {
    int count = 0;
    float x1 = 1.0f, y1 = 1.0f, delta = 0.0001f;
    float x2, y2, difference;
    do {
        y2 = ((2.0001f + delta) - 2)/ 0.0001f;
        x2 = 2 - y2;
        difference = sqrtf(pow((x2 - x1), 2) + pow ((y2 - y1), 2));
        printf("x2:%0.20f y2:%0.20f \n", x2, y2);
        printf("difference:%0.20f \n", difference);
        delta/= 2.0f;
        count ++;
    } while (difference > 0.000001f && count < 50);
    printf("Колическво шагов %d\n",count);
}
void double_experiment() {
    int count = 0;
    double x1 = 1, y1 = 1, delta = 0.0001;
    double x2, y2, difference;
    do {
        y2 = ((2.0001 + delta) - 2)/ 0.0001;
        x2 = 2 - y2;
        difference = sqrt(pow((x2 - x1), 2) + pow ((y2 - y1), 2));
        printf("x2:%0.20lf y2:%0.20lf \n", x2, y2);
        printf("difference:%0.20f \n", difference);
        delta/= 2.0;
        count ++;
    } while (difference > 0.000001);
    printf("Колическво шагов %d\n",count);
}


int main() {
    printf("Optimal float experiment: \n");
    optimal_float_experiment();
    printf("Optimal double experiment: \n");
    optimal_double_experiment();
    printf("Float experiment: \n");
    float_experiment();
    printf("Double experiment: \n");
    double_experiment();
    return 0;
}
