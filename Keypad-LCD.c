#include <mega32.h>
#include <delay.h>
#include <lcd.h>
#asm
   .equ __lcd_port = 0x1B;
#endasm

int key();
char c;
char *hello = "Ready...";

void main(void)
{

// Characters/line: 16
lcd_init(16);
DDRD = 0x0F;
lcd_puts(hello);
delay_ms(150);
lcd_clear();

while (1)
      {
      c = key();
      if (c == 0){
            lcd_putchar('7');
            delay_ms(50);
      } else if (c == 1){
            lcd_putchar('8');
            delay_ms(50);
      } else if (c == 2){
            lcd_putchar('9');
            delay_ms(50);
      } else if (c == 3){
            lcd_putchar('/');
            delay_ms(50);
      } else if (c == 4){
            lcd_putchar('4');
            delay_ms(50);
      } else if (c == 5){
            lcd_putchar('5');
            delay_ms(50);
      } else if (c == 6){
            lcd_putchar('6');
            delay_ms(50);
      } else if (c == 7){
            lcd_putchar('*');
            delay_ms(50);
      } else if (c == 8){
            lcd_putchar('1');
            delay_ms(50);
      } else if (c == 9){
            lcd_putchar('2');
            delay_ms(50);
      } else if (c == 10){
            lcd_putchar('3');
            delay_ms(50);
      } else if (c == 11){
            lcd_putchar('-');
            delay_ms(50);
      } else if (c == 12){
            lcd_clear();
            delay_ms(50);
      } else if (c == 13){
            lcd_putchar('0');
            delay_ms(50);
      } else if (c == 14){
            lcd_putchar('=');
            delay_ms(50);
      } else if (c == 15){
            lcd_putchar('+');
            delay_ms(50);
      }

      }
}

int key(void){
    while(1){
        PORTD.0 = 1;
        PORTD.1 = 0;
        PORTD.2 = 0;
        PORTD.3 = 0;
        
        if (PIND.4==1){
            return 0;
            delay_ms(80);
        }else if (PIND.5==1){
            return 1;
            delay_ms(80);
        }else if (PIND.6==1){
            return 2;
            delay_ms(80);
        }else if (PIND.7==1){
            return 3;
            delay_ms(80);
        }
        
        PORTD.0 = 0;
        PORTD.1 = 1;
        PORTD.2 = 0;
        PORTD.3 = 0;
        
        if (PIND.4==1){
            return 4;
            delay_ms(80);
        }else if (PIND.5==1){
            return 5;
            delay_ms(80);
        }else if (PIND.6==1){
            return 6;
            delay_ms(80);
        }else if (PIND.7==1){
            return 7;
            delay_ms(80);
        }

        PORTD.0 = 0;
        PORTD.1 = 0;
        PORTD.2 = 1;
        PORTD.3 = 0;
        
        if (PIND.4==1){
            return 8;
            delay_ms(80);
        }else if (PIND.5==1){
            return 9;
            delay_ms(80);
        }else if (PIND.6==1){
            return 10;
            delay_ms(80);
        }else if (PIND.7==1){
            return 11;
            delay_ms(80);
        }

        PORTD.0 = 0;
        PORTD.1 = 0;
        PORTD.2 = 0;
        PORTD.3 = 1;
        
        if (PIND.4==1){
            return 12;
            delay_ms(80);
        }else if (PIND.5==1){
            return 13;
            delay_ms(80);
        }else if (PIND.6==1){
            return 14;
            delay_ms(80);
        }else if (PIND.7==1){
            return 15;
            delay_ms(80);
        }
    }
}
