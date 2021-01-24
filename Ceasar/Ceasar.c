#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char encryptUpper(char c, int key);
char encryptUpperLoop(char d, int newKey);
char encryptLower(char c, int key);
char encryptLowerLoop(char d, int newKey);

int main(int argc, string argv[])
{
    int key = 0;
    int flag = 1;
    string toEncrypt = "";

    // checks the number of comand line prompt values
    if( argc == 2){



        string preKey = argv[1];
        key = atoi(preKey);
        // checking if the entered value is numeric
        for(int i = 0; i < strlen(preKey) ; i++ ){
            if(isdigit(preKey[i])){
                flag = 0;

             }else{
                // exiting the program if the value contains non-numeric characters
                flag = 1;
                printf("Usage: ./caesar key\n");
                return 1;
         }
        }
        if(flag == 0){
            // Read in user input
            toEncrypt = get_string("plaintext: ");
            for(int i = 0; i < strlen(toEncrypt) ; i++ ){
                if(isupper(toEncrypt[i]) && isalpha(toEncrypt[i])){
                    toEncrypt[i] = encryptUpper(toEncrypt[i], key);
                }else if(islower(toEncrypt[i]) && isalpha(toEncrypt[i])){
                    toEncrypt[i] = encryptLower(toEncrypt[i], key);
                }

            }
            printf("ciphertext: %s\n", toEncrypt);
        }
          // printf("Success!\n");
       //  printf("Key: %s\n", preKey);

    }else{
        printf("./ceaser.key\n");
        return 1;
    }

    // printf("numeric key : %d\n", key);

    return 0;
}

char encryptUpper(char c, int key){
    char encrypted = c;

    if((c + key) < 90){
        encrypted = c + key;
    }else{
       encrypted = encryptUpperLoop(c, key);
    }

    return encrypted;

}

char encryptUpperLoop(char d, int newKey){
    int start = 64;
    int sum = d + newKey;
    int move = sum - 90;
    char encrypted = d;


    if((start + move) < 90){
        encrypted = start + move;
    }else{
       encrypted = encryptUpperLoop(start, move);
    }

    return encrypted;

}


char encryptLower(char c, int key){
    char encrypted = c;

    if((c + key) < 122){
        encrypted = c + key;
    }else{
       encrypted = encryptLowerLoop(c, key);
    }

    return encrypted;

}

char encryptLowerLoop(char d, int newKey){
    int start = 96;
    int sum = d + newKey;
    int move = sum - 122;
    char encrypted = d;


    if((start + move) < 122){
        encrypted = start + move;
    }else{
       encrypted = encryptUpperLoop(start, move);
    }

    return encrypted;

}