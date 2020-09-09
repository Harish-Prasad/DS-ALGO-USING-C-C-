#include<stdio.h>

void stringLength()
{
    char *st = "HARISH PRASAD";
    int i;
    for(i=0;st[i]!='\0';i++);
    printf("\n %d is the string length",i);

}

void caseConversion()
{
    /*char st[] = "HARISH PRASAD";*/
    char st[]="HARISH prasad";

    int i;
    for(i=0;st[i]!='\0';i++)
    {
        if(st[i]>=65 && st[i]<=90)
        {
            st[i]=st[i]+32;
        }
        else if(st[i]>=97 && st[i]<=122)
        {
            st[i]=st[i]-32;
        }
    }
    printf("\n %s is the converted string",st);

}

void countVowelsconsonants()
{
    char st[]="harish prasad";

    int i;
    int vowels=0,conso=0;
    for(i=0;st[i]!='\0';i++)
    {
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u')
        {
            vowels++;

        }
        else
        {
                conso++;
        }
    }
                printf("\nno of vowels present are %d and consonants are %d",vowels,conso);
}

void countWord()
{
    char st[]="How are you? Harish welcome iam fine   hello";

    int i;
    int word=1;
    for(i=0;st[i]!='\0';i++)
    {
        if(st[i] == ' ' && st[i-1]!=' ')
        {
            word++;
        }
    }
    printf("\n no of words in a string is %d",word);
}

void validateString()
{

    char st[]="Howareyou;;;;26";

    int i;
    for(i=0;st[i]!='\0';i++)
    {
        if(!(st[i]>=65 && st[i]<=90) && !(st[i]>=97 && st[i]<=122) && !(st[i]>=48 && st[i]<=57) )
        {
            printf("\n it is a invalid String..");
            break;
        }

    }
}
void reverseString()
{

    char old[]="Dog";
    char gold [20];

    int i,l,k=0;
    int length;
    for(i=0;old[i]!='\0';i++);
    i=i-1;
    for(k=0;i>=0;i--)
    {
        gold[k]=old[i];
        k++;

    }
    gold[k+1]='\0';
    puts(gold);

}


int main()
{
    //stringLength();
    //caseConversion();
    //countVowelsconsonants();
    //countWord();
    //validateString();
    reverseString();
  return 0;
}


return 0;
}
