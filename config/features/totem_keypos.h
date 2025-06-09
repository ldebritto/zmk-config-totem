// Totem key positions cheat sheet
// 
//       0    1    2    3    4              5    6    7    8    9
//      10   11   12   13   14             15   16   17   18   19
// 20   21   22   23   24   25             26   27   28   29   30   31
//                     32   33   34   35   36   37
//
// These will translate to
// 
//      LT0   LT1   LT2   LT3   LT4             RT0  RT1   RT2   RT3   RT4
//      LM0   LM1   LM2   LM3   LM4             RM0  RM1   RM2   RM3   RM4
// OLK  LB0   LB1   LB2   LB3   LB4             RB0  RB1   RB2   RB3   RB4  ROK
//                        LOT   LIT  LHT   RHT  RIT  ROT
//
// Using these key codes instead fo their numbers will allow to use the same code between Sweep and Totem regardless of the different key numbers for each keyboard.

#pragma once

// Left top keys
#define LT0 0
#define LT1 1
#define LT2 2
#define LT3 3
#define LT4 4

// Right top keys
#define RT0 5
#define RT1 6
#define RT2 7
#define RT3 8
#define RT4 9

// Left middle keys
#define LM0 10
#define LM1 11
#define LM2 12
#define LM3 13
#define LM4 14

// Right middle keys
#define RM0 15
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19

// Left bottom keys
#define LB0 21
#define LB1 22
#define LB2 23
#define LB3 24
#define LB4 25

// Right bottom keys
#define RB0 26
#define RB1 27
#define RB2 28
#define RB3 29
#define RB4 30

// Thumbs
#define LIT 33
#define LHT 34
#define RHT 35
#define RIT 36

// Totem's Non 34-key positions

// Totem's outer keys
#define OLK 20
#define ORK 31

// Totem's extra thumb keys
#define LOT 32
#define ROT 37