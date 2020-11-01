/*
 * File:   main.c
 * Author: ArturoBuganza
 *
 * Created on October 31
 */

#define _XTAL_FREQ 1000000
#define DELAY_SWEEP 300

void portInit(void);
void __interrupt(high_priority) high_isr(void);
void larsonDisplay(void);
