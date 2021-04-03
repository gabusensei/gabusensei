//Author Gabriel F Plaza
//Caesar Cipher code 
#include <stdio.h>
#include <string.h>
#define SIZE 100 //softcode size of strings/arrays

int main()
{
    char plaintext[SIZE];
    char ciphertext;
    int key;

    printf("Please enter text you wish to encrypt:\n");
    fgets(plaintext,SIZE,stdin);
    printf("Enter key:\n");
    scanf("%d", &key);

    //encryption start
    for(int i=0;i<strlen(plaintext);i++) //for loop to loop through each character of the string 'plaintext'
    {
        ciphertext = plaintext[i];
        if(ciphertext >= 'a' && ciphertext <= 'z') 
        {
            ciphertext = ciphertext + key;
            if(ciphertext>'z')
            {
                ciphertext = ciphertext-'z'+'a'-1; //ensure it returns to alphabet
            }
            plaintext[i]=ciphertext;
        }
        else if(ciphertext >='A' && ciphertext <= 'Z') //else if statement for capital letters
        {
            ciphertext = ciphertext + key;
            if(ciphertext>'Z')
            {
                ciphertext = ciphertext-'Z'+'A'-1;
            }
            plaintext[i]=ciphertext;
        }
    
    }

    printf("Your encrypted text is:%s", plaintext); //print result 
    return 0;
}//end main
