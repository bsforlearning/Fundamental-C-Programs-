/******************************************************************
 
 @Bhavanishankar
 
 string  reallocation 
 
 **********************************************************************/int main () 
{
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(7);
   strcpy(str, "INDIA ");
   printf("String = %s,  Address = %u\n", str, str);  // INDIA 222222
   
   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, "IS MY COUNTRY");
   printf("String = %s,  Address = %u\n", str, str);

   free(str);
   
   return(0);
}
