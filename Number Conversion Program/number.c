#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <windows.h>
//DECIMAL
int check_if_dec(const char num[]){
	int i = 0;
	int dec;
	while (num[i] != '\0'){
		dec = num[i];
		if (!isdigit(dec)){
			return 0;
		}
		i++;
	}
    return 1;
}

void dec_to_bin(int int_num){
		int i = 0;
		int j;
		int bin[64];
		
	if (int_num == 0){
		gotoxy(22,12);
    	printf("Binary value:");
    	drawSBox(21, 13, 64, 15);
		gotoxy(23,14);
		printf("%i", int_num);
		return;
	}
	
	while (int_num > 0){
		bin[i] = int_num % 2;
		int_num/=2;
		i++;
	}
	
	gotoxy(22,12);
    printf("Binary value:");
    drawSBox(21, 13, 64, 15);
    gotoxy(23,14);
	for (j = i-1; j >= 0; j--){
		printf("%d", bin[j]);
	}
}

//BINARY

int string_size(char num[]){
	int ctr = 0;
	while (num[ctr] != '\0'){
		ctr++;
	}
	return ctr;
}

int bin_check(char num[], int size){
	int res, i;
	long int int_num;
	
	res = check_if_dec(num);
	
	if (res == 0){
		return 0;
	}
	
	for (i = 0; i < size; i++){
		if (num[i] != '0' && num[i] != '1'){
			return 0;
		}
	}
	return 1;
}

long int bin_to_dec(char num[]){
	long int dec = 0;
	int i = 0;
	
	while (num[i] != '\0'){
		dec = dec*2 + (num[i] - '0');
		i++;
	}
	gotoxy(22,12);
    printf("Decimal value:");
    drawSBox(21, 13, 64, 15);
    gotoxy(23,14);
	printf("%i", dec);
	return dec;
}

//OCTAL
void dec_to_oct(long int int_num){
	int i = 0;
	int j;
	int oct[64];
	
	if (int_num == 0){
		gotoxy(22,12);
    	printf("Octal value:");
    	drawSBox(21, 13, 64, 15);
		gotoxy(23,14);
		printf("%i", int_num);
		return;
	}
	
	while (int_num > 0){
		oct[i] = int_num % 8;
		int_num/=8;
		i++;
	}
	
	gotoxy(22,12);
    printf("Octal value:");
    drawSBox(21, 13, 64, 15);
    gotoxy(23,14);
    
	for (j = i-1; j >= 0; j--){
		printf("%i", oct[j]);
	}
}


int oct_check(char num[]){
	int i = 0;
	while (num[i] != '\0'){
		if (!isdigit(num[i])){
			return 0;
		}
		if (num[i] == '8' || num[i] == '9'){
			return 0;
		}
		i++;
	}
	return 1;
}

long int oct_to_dec(char num[]){
	long int dec = 0;
	int i = 0;
	
	while (num[i] != '\0'){
		dec = dec*8 + (num[i] - '0');
		i++;
	}
	gotoxy(22,12);
    printf("Decimal value:");
    drawSBox(21, 13, 64, 15);
    gotoxy(23,14);
	printf("%i", dec);
	return dec;
}

//hex

int hex_check(char num[]){
	int i = 0;
	while (num[i] != '\0'){
		if (!isxdigit(num[i])){
			return 0;
		}
		i++;
	}
	return 1;
}
void dec_to_hex(long int int_num){
	int i = 0;
	int d, j;
	char hex[64];
	
	if (int_num == 0){
		gotoxy(22,12);
    	printf("Hexadecimal value:");
    	drawSBox(21, 13, 64, 15);
		gotoxy(23,14);
		printf("%i", int_num);
		return;
	}
	
	while (int_num != 0){
		d = int_num % 16;
		if (d < 10){
			hex[i] = d + 48;
		} else {
			hex[i] = d - 10 + 65;
		}
		int_num/=16;
		i++;
	}
	gotoxy(22,12);
    printf("Octal value:");
    drawSBox(21, 13, 64, 15);
    gotoxy(23,14);
	for (j = i-1; j >= 0; j--){
		printf("%c", hex[j]);
	}
}

long int hex_to_dec(char num[]){
	long int dec = 0;
	int i = 0;
	int intd;
	char d;
	
	while (num[i] != '\0'){
		d = num[i];
		
		if (d >= '0' && d <= '9'){
			intd = d - '0';
		} else if (d >= 'A' && d <= 'F'){
			intd = d - 'A' + 10;
		} else {
			intd = d - 'a' + 10;
		}
		
		dec = dec * 16 + intd;
		i++;
	}
	gotoxy(22,12);
    printf("Decimal value:");
    drawSBox(21, 13, 64, 15);
    gotoxy(23,14);
	printf("%i", dec);
	return;
}



