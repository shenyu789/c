#include <stdio.h>

int main() {
    double speed, size;
    printf(
        "please enter the speed of download  in Mb and the size of file in "
        "MB:");
    scanf("%lf %lf", &speed, &size);
    printf(
        "At %.2lf megabits per seconds, a file of %.2lf megabytes downloads in "
        "%.2lf seconds",
        speed, size, (size * 8) / (speed));
    return 0;
}