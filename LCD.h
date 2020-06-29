/*
DIO_SetPortValue(LCD_PORT,

*/
/* INSTRUCTIONS(COMMANDS)  */

#define UNINIT -100

#define Data_port UNINT
#define 

#define CLEAR 			0x01 
#define Reset_Cursor	0x03
#define EntryModeSet    0x06
#define Display			0x0F
#define 

void LCD_Init(void) ;
void LCD_SendCommand (U8 Command);
void LCD_SendData (char Char);
void LCD_PrintString(char *String);
void LCD_PrintNumber(long int Number);