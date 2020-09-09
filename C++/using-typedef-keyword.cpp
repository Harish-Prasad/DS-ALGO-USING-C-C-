/*Program to demonstrate the working of *typefdef* keyword*/

#include <stdio.h>
#include <string.h>
 
typedef struct Books 
{
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
} Book;
 
int main( ) 
{

   Book b;
 
   strcpy( b.title, "C Programming");
   strcpy( b.author, "Harish Prasad"); 
   strcpy( b.subject, "Programming using c language ");
   b.book_id = 45;
 
   printf( "Book title   : %s\n", b.title);
   printf( "Book author  : %s\n", b.author);
   printf( "Book subject : %s\n", b.subject);
   printf( "Book book_id : %d\n", b.book_id);

   return 0;
}
