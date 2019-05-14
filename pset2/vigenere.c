#include <cs50.h>
#include <stdio.h>

/*
The Vigenere encryption uses a keyphrase to encrypt messages. 
For example, if the keyword is "dog" the shift would be
4 (d) -> 14 (o) -> 6 (g)
So if message was "hello world" it would encrypt by:
shift h by 3 (d)
shift e by 14 (o)
shift l by 6 (g)
shift l by 3 (d)
etc...

A is a shift of 0
Z is a shift of 25

At execution of program the user will type a keyword to use for encryption
(i.e. /vigenere.c testkey)
	> If user does not input keyword OR 
		inputs non-alpha characters (including spaces, digits, symbols)
	  	end the execution with message "Usage ./vigenere keyword"

After execution, prompt user for plaintext "plaintext: "
Then program will use the keyword to encrypt the message and display the
message on the next line as "ciphertext: ___________"
*/

bool isAlpha(string str, int str_length);
char rotateChar(char text, char key);
int encrypt(string text, string keyword);

int main(int argc, string argv[])
{
	// Ensure user inputs only one encryption keyword during execution
	if(argc != 2){
		printf("Usage ./vigenere keyword\n");
		return 1;
	}
	int keyword = argv[1];
	int keyword_len = strlen(keyword);
	char current_key = keyword[0];

	// Ensure keyword is alphabetic
	if(!isAlpha(keyword, strlen(keyword))){
		printf("Usage ./vigenere keyword\n");
		return 1;
	}

	// Ask user for message to encrypt
	string plaintext = get_string("Input text to encrypt: ");
	int text_len = strlen(plaintext);
	
	// Copy text into ciphertext to iterate through
	char ciphertext[text_len];
	strcpy(ciphertext, plaintext);

	// Iterate over entire text that needs encrypting
	encrypt(cipertext);
	printf("Ciphertext is: %s\n", ciphertext);

}


// Function to check if string is all alpha characters
bool isAlpha(string str, int str_length){

	// Copy string into array of char
	// Iterate through string to find if all char are alpha
	for(int i = 0; i < str_length; i++){
		printf("%c", str[i]);
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
			return false;
		}
	}
	return true;
}


char rotateChar(char ch, char key){
	
	// Define orignal case of char
	bool is_uppercase = false;
	if(charactte >= 'A' && ch <= 'Z'){
		is_uppercase = true;
	}

	// Rotate char
	char rotated_ch = upper(ch) + key - 'A';

	// Return the original case of the character
	if(is_uppercase){
		return rotated_ch;
	}
	return lower(rotated_ch);

}
	// Encrypt message}
int encrypt(string text, string key, int text_len, int key_len){
	// can i modify string directly? or do i have to copy and make an array?
	// i should be able to modify directly
	for(int i = 0, j = 0; i != '\0'; i++, j++)
		rotateChar(text[i], key[j]);
		// Ensure key is coninually rotated through
		if (j == key_len){
			j = 0;
		}
}