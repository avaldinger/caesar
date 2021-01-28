Caesar - Encrypting app
==== 

Simple text encryption application written in C as part of the [![CS50 Badge](https://img.shields.io/badge/-CS50-red)](https://cs50.harvard.edu) class problem sets.

Table of content
----
* [General info](#general-info)
* [Setup](#setup)
* [Technologies](#technologies)

### General info

Text encrypting program written in C. The aim of the application is to encrypt texts using a numeric key entered by the user. The output is the encrypted cipher text which can only be decrypted if the receiver of the messages knows the key used for encryption. The algorithm using the ASCII character encoding and differentiates between lower case and upper case letters.


### Setup

The application can be ran locally or using the [![CS50 Badge](https://img.shields.io/badge/-CS50-red)](https://cs50.harvard.edu) <a href="https://ide.cs50.io">IDE</a> after logging in with your GitHub account.

To run the program:
 1. It needs to be complied: `$ make caesar.c`
 2. Started with the selected key as an argument: `$ ./caesar key`
 3. Enter the text you would like to encrypt: `plaintext: "example"`
 
### Technologies
 
 Libraries:
 * stdio.h
 * <a href="https://github.com/cs50/libcs50">cs50.h</a>
 * string.h
 * ctype.h
 * stdlib.h
 * [![C](https://img.shields.io/badge/-C-blue)](https://www.cprogramming.com/)
