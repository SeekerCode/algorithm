# 行编辑程序

------------------------------;

一个间单的行编铜程序的功能是。按受用户从终编输人的程序成数据。并存人用户的数据区。由于用户在终端上进行输人时。不能保证不出差错，因此，若在编辑程序中，“每接受一个字符即存人用户数据区”的做法是然不是最恰当的。较好的做法是，设立一个输人缓冲区，用以按受用户输人的一行字符，然后逐行在人用户数据区。允许用户输人出差并在发现有误时可以及时更正。例如。当用户发现刚刚键人的一个字符是错的时，可补进一个退格符“并”。以表示前一个字符无效:如果发现当前键人的行内差错较多或难以补救。则可以键人一个退行符“@”。以表示当前行中的字符均无效。例如，假设从终端接受了这样两行字符:  
whli##ilr#e(s#*s)  
    outcha@putchar(*s=#++);  
则实际有效的是下列两行：  
while(*s)  
    putchar(*s++)  
