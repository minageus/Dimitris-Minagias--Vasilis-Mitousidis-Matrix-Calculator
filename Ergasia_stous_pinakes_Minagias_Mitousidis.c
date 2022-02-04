#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define pi 3.141


int arow,acol,brow,bcol;
void createvector(){
FILE *fptr;
float vector[25];
//Creating the Matrix A
printf("Enter the  size for vector A(<11):\n");
scanf("%d", &arow);


char namea[100];
char nameb[100];

printf("Name vector A, without .txt\n");
scanf("%s", &namea);
strcat(namea, ".txt");
fptr = fopen(namea, "w");
printf("Enter elements of vector\n");
for(int i=0; i<arow; i++){
 scanf("%f",&vector[i]);
fprintf(fptr, "%.0f ", vector[i]);
fprintf(fptr, "\n");
}
fclose(fptr);
char ch=' ';
fptr = fopen(namea, "r");
if (fptr==NULL) exit(2);
printf("Vector A:\n");
while (ch!=EOF) {
ch = fgetc(fptr);
if (ch!=EOF) putchar(ch);
}
fclose(fptr);


//Creating the Vector B
printf("Enter the size for vector B(<11):\n");
scanf("%d", &brow);


printf("Name vector B, without .txt\n");
scanf("%s", &nameb);
strcat(nameb, ".txt");
fptr = fopen(nameb, "w");
printf("Enter elements of vector\n");
for(int i=0; i<brow; i++){
        scanf("%f",&vector[i]);
fprintf(fptr, "%.0f ", vector[i]);
fprintf(fptr, "\n");
}
fclose(fptr);
char cha=' ';
fptr = fopen(nameb, "r");
if (fptr==NULL) exit(2);
printf("Vector B:\n");
while (cha!=EOF) {
cha = fgetc(fptr);
if (cha!=EOF) putchar(cha);
}
fclose(fptr);
}
float magnitude(int a[10],int s);
void vectormagnitude(){
FILE *fptr;

int vectorA[arow], vectorB[brow], num1,num2,k;
//Accessing file a.txt and storing value in
printf("Enter name of vector A\n");
char namea[100];
scanf("%s", namea);
strcat(namea, ".txt");
fptr = fopen(namea, "r");
for(int i=0; i<arow; i++){
fscanf(fptr, "%d", &num1);
vectorA[i] = num1;
}
fclose(fptr);
char ch=' ';
fptr = fopen(namea, "r");
if (fptr==NULL) exit(2);
printf("Vector A:\n");
while (ch!=EOF) {
ch = fgetc(fptr);
if (ch!=EOF) putchar(ch);
}
fclose(fptr);


//Accessing file b.txt and storing the value in matrixB
printf("Enter name of vector B\n");
char nameb[100];
scanf("%s", nameb);
strcat(nameb, ".txt");
fptr = fopen(nameb, "r");
for(int i=0 ; i<brow; i++){
fscanf(fptr, "%d", &num2);
vectorB[i] = num2;
}
fclose(fptr);
char cha=' ';
fptr = fopen(nameb, "r");
if (fptr==NULL) exit(2);
printf("Vector B:\n");
while (cha!=EOF) {
cha = fgetc(fptr);
if (cha!=EOF) putchar(cha);
}
fclose(fptr);


//Matrix Multiplication

printf("Name the final vector\n");
char namec[100];
strcat(namec, ".txt");
scanf("%s", &namec);
fptr = fopen(namec, "w");
fprintf(fptr, "%f ", magnitude(vectorA,arow));

fprintf(fptr, "\n");

fclose(fptr);

char che=' ';
fptr = fopen(namec, "r");
if (fptr==NULL) {exit(2);}
printf("Magnitude of Vector:\n");
while (che!=EOF) {
che = fgetc(fptr);
if (che!=EOF) putchar(che);
}
fclose(fptr);

}



void vectorsubtraction(){
FILE *fptr;
int vectorA[arow], vectorB[brow], num1,num2,k;
//Accessing file a.txt and storing value in matrixA
printf("Enter name of vector A\n");
char namea[100];
scanf("%s", namea);
strcat(namea, ".txt");
fptr = fopen(namea, "r");
for(int i=0; i<arow; i++){
fscanf(fptr, "%d", &num1);
vectorA[i] = num1;
}
fclose(fptr);
char ch=' ';
fptr = fopen(namea, "r");
if (fptr==NULL) exit(2);
printf("Vector A:\n");
while (ch!=EOF) {
ch = fgetc(fptr);
if (ch!=EOF) putchar(ch);
}
fclose(fptr);


//Accessing file b.txt and storing the value in matrixB
printf("Enter name of vector B\n");
char nameb[100];
scanf("%s", nameb);
strcat(nameb, ".txt");
fptr = fopen(nameb, "r");
for(int i=0 ; i<brow; i++){
fscanf(fptr, "%d", &num2);
vectorB[i] = num2;
}
fclose(fptr);
char cha=' ';
fptr = fopen(nameb, "r");
if (fptr==NULL) exit(2);
printf("Matrix B:\n");
while (cha!=EOF) {
cha = fgetc(fptr);
if (cha!=EOF) putchar(cha);
}
fclose(fptr);


//Matrix Multiplication
if( arow != brow ){
printf("Vector subtraction is not possible due to dimension conflicts\n");
}else{
printf("Name the final vector\n");
char namec[100];
strcat(namec, ".txt");
scanf("%s", &namec);
fptr = fopen(namec, "w");
for(int i=0; i<arow; i++){
long long int sum = 0;
sum =  vectorA[i] - vectorB[i];
fprintf(fptr, "%lld ", sum);

fprintf(fptr, "\n");
}
fclose(fptr);

char ch=' ';
fptr = fopen(namec, "r");
if (fptr==NULL) {exit(2);}
printf("The subtraction of the vectors:\n");
while (ch!=EOF) {
ch = fgetc(fptr);
if (ch!=EOF) putchar(ch);
}
fclose(fptr);
}
}


void vectoraddition(){
FILE *fptr;
int vectorA[arow], vectorB[brow], num1,num2,k;
//Accessing file a.txt and storing value in matrixA
printf("Enter name of vector A\n");
char namea[100];
scanf("%s", namea);
strcat(namea, ".txt");
fptr = fopen(namea, "r");
for(int i=0; i<arow; i++){
fscanf(fptr, "%d", &num1);
vectorA[i] = num1;
}
fclose(fptr);
char ch=' ';
fptr = fopen(namea, "r");
if (fptr==NULL) exit(2);
printf("Vector A:\n");
while (ch!=EOF) {
ch = fgetc(fptr);
if (ch!=EOF) putchar(ch);
}
fclose(fptr);


//Accessing file b.txt and storing the value in matrixB
printf("Enter name of vector B\n");
char nameb[100];
scanf("%s", nameb);
strcat(nameb, ".txt");
fptr = fopen(nameb, "r");
for(int i=0 ; i<brow; i++){
fscanf(fptr, "%d", &num2);
vectorB[i] = num2;
}
fclose(fptr);
char cha=' ';
fptr = fopen(nameb, "r");
if (fptr==NULL) exit(2);
printf("Matrix B:\n");
while (cha!=EOF) {
cha = fgetc(fptr);
if (cha!=EOF) putchar(cha);
}
fclose(fptr);


//Matrix Multiplication
if( arow != brow ){
printf("Vector addition is not possible due to dimension conflicts\n");
}else{
printf("Name the final vector\n");
char namec[100];
strcat(namec, ".txt");
scanf("%s", &namec);
fptr = fopen(namec, "w");
for(int i=0; i<arow; i++){
long long int sum = 0;
sum =  vectorA[i] + vectorB[i];
fprintf(fptr, "%lld ", sum);

fprintf(fptr, "\n");
}
fclose(fptr);

char ch=' ';
fptr = fopen(namec, "r");
if (fptr==NULL) {exit(2);}
printf("The addition of the vectors:\n");
while (ch!=EOF) {
ch = fgetc(fptr);
if (ch!=EOF) putchar(ch);
}
fclose(fptr);
}
}

void matrixsubtraction(){
FILE *fptr;
int matrixA[arow][acol], matrixB[brow][bcol], num1,num2,k;
//Accessing file a.txt and storing value in matrixA
printf("Enter name of matrix A\n");
char namea[100];
scanf("%s", namea);
strcat(namea, ".txt");
fptr = fopen(namea, "r");
for(int i=0; i<arow; i++){
for(int j=0; j<acol; j++){
fscanf(fptr, "%d", &num1);
matrixA[i][j] = num1;
}
}
fclose(fptr);
char ch=' ';
fptr = fopen(namea, "r");
if (fptr==NULL) exit(2);
printf("Matrix A:\n");
while (ch!=EOF) {
ch = fgetc(fptr);
if (ch!=EOF) putchar(ch);
}
fclose(fptr);


//Accessing file b.txt and storing the value in matrixB
printf("Enter name of matrix B\n");
char nameb[100];
scanf("%s", nameb);
strcat(nameb, ".txt");
fptr = fopen(nameb, "r");
for(int i=0 ; i<brow; i++){
for(int j=0; j<bcol; j++){
fscanf(fptr, "%d", &num2);
matrixB[i][j] = num2;
}
}
fclose(fptr);
char cha=' ';
fptr = fopen(nameb, "r");
if (fptr==NULL) exit(2);
printf("Matrix B:\n");
while (cha!=EOF) {
cha = fgetc(fptr);
if (cha!=EOF) putchar(cha);
}
fclose(fptr);


//Matrix Multiplication
if(acol != bcol || arow != brow ){
printf("Martix subtraction is not possible due to dimension conflicts\n");
}else{
printf("Name the final matrix\n");
char namec[100];
strcat(namec, ".txt");
scanf("%s", &namec);
fptr = fopen(namec, "w");
for(int i=0; i<arow; i++){
for(int j=0; j<bcol; j++){
long long int sum = 0;
for(k=0;k<acol;k++){
sum =  matrixA[i][j] - matrixB[i][j];
}
fprintf(fptr, "%lld ", sum);
}
fprintf(fptr, "\n");
}
fclose(fptr);

char ch=' ';
fptr = fopen(namec, "r");
if (fptr==NULL) {exit(2);}
printf("The subtraction of the matrices:\n");
while (ch!=EOF) {
ch = fgetc(fptr);
if (ch!=EOF) putchar(ch);
}
fclose(fptr);
}
}



void matrixaddition(){
FILE *fptr;
int matrixA[arow][acol], matrixB[brow][bcol], num1,num2,k;
//Accessing file a.txt and storing value in matrixA
printf("Enter name of matrix A\n");
char namea[100];
scanf("%s", namea);
strcat(namea, ".txt");
fptr = fopen(namea, "r");
for(int i=0; i<arow; i++){
for(int j=0; j<acol; j++){
fscanf(fptr, "%d", &num1);
matrixA[i][j] = num1;
}
}
fclose(fptr);
char ch=' ';
fptr = fopen(namea, "r");
if (fptr==NULL) exit(2);
printf("Matrix A:\n");
while (ch!=EOF) {
ch = fgetc(fptr);
if (ch!=EOF) putchar(ch);
}
fclose(fptr);


//Accessing file b.txt and storing the value in matrixB
printf("Enter name of matrix B\n");
char nameb[100];
scanf("%s", nameb);
strcat(nameb, ".txt");
fptr = fopen(nameb, "r");
for(int i=0 ; i<brow; i++){
for(int j=0; j<bcol; j++){
fscanf(fptr, "%d", &num2);
matrixB[i][j] = num2;
}
}
fclose(fptr);
char cha=' ';
fptr = fopen(nameb, "r");
if (fptr==NULL) exit(2);
printf("Matrix B:\n");
while (cha!=EOF) {
cha = fgetc(fptr);
if (cha!=EOF) putchar(cha);
}
fclose(fptr);


//Matrix Multiplication
if(acol != bcol || arow != brow ){
printf("Martix addition is not possible due to dimension conflicts\n");
}else{
printf("Name the final matrix\n");
char namec[100];
strcat(namec, ".txt");
scanf("%s", &namec);
fptr = fopen(namec, "w");
for(int i=0; i<arow; i++){
for(int j=0; j<bcol; j++){
long long int sum = 0;
for(k=0;k<acol;k++){
sum =  matrixA[i][j] + matrixB[i][j];
}
fprintf(fptr, "%lld ", sum);
}
fprintf(fptr, "\n");
}
fclose(fptr);

char ch=' ';
fptr = fopen(namec, "r");
if (fptr==NULL) {exit(2);}
printf("The addition of the matrices:\n");
while (ch!=EOF) {
ch = fgetc(fptr);
if (ch!=EOF) putchar(ch);
}
fclose(fptr);
}
}


void matrixMultiplication(){
FILE *fptr;
int matrixA[arow][acol], matrixB[brow][bcol], num1,num2;
//Accessing file a.txt and storing value in matrixA
printf("Enter name of matrix A\n");
char namea[100];
scanf("%s", namea);
strcat(namea, ".txt");
fptr = fopen(namea, "r");
for(int i=0; i<arow; i++){
for(int j=0; j<acol; j++){
fscanf(fptr, "%d", &num1);
matrixA[i][j] = num1;
}
}
fclose(fptr);
char ch=' ';
fptr = fopen(namea, "r");
if (fptr==NULL) exit(2);
printf("Matrix A:\n");
while (ch!=EOF) {
ch = fgetc(fptr);
if (ch!=EOF) putchar(ch);
}
fclose(fptr);


//Accessing file b.txt and storing the value in matrixB
printf("Enter name of matrix B\n");
char nameb[100];
scanf("%s", nameb);
strcat(nameb, ".txt");
fptr = fopen(nameb, "r");
for(int i=0 ; i<brow; i++){
for(int j=0; j<bcol; j++){
fscanf(fptr, "%d", &num2);
matrixB[i][j] = num2;
}
}
fclose(fptr);
char cha=' ';
fptr = fopen(nameb, "r");
if (fptr==NULL) exit(2);
printf("Matrix B:\n");
while (cha!=EOF) {
cha = fgetc(fptr);
if (cha!=EOF) putchar(cha);
}
fclose(fptr);


//Matrix Multiplication
if(acol != brow){
printf("Martix Multiplication is not possible due to dimension conflicts\n");
}else{
printf("Name the final matrix\n");
char namec[100];
strcat(namec, ".txt");
scanf("%s", &namec);
fptr = fopen(namec, "w");
for(int i=0; i<arow; i++){
for(int j=0; j<bcol; j++){
long long int sum = 0;
for(int k=0; k<acol; k++){
sum = sum + matrixA[i][k] * matrixB[k][j];
}
fprintf(fptr, "%lld ", sum);
}
fprintf(fptr, "\n");
}
fclose(fptr);

char ch=' ';
fptr = fopen(namec, "r");
if (fptr==NULL) {exit(2);}
printf("The multiplication of the matrices:\n");
while (ch!=EOF) {
ch = fgetc(fptr);
if (ch!=EOF) putchar(ch);
}
fclose(fptr);
}
}

void createMatrix(){
FILE *fptr; float matrix[25][25];
//Creating the Matrix A
printf("Enter the row size for matrix A(<1001):\n");
scanf("%d", &arow);
printf("Enter the column size for matrix A(<1001):\n");
scanf("%d", &acol);

char namea[100];
char nameb[100];

printf("Name matrix A, without .txt\n");
scanf("%s", &namea);
strcat(namea, ".txt");
fptr = fopen(namea, "w");
for(int i=0; i<arow; i++){
for(int j=0; j<acol; j++){
printf("element - [%d],[%d] : ",i+1,j+1);
	           scanf("%f",&matrix[i][j]);
	           fprintf(fptr, "%.0f ", matrix[i][j]);
}
fprintf(fptr, "\n");
}
fclose(fptr);
char ch=' ';
fptr = fopen(namea, "r");
if (fptr==NULL) exit(2);
printf("Matrix A:\n");
while (ch!=EOF) {
ch = fgetc(fptr);
if (ch!=EOF) putchar(ch);
}
fclose(fptr);


//Creating the Matrix B
printf("Enter the row size for matrix B(<1001):\n");
scanf("%d", &brow);
printf("Enter the column size for matrix B(<1001):\n");
scanf("%d", &bcol);

printf("Name matrix B, without .txt\n");
scanf("%s", &nameb);
strcat(nameb, ".txt");
fptr = fopen(nameb, "w");


for(int i=0; i<brow; i++){
for(int j=0; j<bcol; j++){
printf("element - [%d],[%d] : ",i+1,j+1);
	           scanf("%f",&matrix[i][j]);
	           fprintf(fptr, ".0f% ", matrix[i][j]);
}
fprintf(fptr, "\n");
}
fclose(fptr);
char cha=' ';
fptr = fopen(nameb, "r");
if (fptr==NULL) exit(2);
printf("Matrix B:\n");
while (cha!=EOF) {
cha = fgetc(fptr);
if (cha!=EOF) putchar(cha);
}
fclose(fptr);
}
void generateMatrix(){
FILE *fptr;
//Creating the Matrix A
printf("Enter the row size for matrix A(<11):\n");
scanf("%d", &arow);
printf("Enter the column size for matrix A(<11):\n");
scanf("%d", &acol);

char namea[100];
char nameb[100];

printf("Name matrix A, without .txt\n");
scanf("%s", &namea);
strcat(namea, ".txt");
fptr = fopen(namea, "w");
for(int i=0; i<arow; i++){
for(int j=0; j<acol; j++){
fprintf(fptr, "%d ", rand()%10);
}
fprintf(fptr, "\n");
}
fclose(fptr);
char ch=' ';
fptr = fopen(namea, "r");
if (fptr==NULL) exit(2);
printf("Matrix A:\n");
while (ch!=EOF) {
ch = fgetc(fptr);
if (ch!=EOF) putchar(ch);
}
fclose(fptr);


//Creating the Matrix B
printf("Enter the row size for matrix B(<1001):\n");
scanf("%d", &brow);
printf("Enter the column size for matrix B(<1001):\n");
scanf("%d", &bcol);

printf("Name matrix B, without .txt\n");
scanf("%s", &nameb);
strcat(nameb, ".txt");
fptr = fopen(nameb, "w");


for(int i=0; i<brow; i++){
for(int j=0; j<bcol; j++){
fprintf(fptr, "%d ", rand()%10);
}
fprintf(fptr, "\n");
}
fclose(fptr);
char cha=' ';
fptr = fopen(nameb, "r");
if (fptr==NULL) exit(2);
printf("Matrix B:\n");
while (cha!=EOF) {
cha = fgetc(fptr);
if (cha!=EOF) putchar(cha);
}
fclose(fptr);
}

void generatevector(){
FILE *fptr;
//Creating the Matrix A
printf("Enter the  size for vector A(<11):\n");
scanf("%d", &arow);


char namea[100];
char nameb[100];

printf("Name vector A, without .txt\n");
scanf("%s", &namea);
strcat(namea, ".txt");
fptr = fopen(namea, "w");
for(int i=0; i<arow; i++){
fprintf(fptr, "%d ", rand()%10);
fprintf(fptr, "\n");
}
fclose(fptr);
char ch=' ';
fptr = fopen(namea, "r");
if (fptr==NULL) exit(2);
printf("Vector A:\n");
while (ch!=EOF) {
ch = fgetc(fptr);
if (ch!=EOF) putchar(ch);
}
fclose(fptr);


//Creating the Vector B
printf("Enter the size for vector B(<11):\n");
scanf("%d", &brow);


printf("Name vector B, without .txt\n");
scanf("%s", &nameb);
strcat(nameb, ".txt");
fptr = fopen(nameb, "w");


for(int i=0; i<brow; i++){
fprintf(fptr, "%d ", rand()%10);
fprintf(fptr, "\n");
}
fclose(fptr);
char cha=' ';
fptr = fopen(nameb, "r");
if (fptr==NULL) exit(2);
printf("Vector B:\n");
while (cha!=EOF) {
cha = fgetc(fptr);
if (cha!=EOF) putchar(cha);
}
fclose(fptr);
}
float determinant(float [][25], float);
void cofactor(float [][25], float);
void transpos(float [][25], float [][25], float);


// function to add two matrices
void add(int m[10][10], int n[10][10], int sum[10][10],int q)
{
  for(int i=0;i<q;i++)
    for(int j=0;j<q;j++)
      sum[i][j] = m[i][j] + n[i][j];
}

// function to subtract two matrices
void subtract(int m[10][10], int n[10][10], int result[10][10],int q)
{
  for(int i=0;i<q;i++)
    for(int j=0;j<q;j++)
      result[i][j] = m[i][j] - n[i][j];
}

// function to multiply two matrices
void multiply(int m[10][10], int n[10][10], int result[10][10],int q)
{
  for(int i=0; i < q; i++)
  {
    for(int j=0; j < q; j++)
    {
      result[i][j] = 0; // assign 0
      // find product
      for (int k = 0; k < q; k++)
      result[i][j] += m[i][k] * n[k][j];
    }
  }
}

// function to find transpose of a matrix
void transpose(int matrix[10][10], int trans[10][10],int q)
{
  for (int i = 0; i < q; i++)
    for (int j = 0; j < q; j++)
      trans[i][j] = matrix[j][i];
}

// function to display matrix
void display(int matrix[10][10],int q)
{
  for(int i=0; i<q; i++)
  {
    for(int j=0; j<q; j++)
      printf("%d\t",matrix[i][j]);

    printf("\n"); // new line
  }
}

float magnitude(int a[10],int s)
{
int i,c=0;
float d;
for (i = 0; i < s; i++)
    for (i = 0; i < s; i++)
    {
        c = c +pow(a[i],2);
    }
      d=sqrt(c);
      return d;
}

float dotprod(int a[10],int b[10],int s)
{ int i;
float j;
    for(i=0;i<s;i++)
        {
            j=j+a[i]*b[i];
            }
            return j;
}
void cofactor(float num[25][25], float f)
{
 float b[25][25], fac[25][25];
 int p, q, m, n, i, j;
 for (q = 0;q < f; q++)
 {
   for (p = 0;p < f; p++)
    {
     m = 0;
     n = 0;
     for (i = 0;i < f; i++)
     {
       for (j = 0;j < f; j++)
        {
          if (i != q && j != p)
          {
            b[m][n] = num[i][j];
            if (n < (f - 2))
             n++;
            else
             {
               n = 0;
               m++;
               }
            }
        }
      }
      fac[q][p] = pow(-1, q + p) * determinant(b, f - 1);
    }
  }
  transpos(num, fac, f);
}

float determinant(float g[25][25], float k)
{
  float s = 1, det = 0, b[25][25];
  int i, j, m, n, c;
  if (k == 1)
    {
     return (g[0][0]);
    }
  else
    {
     det = 0;
     for (c = 0; c < k; c++)
       {
        m = 0;
        n = 0;
        for (i = 0;i < k; i++)
          {
            for (j = 0 ;j < k; j++)
              {
                b[i][j] = 0;
                if (i != 0 && j != c)
                 {
                   b[m][n] = g[i][j];
                   if (n < (k - 2))
                    n++;
                   else
                    {
                     n = 0;
                     m++;
                     }
                   }
               }
             }
          det = det + s * (g[0][c] * determinant(b, k - 1));
          s = -1 * s;
          }
    }

    return (det);
}

void transpos(float num[25][25], float fac[25][25], float r)
{
  int i, j;
  float b[25][25], inverse[25][25], d;

  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         b[i][j] = fac[j][i];
        }
    }
  d = determinant(num, r);
  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
        inverse[i][j] = b[i][j] / d;
        }
    }
   printf("\n\n\nThe transpose of matrix is : \n");

   for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         printf("\t%.2f", inverse[i][j]);
        }
    printf("\n");
     }
}
int main()
{
    int arr1[10][10];
 float det=0;
float g[25][25], k, de;
    int a[10],b[10],c[10];
    int choice,n,i,option;
float z,cos;
int u1, u2, u3, v1, v2, v3;
int uvi, uvj, uvk;
int d[10][10],j,num;
  int e[10][10];
  int f[10][10];
loop:do{
  printf("\nChoose an option\n");
  printf("1. Matrices\n2. Vectors\n3. Generate Matrix\n4. Generate Vector\n5. Matrix Operations With Files\n6. Vector Operations With Files\n7. Create Matrix\n8. Create Vector\n");
  scanf("%d",&option);
  switch(option)
  {
  case(1):
    {

  // variable to take choice
  int choice;

  // menu-driven
 // menu to choose the operation
    printf("\nChoose the matrix operation,\n");
    printf("----------------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose\n");
    printf("5. Determinant\n");
    printf("6. Inverse\n");
    printf("7. Exit\n");
    printf("----------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:{
          printf("Enter the order of the Matrix :\n ");
  scanf("%f", &k);
          printf("Input elements in the first matrix :\n");
       for(i=0;i<k;i++)
        {
            for(j=0;j<k;j++)
            {
	           printf("element - [%d],[%d] : ",i+1,j+1);
	           scanf("%d",&d[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<k;i++)
	 {
	   for(j=0;j<k ;j++)
	     printf("% 4d",d[i][j]);
	    printf("\n");
	 }
	 printf("Input elements in the second matrix :\n");
       for(i=0;i<k;i++)
        {
            for(j=0;j<k;j++)
            {
	           printf("element - [%d],[%d] : ",i+1,j+1);
	           scanf("%d",&e[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<k;i++)
	 {
	   for(j=0;j<k ;j++)
	     printf("% 4d",e[i][j]);
	    printf("\n");
	 }
        add(d, e, f,k);
        printf("Sum of matrix: \n");
        display(f,k);
         goto loop;
        break;
      }
      case 2:
          {
              printf("Enter the order of the Matrix : ");
  scanf("%f", &k);
          printf("Input elements in the first matrix :\n");
       for(i=0;i<k;i++)
        {
            for(j=0;j<k;j++)
            {
	           printf("element - [%d],[%d] : ",i+1,j+1);
	           scanf("%d",&d[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<k;i++)
	 {
	   for(j=0;j<k ;j++)
	     printf("% 4d",d[i][j]);
	    printf("\n");
	 }
	 printf("Input elements in the second matrix :\n");
       for(i=0;i<k;i++)
        {
            for(j=0;j<k;j++)
            {
	           printf("element - [%d],[%d] : ",i+1,j+1);
	           scanf("%d",&e[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<k;i++)
	 {
	   for(j=0;j<k ;j++)
	     printf("% 4d",e[i][j]);
	    printf("\n");
	 }
        subtract(d, e, f,k);
        printf("Subtraction of matrix: \n");
        display(f,k);
         goto loop;
        break;
          }
      case 3:
          {
              printf("Enter the order of the Matrix :\n ");
  scanf("%f", &k);
          printf("Input elements in the first matrix :\n");
       for(i=0;i<k;i++)
        {
            for(j=0;j<k;j++)
            {
	           printf("element - [%d],[%d] : ",i+1,j+1);
	           scanf("%d",&d[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<k;i++)
	 {
	   for(j=0;j<k ;j++)
	     printf("% 4d",d[i][j]);
	    printf("\n");
	 }
	 printf("Input elements in the second matrix :\n");
       for(i=0;i<k;i++)
        {
            for(j=0;j<k;j++)
            {
	           printf("element - [%d],[%d] : ",i+1,j+1);
	           scanf("%d",&e[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<k;i++)
	 {
	   for(j=0;j<k ;j++)
	     printf("% 4d",e[i][j]);
	    printf("\n");
	 }
        multiply(d, e, f,k);
        printf("Multiplication of matrix: \n");
        display(f,k);
         goto loop;
        break;
          }
      case 4:
          {
              printf("Enter the order of the Matrix : ");
  scanf("%f", &k);
          printf("Input elements in the matrix :\n");
       for(i=0;i<k;i++)
        {
            for(j=0;j<k;j++)
            {
	           printf("element - [%d],[%d] : ",i+1,j+1);
	           scanf("%d",&d[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<k;i++)
	 {
	   for(j=0;j<k ;j++)
	     printf("% 4d",d[i][j]);
	    printf("\n");
	 }
        printf("Transpose of the  matrix: \n");
        transpose(d, f,k);
        display(f,k);
         goto loop;
        break;
          }
        case 5:
            {
                 printf("\n\nCalculate the determinant of a matrix :\n");
       printf("-------------------------------------------------\n");

	 printf("Input elements in the first matrix :\n");
       for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
	           printf("element - [%d],[%d] : ",i+1,j+1);
	           scanf("%d",&arr1[i][j]);
            }
        }
	 printf("The matrix is :\n");
	 for(i=0;i<3;i++)
	 {
	   for(j=0;j<3 ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }

  for(i=0;i<3;i++)
      det = det + (arr1[0][i]*(arr1[1][(i+1)%3]*arr1[2][(i+2)%3] - arr1[1][(i+2)%3]*arr1[2][(i+1)%3]));

  printf("\nThe Determinant of the matrix is: %.1f\n\n",det);
   goto loop;
  break;
            }
        case 6:
            {
                 printf("Enter the order of the Matrix : ");
  scanf("%f", &k);
  printf("Enter the elements of %.0fX%.0f Matrix : \n", k, k);
  for (i = 0;i < k; i++)
    {
     for (j = 0;j < k; j++)
       {
           printf("element - [%d],[%d] : ",i+1,j+1);
        scanf("%f", &g[i][j]);
        }
    }
    printf("The matrix is :\n");
	 for(i=0;i<k;i++)
	 {
	   for(j=0;j<k ;j++)
	     printf("%.0f ",g[i][j]);
	    printf("\n");
	 }
  de= determinant(g, k);
  if (de == 0)
   printf("\nInverse of Entered Matrix is not possible\n");
  else
   cofactor(g, k);
   goto loop;
   break;
}


      case 7:
        {
            printf("Thank You.\n");
        exit(0);}
      default:
        {
            printf("Invalid input.\n");
        printf("Please enter the correct input.\n");
      goto loop;
      break;
        }
   }
    }


      case(2):
        {

    // menu to choose the operation
    printf("\nChoose the vector operation,\n");
    printf("----------------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Dot Product\n");
    printf("4. Cross Product 3x3\n");
    printf("5. Magnitude\n");
    printf("6. Angle\n");
    printf("7. Mixed Product\n");
    printf("8. Exit\n");
    printf("----------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
  switch(choice)
  {
  case(1):
    {
        printf("Enter vector size: ");
 scanf("%d", &n);
 printf("Enter elements of vector a:\n");
 for (i = 0; i < n; i++)
   scanf("%d", &a[i]);
   printf("Enter elements of vector b:\n");
   for (i = 0; i < n; i++)
    scanf("%d", &b[i]);
    printf("Addition vector:\n");
     for (i = 0; i < n; i++)
        c[i]=a[i]+b[i];
   for (i = 0; i < n; i++)
      printf("%d ", c[i]);
 goto loop;
    break;
  }
  case(2) :
    {
        printf("Enter vector size: ");
 scanf("%d", &n);
 printf("Enter elements of vector a:\n");
 for (i = 0; i < n; i++)
   scanf("%d", &a[i]);
   printf("Enter elements of vector b:\n");
   for (i = 0; i < n; i++)
    scanf("%d", &b[i]);
    printf("Subtraction vector:\n");
    for (i = 0; i < n; i++)
        c[i]=a[i]-b[i];
   for (i = 0; i < n; i++)
      printf("%d ", c[i]);
       goto loop;
    break;
    }
    case(3):
        {
            printf("Enter vector size: ");
 scanf("%d", &n);
 printf("Enter elements of vector a:\n");
 for (i = 0; i < n; i++)
   scanf("%d", &a[i]);
   printf("Enter elements of vector b:\n");
   for (i = 0; i < n; i++)
    scanf("%d", &b[i]);
    printf("Dot product of vectors:\n");
    printf("%.0f",dotprod(a,b,n));
     goto loop;
    break;
        }
    case(4):
        {
            printf("Enter elements of vector a:\n");
   scanf("%d", &u1);
   scanf("%d", &u2);
   scanf("%d", &u3);
   printf("Enter elements of vector b:\n");
   scanf("%d", &v1);
   scanf("%d", &v2);
   scanf("%d", &v3);


    uvi = u2 * v3 - v2 * u3;
    uvj = v1 * u3 - u1 * v3;
    uvk = u1 * v2 - v1 * u2;

 printf("The cross product of the 2 vectors \n u = %di + %dj + %dk and \n v = %di + %dj + %dk\n",
            u1, u2, u3, v1, v2, v3);
    printf(" u X v: %di  %dj  %dk", uvi, uvj, uvk);
     goto loop;
    break;
        }
    case(5):
        {
            printf("Enter vector size: ");
 scanf("%d", &n);
 printf("Enter elements of vector a:\n");
 for (i = 0; i < n; i++)
   scanf("%d", &a[i]);
   printf("Magnitude of vector:\n");
      printf("%0.2f ", magnitude(a,n));
       goto loop;
      break;
        }
    case(6):
        {
            printf("Enter vector size: ");
 scanf("%d", &n);
 printf("Enter elements of vector a:\n");
 for (i = 0; i < n; i++)
   scanf("%d", &a[i]);
   printf("Enter elements of vector b:\n");
   for (i = 0; i < n; i++)
    scanf("%d", &b[i]);
    cos=dotprod(a,b,n)/(magnitude(a,n)*magnitude(b,n));
  k=acos(cos);
    z=(k*180)/pi;
    printf("the angle between the vectors is:%.1f degrees",z);
     goto loop;
    break;
        }
    case(7):
        {
          printf("Enter elements of vector a:\n");
 for (i = 0; i < 3; i++)
   scanf("%d", &a[i]);
   printf("Enter elements of vector b:\n");
   for (i = 0; i <3; i++)
    scanf("%d", &b[i]);
    printf("Enter elements of vector c:\n");
   for (i = 0; i < 3; i++)
    scanf("%d", &c[i]);
    for(i=0;i<3;i++)
    {
        arr1[0][i]=a[i];
    }
    for(i=0;i<3;i++)
    {
        arr1[1][i]=b[i];
    }
    for(i=0;i<3;i++)
    {
        arr1[2][i]=c[i];
    }
    for(i=0;i<3;i++)
      det = det + (arr1[0][i]*(arr1[1][(i+1)%3]*arr1[2][(i+2)%3] - arr1[1][(i+2)%3]*arr1[2][(i+1)%3]));
     printf("The mixed product of the 3 vectors is: %f ",det);
      goto loop;
     break;
     }

    case(8):
        {
            printf("Thank You.\n");
        exit(0);
        }
    default:
        {
            printf("Invalid input.\n");
        printf("Please enter the correct input.\n");
     goto loop;
     break;
        }
  }
        }
    case(3):
        {
            generateMatrix();
            goto loop;
            break;
        }
    case(4):
        {
generatevector();
goto loop;
break;
        }
    case 5:
        {
printf("\nChoose the matrix operation, among files\n");
    printf("----------------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Inverse\n");
    printf("5. Determinant\n");
    printf("6. Exit\n");
    printf("----------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
    case(1):
        {
generateMatrix();
matrixaddition();
goto loop;
break;
        }
        case(2):
        {
generateMatrix();
matrixsubtraction();
goto loop;
break;
        }
        case(3):
            {
                generateMatrix();
                matrixMultiplication();
                goto loop;
                break;
            }
        case(4):
            {
                FILE *fptr;
  generateMatrix();
//Accessing file a.txt and storing value in matrixA
printf("Enter name of matrix \n");
char namea[100];
scanf("%s", namea);
strcat(namea, ".txt");
fptr = fopen(namea, "r");
  for (i = 0;i <arow; i++)
    {
     for (j = 0;j <acol; j++)
       {
       fscanf(fptr, "%d", &num);
       g[i][j]= num;
        }
    }
 determinant(g, arow);
  if (determinant(g,arow) == 0)
   printf("\nInverse of Entered Matrix is not possible\n");
  else
   cofactor(g, arow);
   goto loop;
   break;
}
        case(5):
            {
                FILE *fptr;
  generateMatrix();
  printf("Enter name of matrix \n");
char namea[100];
scanf("%s", namea);
strcat(namea, ".txt");
fptr = fopen(namea, "r");
  for (i = 0;i <arow; i++)
    {
     for (j = 0;j <acol; j++)
       {
       fscanf(fptr, "%d", &num);
       g[i][j]= num;
        }
            }
            if(arow!=acol){
                printf("Martix determinant is not possible due to dimension conflicts\n");
            }
            else
             {printf("The Determinant is:%f",determinant(g,arow));}
             goto loop;
                 break;
            }
            case (6):
        {
            printf("Thank You.\n");
        exit(0);}
      default:
        {
            printf("Invalid input.\n");
        printf("Please enter the correct input.\n");
      goto loop;
      break;
        }


    }

        }
            case(6):
                {
                    printf("\nChoose the vector operation,\n");
    printf("----------------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Magnitude\n");
    printf("4. Exit\n");
    printf("----------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
  switch(choice)
  {
  case(1):
    {
generatevector();
vectoraddition();
goto loop;
break;
    }
  case(2):
    {
        generatevector();
        vectorsubtraction();
        goto loop;
        break;
    }
  case(3):
    {
        generatevector();
        vectormagnitude();
        goto loop;
        break;
    }
    case(4):
    {
        printf("Thank You.\n");
        exit(0);
    }

  }
            }
  default:
    {

            printf("Invalid input.\n");
        printf("Please enter the correct input.\n");
     goto loop;
     break;
    }
    case(7):
        {
            createMatrix();
            goto loop;
            break;
        }
    case(8):
        {
            createvector();
            goto loop;
            break;
        }
}
}while(1);
  return 0;
}
