#include <16F877A.h>
#fuses HS, NOWDT, NOPROTECT, NOCPD
#use delay(clock=20000000)
#use fast_io(b)

void main() {
/*
Aritmeticos
| Operador | Descripci�n                                |
|----------|--------------------------------------------|
| +        | Suma                                       |
| -        | Resta                                      |
| *        | Multiplicaci�n                             |
| /        | Divisi�n                                   |
| %        | M�dulo (Resto de una divisi�n entera)      |
| ++       | Incrementa en uno el valor del operando    |
| --       | Decrementa en uno el valor del operando    |
| sizeof   | Determina el tama�o, en bytes, un operando |
*/
   int a = 5;
   int b = 3;
   int suma = a + b;
   int mult = a * b;
   int mod = a % 2;
   int c = b++;
/*
Relacionales
| Operador | Descripci�n           |
|----------|-----------------------|
| <        | Menor que             |
| >        | Mayor que             |
| <=       | Menor o igual que     |
| >=       | Mayor o igual que     |
| ==       | Igual a               |
| �=       | Distinto de           |
| ?:       | Expresion condicional |
*/
   int mayor = a > b;
   int igual = a == b;
/*
Asignaci�n
| Operador | Descripci�n                                                                |
|----------|----------------------------------------------------------------------------|
| +=       | Asignaci�n de suma (x+=y es lo mismo que x=x+y)                            |
| -=       | Asignaci�n de resta (x-=y es lo mismo que x=x-y)                           |
| *=       | Asignaci�n de multiplicaci�n (x*=y es lo mismo que x=x*y)                  |
| /=       | Asignaci�n de divisi�n (x/=y es lo mismo que x=x/y)                        |
| %=       | Asignaci�n de resto de divisi�n (x%=y es lo mismo que x=x%y)               |
| <<=      | Asignaci�n de desplazamiento a la izquierda (x<<=y es lo mismo que x=x<<y) |
| >>=      | Asignaci�n de desplazamiento a la derecha (x>>=y es lo mismo que x=x>>y)   |
| &=       | Asignaci�n de AND de bits (x&=y es lo mismo que x=x&y)                     |
| |=       | Asignaci�n de OR de bits  (x|=y es lo mismo que x=x|y)                     |
| ^=       | Asignaci�n de OR exclusivo de bits (XOR) (x^=y es lo mismo que x=x^y)      |
*/
   a+=b;
   a = a + b;
/*
L�gicos
| Operador | Descripci�n |
|----------|-------------|
| !        | NOT         |
| &&       | AND         |
| ||       | OR          |
a && b
*/
/*
Bits
| Operador | Descripci�n                        |
|----------|------------------------------------|
| ~        | Negaci�n de bits (complemento a 1) |
| &        | AND                                |
| |        | OR                                 |
| ^        | XOR                                |
| >>       | Desplazamiento a la derecha        |
| <<       | Desplazamiento a la izquierda      |
*/
/*
Punteros
| Operador | Descripci�n          |
|----------|----------------------|
| &        | Direcci�n            |
| *        | Inderecci�n          |
| ->       | Puntero a estructura |
*/
   int *x;
   x = &b;
   port_b_pullups(true);
   set_tris_b(0);
   // bucle infinito
   while (true) {
      output_high(pin_b7);
      delay_ms(100);
      output_low(pin_b7);
      delay_ms(100);
   }
}

/*
Precedencia de los operadores
| Expresiones                                     | en           | orden       | descendente  | de     | precedencia |
|-------------------------------------------------|--------------|-------------|--------------|--------|-------------|
| (expr)                                          |              |             |              |        |             |
| !expr                                           | ~expr        | ++expr      | expr++       | --expr | expr --     |
| (type)expr                                      | *expr        | &value      | sizeof(type) |        |             |
| expr*expr                                       | expr/expr    | expr%expr   |              |        |             |
| expr+expr                                       | expr-expr    |             |              |        |             |
| expr<<expr                                      | expr>>expr   |             |              |        |             |
| expr<expr                                       | expr<=expr   | expr>expr   | expr>=expr   |        |             |
| expr == expr                                    | expr!=expr   |             |              |        |             |
| expr&expr                                       |              |             |              |        |             |
| expr^expr                                       |              |             |              |        |             |
| expr | expr                                     |              |             |              |        |             |
| expr&& expr                                     |              |             |              |        |             |
| expr || expr                                    |              |             |              |        |             |
| expr ? expr: expr                               |              |             |              |        |             |
| value = expr                                    | value+=expr  | value-=expr |              |        |             |
| value*=expr                                     | value/=expr  | value%=expr |              |        |             |
| value>>=expr                                    | value<<=expr | value&=expr |              |        |             |
| value^=expr                                     | value|=expr  | expr,expr   |              |        |             |
*/



