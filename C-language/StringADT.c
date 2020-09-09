// Operation On Strings

#include<stdio.h>

// function for Finding the length of String
int stringLength(char name[])
{
    int i;
    for(i=0;name[i]!='\0';i++);
        return i;


}
//function for  converting lowercase to uppercase
void changeCaseToUpper(char name[])
{
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>=97 && name[i]<=122)
        {
            name[i]-=32;
        }
    }
    puts(name);
    printf("\n");
}
// function for converting uppercase to lower
char changeCaseToLower(char name[])
{
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>=65 && name[i]<=90)
        {
            name[i]+=32;
        }
    }
    puts(name);
    printf("\n");
    return name;
}
// function to count vowels and consonants
void countVowels(char name[])
{
    int vcount=0,ccount=0;
     changeCaseToLower(name);
     for(int i=0;name[i]!='\0';i++)
     {
         if( name[i]=='a' || name[i]=='e' ||name[i]== 'i' ||name[i]== 'o' ||name[i]== 'u' )
            vcount++;
            else if(name[i]>=65 && name[i]<=90 || name[i]>=97 && name[i]<=122)
                    ccount++;
    }
     printf("\nVowels count is %d ",vcount);
     printf("\nconsonants count is %d ",ccount);
}

//function for counting the words present in a given sentence
void countWords(char name[])
{
    printf("\nThis is a given sentence:");
    puts(name);
    int wcount=0;
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]==' ' && name[i-1]!=' ')
            wcount++;
    }
    printf("\nNo of words present in a given sentence are:%d ",wcount+1);
}

//function to reverse the given string using new array
void reverseStringMethod1(char name[])
{
    int i;
    int j=0;
    printf("\nActual String is  ");
    puts(name);
    int size=stringLength(name);
    char reverse[size];
    for(i=size-1;i>=0;i--,j++)
    {
        reverse[j]=name[i];
    }
    reverse[j+1]='\0';
    printf("\nAfter reversing the String become ");
    puts(reverse);
    printf("\n");
}

//function to reverse the given string using existing array
char reverseStringMethod2(char name[])
{
    int i=0;
    int j;
    printf("\nActual String is  ");
    puts(name);
    int size=stringLength(name);
    for(j=size-1;i<j;i++,j--)
    {
        int temp = name[i];
        name[i]=name[j];
        name[j]=temp;
    }
    printf("\nAfter reversing the String become ");
    puts(name);
    printf("\n");
    return name;
}
//function the check whether the String is palindrome or not
void checkPalindrome(char name[])
{
    int i;
    int j=0;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>=65 && name[i]<=90)
        {
            name[i]+=32;
        }
    }
    printf("\nActual String is  ");
    puts(name);
    int size=stringLength(name);
    char reverse[size];
    for(i=size-1;i>=0;i--,j++)
    {
        reverse[j]=name[i];
    }
    reverse[j+1]='\0';
    int k;
     for(i=0,k=0;(name[i]!='\0' && reverse[k]!='\0');i++,k++)
        {
            if(name[i] != reverse[k])
            {
                printf("\nGiven string is not a Palindrome");
                return 0;
            }
        }
        printf("\nGiven String is a Palindrome");
    printf("\n");


}


// main function from where the program Execution begin
int main()
{

    char name[] = {'h','a','r','i','s','h','\0'};
    char secondName[]="PRASAD";
    char scanning[]="Hi how are you?";
    char sentence[]="my name is Harish Prasad i am a student";
    char palin[]="Madam";
    int length = stringLength(name);
    printf("\nLength is %d ",length);
    printf("\nTo Upper Case  ");
    changeCaseToUpper(name);
    printf("\nTo Lower Case  ");
    changeCaseToLower(secondName);
    countVowels(scanning);
    countWords(sentence);
    reverseStringMethod1(secondName);
    reverseStringMethod2(sentence);
    checkPalindrome(palin);/.



return 0;
}
