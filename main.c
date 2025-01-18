#include <stdint.h>
#include <stdbool.h>
#include "inc/tm4c123gh6pm.h"
#include "driverlib/sysctl.h"
#include "driverlib/fpu.h"

int main(void) {
    // Floating-Point Unit'u etkinle�tir
    FPUEnable();
    FPUStackingEnable();

    // Sistem saatini ayarla (�rne�in, 50 MHz)
    SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_OSC_MAIN | SYSCTL_XTAL_16MHZ);

    // Floating-point de�i�kenler
    float number1 = 12.5f;
    float number2 = 3.4f;
    float result_add, result_sub, result_mul, result_div;

    // Floating-point i�lemleri
    result_add = number1 + number2; // Toplama
    result_sub = number1 - number2; // ��karma
    result_mul = number1 * number2; // �arpma
    result_div = number1 / number2; // B�lme

    // Sonsuz d�ng� (sonu�lar� burada bir debugger ile g�zlemleyebilirsiniz)
    while (1) {
    }
}

