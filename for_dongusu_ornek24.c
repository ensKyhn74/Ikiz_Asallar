#include <stdio.h>
// klavyeden girilen 2 sayı ikiz asal mı?
// ikiz asal: aralarındaki fark 2 olan asal sayı çiftidir.(3,5),(5,7),(11,13) gibi
// (2,3) ikiz asal çifti değil çünkü aralarındaki fark 1

int main() 

{
 
 int m,n; // m: 1.sayı  n: 2.sayı
 int i;
 int AsalSorgu = 0; // 1.sayı için tanımlandı
 int Asal_Sorgu = 0; // 2.sayı için tanımlandı

 printf("1.sayiyi girin: ");
 scanf("%d",&m);

 printf("2.sayiyi girin: ");
 scanf("%d",&n);
 
if((m <= 0 && n <= 0) || (m <= 0 && n > 0) || (m > 0 && n <= 0) || (m == n))
{
 if(m > n)
 {
  printf("(%d,%d) ikiz asal degil",n,m);
 }
 
 else if(n > m)
 {
  printf("(%d,%d) ikiz asal degil",m,n);
 }
 
 else if(m == n)
 {
  printf("(%d,%d) ikiz asal degil",n,m);
 }
}
 
if(m >= 3 && n >= 3)  
{
 for(i = 2 ; i < m ; i++)
 {
  if(m % i == 0)
  {
   AsalSorgu = 1; // m asal değil
   break; 
  }
 }
    
 for(i = 2 ; i < n ; i++)
 {
  if(n % i == 0)
  {
   Asal_Sorgu = 1; // n asal değil
   break;   
  }
 }
}
   
if(AsalSorgu==0 && Asal_Sorgu==0 && m>=3 && n>=3) 
{
 if(n > m && n - m == 2)
 {
  printf("(%d,%d) ikiz asal",m,n);
 }
 
 else if(m > n && m - n == 2)
 {
  printf("(%d,%d) ikiz asal",n,m);
 }
}
  
if(((AsalSorgu==0 && Asal_Sorgu==1) || (AsalSorgu==1 && Asal_Sorgu==0) || (AsalSorgu==1 && Asal_Sorgu==1) && ((m - n == 2) || (n - m == 2))))
{
 if(m > n)
 {
  printf("(%d,%d) ikiz asal degil",n,m);
 }
 
 else if(n > m)
 {
  printf("(%d,%d) ikiz asal degil",m,n);
 }
}

if((m==2 && n==3))
{
 printf("(%d,%d) ikiz asal degil",m,n);   
}

if((m==3 && n==2))
{
 printf("(%d,%d) ikiz asal degil",n,m);   
}

 return 0;

}