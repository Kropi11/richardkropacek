# richardkropacek

## task01
1

## task02
Bitové posuny:
 - 1<<0 = 0b1
 - 1<<1 = 0b10
 - 1<<i = 0b100... (i krát 0)
 - 60>>4: 60 = 0b101000; 60>>4 = 0b10 (poslední 4 bity zahodíme)

`byte x`: horní 4 bity: `x>>4`, dolní 4 bity `x & 0xF`

## task03
Nahrál jsem poslední verzi mého programu na Task03, bohužel mám problém s tím, že mi program ignoruje některé IF funkce (zkoušel jsem je i prohazovat, bohužel bez pozitivního výsledku). Tento problém jsem konzultoval se spolužáky, bohužel ani ti nevědí jak se s problémem vypořádat. 
Děkuji za případný nález chybného kódy v hodině PVA.

## task04
V pořádku. Upravte pouze kód na základě tohoto komentáře
<i>As with all bounds-checked functions, strcat_s is only guaranteed to be available if __STDC_LIB_EXT1__ is defined by the implementation and if the user defines __STDC_WANT_LIB_EXT1__ to the integer constant 1 before including string.h.</i>

Z [tohoto zdroje](https://en.cppreference.com/w/c/string/byte/strcat)

## task05
Funkční
## task06
-
## Vector
Splněno, čeká na kontrolu.
