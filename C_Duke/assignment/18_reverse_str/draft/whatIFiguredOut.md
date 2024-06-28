All things are nubmers
0(dec)
char: '\0' (no visible character, as it is the null character)
int: 0
float: 0.000000

48(dec)
char: '0'
int: 48
float: 48.000000

48 is 110000
110000 is 1.1 * 2^5
positive, signed bit is 0
exponent: 5+127(which is the bias)=132(decimal)=10000100(binaray)
Mantissa: The mantissa (or significand) is the fractional part after the binary point in the normalized form (1.1). Remove the leading 1 and pad the remaining with zeroes to fit 23 bits:
100,0000,0000,0000,0000,0000
Putting it all together, the IEEE 754 single-precision representation of thefloat 48 is:
```mathmatica
Sign Bit | Exponent    | Mantissa (Significand)
0        | 10000100    | 10000000000000000000000
```


