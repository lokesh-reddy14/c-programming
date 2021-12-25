 #include <stdio.h>
int main() {
     char input, alphabet = 'A';
   int i, j, rows,a, b, alp,x,y,z,w;
 
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
    printf("Enter an uppercase character you want to print in the last row: ");
   scanf(" %c", &input);
   printf("the number of numbers ");
    scanf("%d",&w);
    printf("*\n");
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
      
      
   }
   
  for (a = 1; a <= (input - 'A' + 1); ++a) {
      for (b = 1; b <= a; ++b) {
         printf(" %c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }
   
   
   z=1;
  for ( x=1 ;x<w;x++)
  {
    for(y=1;y<=x;y++)
    {
      printf("%d",z++);
    }
    printf("\n");
  }
  return 0;
}
