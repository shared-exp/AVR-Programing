#include <mega32.h>
#include <delay.h>

int i = 0;
void main() {

DDRA = 0xFF;
DDRB = 0xFF; 
DDRC = 0xFF; 
DDRD = 0xFF; 
PORTA = 0b00000001;
PORTB = 0b00000001;
PORTC = 0b00000001;
PORTD = 0b00000001;

while (1) {
    delay_ms(10);
    i+=10;    
    if (i%60==0){
        if (PORTA==0){
        PORTA = 0b00000001;
        }
        PORTA = PORTA << 1;    
    }
    else if (i%170==0){
        if (PORTB==0){
        PORTB = 0b00000001;
        }
        PORTB = PORTB << 1;    
    }
    else if (i%290==0){
        if (PORTC==0){
        PORTC = 0b00000001;
        }
        PORTC = PORTC << 1;    
    }
    else if (i%430==0){
        if (PORTD==0){
        PORTD = 0b00000001;
        }
        PORTD = PORTD << 1;
        }
    }          
}
