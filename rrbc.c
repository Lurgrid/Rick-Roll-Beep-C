#include <stdlib.h>
#include <windows.h>
#include <stdio.h>

#define quarter 500
#define doteighth 375
#define eighth 250
#define sixteenth 125

#define f3 349
#define g3 392
#define a3 440
#define bflat3 466
#define c4 523
#define d4 587
#define eflat4 622
#define e4 659
#define f4 698
#define g4 784
#define a4 880

int main(void) {
    Beep(g3, eighth);
    Beep(a3, eighth);
    Beep(bflat3, eighth);
    Beep(bflat3, eighth);
    Beep(c4, eighth);
    Beep(a3, doteighth);
    Beep(g3, sixteenth);
    Beep(f3, eighth + quarter + quarter);
    Sleep(750);
    Beep(g3, eighth);
    Beep(g3, eighth);
    Beep(a3, eighth);
    Beep(bflat3, eighth);
    Beep(g3, quarter);
    Beep(f3, eighth);
    Beep(f4, eighth);
    Sleep(250);
    Beep(f4, eighth);
    Beep(c4, eighth);
    Sleep(1250);
    Beep(g3, eighth);
    Beep(g3, eighth);
    Beep(a3, eighth);
    Beep(bflat3, eighth);
    Beep(g3, eighth);
    Beep(bflat3, eighth);
    Beep(c4, eighth);
    Sleep(250);
    Beep(a3, eighth);
    Beep(g3, eighth);
    Beep(f3, eighth + quarter);
    Sleep(750);
    Beep(g3, eighth);
    Beep(g3, eighth);
    Beep(a3, eighth);
    Beep(bflat3, eighth);
    Beep(g3, eighth);
    Beep(f3, quarter);
    Beep(c4, eighth);
    Beep(c4, eighth);
    Beep(c4, eighth);
    Beep(d4, eighth);
    Beep(c4, quarter);
    Sleep(500);
    Beep(bflat3, quarter + quarter + eighth);
    Beep(c4, eighth);
    Beep(d4, eighth);
    Beep(bflat3, eighth);
    Beep(c4, eighth);
    Beep(c4, eighth);
    Beep(c4, eighth);
    Beep(d4, eighth);
    Beep(c4, quarter);
    Beep(f3, quarter);
    Sleep(1000);
    Beep(g3, eighth);
    Beep(a3, eighth);
    Beep(bflat3, eighth);
    Beep(g3, eighth);
    Sleep(250);
    Beep(c4, eighth);
    Beep(d4, eighth);
    Beep(c4, quarter + eighth);
    Beep(f3, sixteenth);
    Beep(g3, sixteenth);
    Beep(bflat3, sixteenth);
    Beep(g3, sixteenth);
    Beep(d4, doteighth);
    Beep(d4, doteighth);
    Beep(c4, eighth + quarter);
    Beep(f3, sixteenth);
    Beep(g3, sixteenth);
    Beep(bflat3, sixteenth);
    Beep(g3, sixteenth);
    Beep(c4, doteighth);
    Beep(c4, doteighth);
    Beep(bflat3, quarter);
    Beep(a3, sixteenth);
    Beep(g3, eighth);
    Beep(f3, sixteenth);
    Beep(g3, sixteenth);
    Beep(bflat3, sixteenth);
    Beep(g3, sixteenth);
    Beep(bflat3, quarter);
    Beep(c4, eighth);
    Beep(a3, eighth + sixteenth);
    Beep(g3, sixteenth);
    Beep(f3, quarter);
    Beep(f3, eighth);
    Beep(c4, quarter);
    Beep(bflat3, quarter + quarter);
    Beep(f3, sixteenth);
    Beep(g3, sixteenth);
    Beep(bflat3, sixteenth);
    Beep(g3, sixteenth);
    Beep(d4, doteighth);
    Beep(d4, doteighth);
    Beep(c4, eighth + quarter);
    Beep(f3, sixteenth);
    Beep(g3, sixteenth);
    Beep(bflat3, sixteenth);
    Beep(g3, sixteenth);
    Beep(f4, quarter);
    Beep(a3, eighth);
    Beep(bflat3, quarter);
    Beep(a3, sixteenth);
    Beep(g3, eighth);
    Beep(f3, sixteenth);
    Beep(g3, sixteenth);
    Beep(bflat3, sixteenth);
    Beep(g3, sixteenth);
    Beep(bflat3, quarter);
    Beep(c4, eighth);
    Beep(a3, eighth + sixteenth);
    Beep(g3, sixteenth);
    Beep(f3, quarter);
    Beep(f3, eighth);
    Beep(c4, quarter);
    Beep(bflat3, quarter + quarter);

    return EXIT_SUCCESS;
}