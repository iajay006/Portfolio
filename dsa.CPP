// Design a menu-based program in which you have to design 5 cases are:
// Case 1 : Prime Number
// Case 2 : Armstrong Number
// Case 3 : Fibonacci Series
// Case 4 : Number Reverse
// Case 5 : X^Y without using power function

// Using function and switch case


#include <stdio.h>
#include <conio.h>

int isPrime(int);
int isArmstrong(int);
void fibonacci(int);
int reverse(int);
int power(int, int);

void main()
{
    int choice, num, terms, base, exponent;
    clrscr();

    printf("1 : Prime Number\n");
    printf("2 : Check Armstrong Number\n");
    printf("3 : Fibonacci Series\n");
    printf("4 : Reverse a Number\n");
    printf("5 : Calculate x to the power y (x^y)\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isPrime(num))
                printf("%d is a Prime Number.\n", num);
            else
                printf("%d is NOT a Prime Number.\n", num);
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            if (isArmstrong(num))
                printf("%d is an Armstrong Number.\n", num);
            else
                printf("%d is NOT an Armstrong Number.\n", num);
            break;

        case 3:
            printf("Enter number of terms: ");
            scanf("%d", &terms);
            fibonacci(terms);
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Reversed Number: %d\n", reverse(num));
            break;

        case 5:
            printf("Enter base (x): ");
            scanf("%d", &base);
            printf("Enter exponent (y): ");
            scanf("%d", &exponent);
            printf("Result: %d\n", power(base, exponent));
            break;

        default:
            printf("Invalid Choice! Try again.\n");
    }

    getch();
}

/* Function Definitions */

int isPrime(int num)
{
    int i, count = 0;

    if (num <= 1)
        return 0;

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }

    if (count == 2)
        return 1;
    else
        return 0;
}

int isArmstrong(int num)
{
    int original = num, digit, sum = 0;
    while (num > 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }
    if (sum == original)
        return 1;
    else
        return 0;
}

void fibonacci(int terms)
{
    int a = 0, b = 1, next, i;
    printf("Fibonacci Series: ");
    for (i = 1; i <= terms; i++)
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int reverse(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}

int power(int base, int exponent)
{
    int result = 1, i;
    for (i = 1; i <= exponent; i++)
        result = result * base;
    return result;
}





// Function having both argument and return type

#include <stdio.h>
#include <conio.h>

int isPalindrome(int num);

int main()
{
    int number;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("It is a Palindrome\n");
    else
        printf("It is not a Palindrome\n");

    getch();
    return 0;
}

int isPalindrome(int n)
{
    int num = n, rev = 0, rem;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    return (n == rev);
}





// Function having no arguments and no return type

#include <stdio.h>
#include <conio.h>

void isPalindrome();

int main()
{
    clrscr();
    isPalindrome();
    getch();
    return 0;
}

void isPalindrome()
{
    int n, num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;

    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (n == rev)
        printf("%d is a Palindrome\n", n);
    else
        printf("%d is NOT a Palindrome\n", n);
}




// Function having no arguments but a return type

#include <stdio.h>
#include <conio.h>

int isPalindrome();

int main()
{
    int result;
    clrscr();
    result = isPalindrome();

    if (result)
        printf("It is a Palindrome\n");
    else
        printf("It is not a Palindrome\n");

    getch();
    return 0;
}

int isPalindrome()
{
    int num, rev = 0, rem, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;

    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    return (n == rev);
}



// Function having no return type but having arguments

#include <stdio.h>
#include <conio.h>

void isPalindrome(int num);

int main()
{
    int number;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &number);
    isPalindrome(number);
    getch();
    return 0;
}

void isPalindrome(int n)
{
    int num = n, rev = 0, rem;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (n == rev)
        printf("%d is a Palindrome\n", n);
    else
        printf("%d is NOT a Palindrome\n", n);
}







// Sequential Search or Linear Search 


#include <stdio.h>
#include <conio.h>

int Sequential_Search(int x[], int n, int k);

void main()
{
    int x[10], num, key, q,i;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &num);

    printf("Load Array:\n");
    for (i = 0; i < num; i++)
    {
	scanf("%d", &x[i]);
    }

    printf("Enter element to be searched: ");
    scanf("%d", &key);

    q = Sequential_Search(x, num, key);

    if (q == -1)
        printf("Search unsuccessful\n");
    else
        printf("The element %d found at %d position\n", key, q + 1);

    getch();
}
int Sequential_Search(int x[],int n,int k)
	{
	int i;
	for (i=0;i<n;i++)
	{
		if(x[i]==k)
		{return i;
		}
	}
	return -1;
}




//sir

#include<stdio.h>
#include<conio.h>
int Sequential_Search(int[],int,int);
void main()
{
   int x[10],num,key,q;
   clrscr();
   printf("ENTER NUMBER OF ELEMENTS\n");
   scanf("%d",&num);
   printf("LOAD ARRAY\n");
   for(int i=0;i<num;i++)
   {
      scanf("%d",&x[i]);
    }
    printf("ENTER KEY FIELD\n");
    scanf("%d",&key);
    q=Sequential_Search(x,num,key);
    if(q==-1)
    printf("Search Unsucessful\n");
    else
    printf("The element %d found at %d Position",key,q+1);
    getch();
}
int Sequential_Search(int x[],int n,int k)
{
     for(int i=0;i<n;i++)
     {
	if(x[i]==k)
	{
	  return i;
	 }
      }
   return -1;
 }





// Binary search

#include <stdio.h>
#include <conio.h>

int Binary_search(int a[], int n, int k);

void main() {
    int x[20], n, key, p, i;
    clrscr();

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &x[i]);

    printf("Enter the element to be searched:\n");
    scanf("%d", &key);

    p = Binary_search(x, n, key);

    if(p == -1)
        printf("\nSearch unsuccessful\n");
    else
        printf("The element %d found at position %d\n", key, p + 1);

    getch();
}

int Binary_search(int a[], int n, int k) {
    int lo = 0, hi = n - 1, mid;

    while(lo <= hi) {
        mid = (lo + hi) / 2;

        if(k == a[mid])
            return mid;
        if(k < a[mid])
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return -1;
}


// sir 

   // BINARY SEARCH
#include<stdio.h>
#include<conio.h>

int Binary_Search(int[],int,int);
void main()
{
  int x[20],n,key,i,p;
  clrscr();
  printf("\nENTER NUMBER OF ELEMENTS\n");
  scanf("%d",&n);
  printf("ENTER %d ELEMENT IN SORTED ORDER\n",n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&x[i]);
      }
    printf("\nENTER THE ELEMENT TO BE SEARCHED\n");
    scanf("%d",&key);
    p=Binary_Search(x,n,key);
    if(p==-1)
    printf("\nSEARCH UNSUCESSFUL\n");
    else
    printf("THE ELEMENT %d FOUND AT POSITION %d",key,p+1);
    getch();
    }
  int Binary_Search(int a[],int n, int k)
  {
    int lo=0,hi=n-1,mid;
    while(lo<=hi)
    {
    mid=(lo+hi)/2;
    if(k==a[mid])
    return(mid);
    if(k<a[mid])
      hi=mid-1;
    else
    lo=mid+1;
      }
   return -1;
   }





// BUBBLE SORT

#include <stdio.h>
#include <conio.h>

void Bubble(int[], int); // function prototype

void main()
{
    int x[20], n, i;
    clrscr();

    printf("ENTER NUMBER OF ELEMENTS: ");
    scanf("%d", &n);

    printf("ENTER %d ELEMENTS:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    Bubble(x, n); // function call

    printf("\nTHE SORTED ELEMENTS ARE:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", x[i]);
    }

    getch();
}

void Bubble(int a[], int n)
{
    int temp, pass, i;
    for (pass = 0; pass < n - 1; pass++)
    {
        for (i = 0; i < n - pass - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}






//Insertion Sort

#include <stdio.h>
#include <conio.h>

void Insertion_Sort(int[], int);  // function prototype

void main()
{
    int a[100], n, i;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    Insertion_Sort(a, n);

    printf("\nSORTED SEQUENCE:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    getch();
}

void Insertion_Sort(int a[], int n)
{
    int i, j, key;

    for (j = 1; j < n; j++)
    {
        key = a[j];
        i = j - 1;

        while (i >= 0 && a[i] > key)
        {
            a[i + 1] = a[i];
            i = i - 1;
        }

        a[i + 1] = key;
    }
}




//sir


#include<stdio.h>
#include<conio.h>
void Insertion_Sort(int[],int);
void main()
{
int a[100],n;
clrscr();
printf("Enter number of Elements\n");
scanf("%d",&n);
printf("Enter %d elements\n",n);
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
Insertion_Sort(a,n);
getch();
}
void Insertion_Sort(int a[],int n)
{
    int i,j,key;
    for(j=1;j<n;j++)
    {
       key=a[j];
       i=j-1;
       while((i>-1)&&(a[i]>key)) //O(n^2)
       {
	 a[i+1]=a[i];
	 i=i-1;
	}
      a[i+1]=key;
     }
    printf("\n SORTED SEQUENCE\n");
    for(i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }
}





//Selection Sort

#include <stdio.h>
#include <conio.h>

void Selection_Sort(int[], int);
int smallest(int[], int, int);

void main()
{
    int a[100], n, i;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    Selection_Sort(a, n);

    printf("\nSORTED SEQUENCE:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    getch();
}

int smallest(int a[], int k, int n)
{
    int pos = k, small = a[k], i;

    for (i = k + 1; i < n; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
            pos = i;
        }
    }

    return pos;
}

void Selection_Sort(int a[], int n)
{
    int k, pos, temp, i;

    for (k = 0; k < n - 1; k++)
    {
        pos = smallest(a, k, n);
        temp = a[k];
        a[k] = a[pos];
        a[pos] = temp;
    }
}



//sir

#include<stdio.h>
#include<conio.h>
void Selection_Sort(int[],int);
int smallest(int[],int,int);
void main()
{
int a[100],n;
clrscr();
printf("Enter number of Elements\n");
scanf("%d",&n);
printf("Enter %d elements\n",n);
	for(int i=0;i<n;i++)
	{
	printf("\n a[%d]=",i);
	scanf("%d",&a[i]);
	}
Selection_Sort(a,n);

getch();
}
int smallest(int a[],int k,int n)
{
  int pos=k,small=a[k],i;
    for(i=k+1;i<n;i++)
    {
       if(a[i]<small)
       {
       small=a[i];
       pos=i;
       }
    }
    return pos;
 }
void Selection_Sort(int a[],int n)
{
    int k,pos,temp;
    for(k=0;k<n;k++)
    {
      pos=smallest(a,k,n);
      temp=a[k];
      a[k]=a[pos];
      a[pos]=temp;
     }
     printf("\n SORTED SEQUENCE\n");
    for(int i=0;i<n;i++)
    {
    printf("%d\t",a[i]);
    }
  }






// MERGE SORT

#include <stdio.h>
#include <conio.h>

void Merge_Sort(int[], int, int);
void Merge(int[], int, int, int);

void main()
{
    int a[100], n, i;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    Merge_Sort(a, 0, n - 1);

    printf("\nSORTED SEQUENCE:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    getch();
}

void Merge_Sort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        Merge_Sort(a, low, mid);       // sort left half
        Merge_Sort(a, mid + 1, high);  // sort right half
        Merge(a, low, mid, high);      // merge halves
    }
}

void Merge(int a[], int low, int mid, int high)
{
    int i, j, k;
    int b[100];  // temporary array
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        b[k] = a[j];
        j++;
        k++;
    }

    // Copy back to original array
    for (i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}



// QUICK SORT
#include <stdio.h>
#include <conio.h>

void Quick_Sort(int[], int, int);
int Partition(int[], int, int);

void main()
{
    int a[100], n, i;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    Quick_Sort(a, 0, n - 1);

    printf("\nSORTED SEQUENCE:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    getch();
}

void Quick_Sort(int a[], int low, int high)
{
    int pivot_index;
    if (low < high)
    {
        pivot_index = Partition(a, low, high);
        Quick_Sort(a, low, pivot_index - 1);   // sort left subarray
        Quick_Sort(a, pivot_index + 1, high);  // sort right subarray
    }
}

int Partition(int a[], int low, int high)
{
    int pivot, i, j, temp;
    pivot = a[low];
    i = low + 1;
    j = high;

    while (1)
    {
        while (i <= high && a[i] <= pivot)
            i++;

        while (a[j] > pivot)
            j--;

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        else
        {
            break;
        }
    }

    // place pivot at its correct position
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}





// RADIX SORT

#include <stdio.h>
#include <conio.h>

void Radix_Sort(int[], int);
int getMax(int[], int);
void countingSort(int[], int, int);

void main()
{
    int a[100], n, i;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    Radix_Sort(a, n);

    printf("\nSORTED SEQUENCE:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    getch();
}



void Radix_Sort(int a[], int n)   // Function Definitions
{
    int max, exp;
    max = getMax(a, n);

    for (exp = 1; max / exp > 0; exp *= 10)
    {
        countingSort(a, n, exp);
    }
}

int getMax(int a[], int n)
{
    int i, max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

void countingSort(int a[], int n, int exp)
{
    int output[100];
    int count[10];
    int i;

    for (i = 0; i < 10; i++)
        count[i] = 0;

    for (i = 0; i < n; i++)
        count[(a[i] / exp) % 10]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--)
    {
        output[count[(a[i] / exp) % 10] - 1] = a[i];
        count[(a[i] / exp) % 10]--;
    }

    for (i = 0; i < n; i++)
        a[i] = output[i];
}








// HEAP SORT

#include <stdio.h>
#include <conio.h>

void Heap_Sort(int[], int);
void heapify(int[], int, int);

void main()
{
    int a[100], n, i;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    Heap_Sort(a, n);

    printf("\nSORTED SEQUENCE:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    getch();
}



void heapify(int a[], int n, int i) //Function Definitions
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int temp;

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != i)
    {
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(a, n, largest);
    }
}

void Heap_Sort(int a[], int n)
{
    int i, temp;

    for (i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

    for (i = n - 1; i > 0; i--)
    {
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        heapify(a, i, 0);
    }
}





// BUCKET SORT
#include <stdio.h>
#include <conio.h>

void Bucket_Sort(int[], int);
void Insertion_Sort(int[], int);

void main()
{
    int a[100], n, i;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    Bucket_Sort(a, n);

    printf("\nSORTED SEQUENCE:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    getch();
}

// ---------- Function Definitions ----------

void Bucket_Sort(int a[], int n)
{
    int i, j, k;
    int bucket[10][10];
    int bucketCount[10];
    int max;  // declare first!

    for (i = 0; i < 10; i++)
        bucketCount[i] = 0;

    // Find the maximum element
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    // Distribute elements into buckets
    for (i = 0; i < n; i++)
    {
        int index;
        index = (a[i] * 10) / (max + 1);
        bucket[index][bucketCount[index]] = a[i];
        bucketCount[index]++;
    }

    // Sort each bucket using insertion sort
    for (i = 0; i < 10; i++)
    {
        if (bucketCount[i] > 0)
            Insertion_Sort(bucket[i], bucketCount[i]);
    }

    // Combine buckets
    k = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < bucketCount[i]; j++)
        {
            a[k++] = bucket[i][j];
        }
    }
}

void Insertion_Sort(int a[], int n)
{
    int i, j, key;
    for (j = 1; j < n; j++)
    {
        key = a[j];
        i = j - 1;
        while (i >= 0 && a[i] > key)
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
    }
}







// COUNTING SORT
#include <stdio.h>
#include <conio.h>

void Counting_Sort(int[], int);

void main()
{
    int a[100], n, i;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    Counting_Sort(a, n);

    printf("\nSORTED SEQUENCE:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    getch();
}

// ---------- Function Definition ----------

void Counting_Sort(int a[], int n)
{
    int output[100];
    int count[1000];
    int i;
    int max;   // declare before using

    max = a[0];   // initialize after declaration

    // Find the maximum value
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    // Initialize count array to 0
    for (i = 0; i <= max; i++)
        count[i] = 0;

    // Store the count of each element
    for (i = 0; i < n; i++)
        count[a[i]]++;

    // Change count[i] so it contains actual position
    for (i = 1; i <= max; i++)
        count[i] = count[i] + count[i - 1];

    // Build the output array (stable sort)
    for (i = n - 1; i >= 0; i--)
    {
        output[count[a[i]] - 1] = a[i];
        count[a[i]]--;
    }

    // Copy output array back to original
    for (i = 0; i < n; i++)
        a[i] = output[i];
}







//Stack operation using Structure
// C stack implementation using arrays

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAXSTK 10

struct stack {
    int top;
    int item[MAXSTK];
};

typedef struct stack S;

int isEmpty(S *st);
int isFull(S *st);
void push(S *st, int x);
void pop(S *st);
void display(S *st);

int main() {
    S st;
    int num, ch;
    clrscr();
    st.top = -1;

    while (1) {
        printf("\n1 - Push");
        printf("\n2 - Pop");
        printf("\n3 - Display");
        printf("\n4 - Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("\nEnter the element to be pushed: ");
                scanf("%d", &num);
                push(&st, num);
                break;
            case 2:
                pop(&st);
                break;
            case 3:
                display(&st);
                break;
            case 4:
                exit(0);
            default:
                printf("\nWrong choice, please enter correct choice\n");
        }
    }
    getch();
    return 0;
}

int isEmpty(S *st) {
    if (st->top == -1)
        return 1;
    else
        return 0;
}

int isFull(S *st) {
    if (st->top == MAXSTK - 1)
        return 1;
    else
        return 0;
}

void push(S *st, int x) {
    if (isFull(st)) {
        printf("\nOverflow");
        return;
    }
    st->top++;
    st->item[st->top] = x;
}

void pop(S *st) {
    if (isEmpty(st)) {
        printf("\nUnderflow");
    } else {
        printf("\nThe popped element is: %d", st->item[st->top]);
        st->top--;
    }
}

void display(S *st) {
    int i;
    if (isEmpty(st)) {
        printf("\nElements not present");
    } else {
        printf("\nThe elements of stack are:\n");
        for (i = st->top; i >= 0; i--) {
            printf("%d\n", st->item[i]);
        }
    }
}




// stack implementation without structure

// stack implementation using an array without using a structure

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 5
int top = -1;
int arr[MAX];

void push(int);
void pop();
void display();

int main() {
    int ch, num;
    clrscr();
    while (1) {
        printf("\n1 push");
        printf("\n2 pop");
        printf("\n3 display");
        printf("\n4 exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("\nEnter element: ");
                scanf("%d", &num);
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nWrong choice! Please enter correct choice\n");
        }
    }
    getch();
    return 0;
}

void push(int x) {
    if (top == MAX - 1) {
        printf("\nOverflow");
        return;
    }
    top++;
    arr[top] = x;
}

void pop() {
    if (top == -1) {
        printf("\nUnderflow");
    } else {
        printf("\nThe popped element = %d\n", arr[top]);
        top--;
    }
}

void display() {
    int i;
    if (top == -1) {
        printf("\nUnderflow");
    } else {
        for (i = top; i >= 0; i--) {
            printf("%d\n", arr[i]);
        }
    }
}




// me


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 5

int top = -1;
int arr[MAX];

void push(int);
void pop();
void display();

int main() {
    int ch, num;
    clrscr();

    while (1) {
        printf("\n1 - Push");
        printf("\n2 - Pop");
        printf("\n3 - Display");
        printf("\n4 - Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("\nEnter element: ");
                scanf("%d", &num);
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nWrong choice! Please enter correct choice\n");
        }
    }
    getch();
    return 0;
}

void push(int x) {
    if (top == MAX - 1) {
        printf("\nOverflow");
        return;
    }
    top++;
    arr[top] = x;
}

void pop() {
    int x;
    if (top == -1) {
        printf("\nUnderflow");
    } else {
        x = arr[top];
        top--;
        printf("\nThe popped element = %d\n", x);
    }
}

void display() {
    int i;
    if (top == -1) {
        printf("\nUnderflow");
    } else {
        for (i = top; i >= 0; i--) {
            printf("%d\t", arr[i]);
        }
        printf("\n");
    }
}








// Queue using structure 
// Queue using functions gpt

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

void insert();
void delete();
void display();

void main()
{
    int ch;
    clrscr();
    while (1)
    {
        printf("\n1. INSERT");
        printf("\n2. DELETE");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert();
            break;

        case 2:
            delete();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("\nWrong choice.");
        }
    }
    getch();
}

int isEmpty()
{
    if (front == -1 || front > rear)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (rear == MAX - 1)
        return 1;
    else
        return 0;
}

void insert()
{
    int x;
    if (isFull())
        printf("\nQUEUE OVERFLOW\n");
    else
    {
        printf("Enter the element to be inserted: ");
        scanf("%d", &x);
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = x;
    }
}

void delete()
{
    if (isEmpty())
        printf("\nQUEUE UNDERFLOW\n");
    else
    {
        printf("\nThe deleted element is %d\n", queue[front]);
        front++;
    }
}

void display()
{
    int i;
    if (isEmpty())
        printf("\nQueue is empty.\n");
    else
    {
        printf("\nThe elements present in the queue are:\n");
        for (i = front; i <= rear; i++)
            printf("%d\t", queue[i]);
    }
}





// Queue without using structure 
// Queue without using functions gpt



#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 10

int queue[MAX];
int front = -1, rear = -1;

void insert();
void del();
void display();

void main() {
    int ch;
    clrscr();

    while (1) {
        printf("\n1. INSERT");
        printf("\n2. DELETE");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                insert();
                break;

            case 2:
                del();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("\nWrong choice!");
        }
        getch();
    }
}

void insert() {
    int item;
    clrscr();

    if (rear == MAX - 1)
        printf("\nQueue Overflow!");
    else {
        if (front == -1)
            front = 0;

        printf("\nEnter any number: ");
        scanf("%d", &item);
        rear++;
        queue[rear] = item;
    }
}

void del() {
    clrscr();

    if (front == -1 || front > rear)
        printf("\nUnderflow!");
    else {
        printf("\nThe element deleted from the queue is = %d", queue[front]);
        front++;
    }
}

void display() {
    int i;
    clrscr();

    if (front == -1 || front > rear)
        printf("\nUnderflow!");
    else {
        printf("\nDisplay queue:\n");
        for (i = front; i <= rear; i++)
            printf("%d\t", queue[i]);
    }
}



// singly linked list

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct link {
    int data;
    struct link *next;
};

typedef struct link node;

void main() {
    node *ptr, *start;
    int item;
    char ch;

    clrscr(); // for Turbo C, clear screen
    ptr = (node *)malloc(sizeof(node));
    start = ptr;

    printf("\nENTER DATA: ");
    scanf("%d", &item);
    ptr->data = item;

    printf("\nDo you want to add more nodes (y/n)? ");
    fflush(stdin);
    scanf(" %c", &ch);

    while (ch == 'y' || ch == 'Y') {
        ptr->next = (node *)malloc(sizeof(node));
        ptr = ptr->next;

        printf("\nENTER DATA: ");
        scanf("%d", &ptr->data);

        printf("\nDo you want to add more nodes (y/n)? ");
        fflush(stdin);
        scanf(" %c", &ch);
    }

    ptr->next = NULL;
    ptr = start;

    printf("\nElements of Singly Linked List are:\n");
    while (ptr != NULL) {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }

    getch(); // to hold output screen in Turbo C
}





// Doubly linked list


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct dlink {
    int data;
    struct dlink *prev;
    struct dlink *next;
};

typedef struct dlink node;

void main() {
    node *ptr, *start, *temp;
    int item;
    char ch;

    clrscr(); // Clear screen (for Turbo C)
    ptr = (node *)malloc(sizeof(node));
    ptr->prev = NULL;
    ptr->next = NULL;
    start = ptr;

    printf("\nENTER DATA: ");
    scanf("%d", &item);
    ptr->data = item;

    printf("\nDo you want to add more nodes (y/n)? ");
    fflush(stdin);
    scanf(" %c", &ch);

    while (ch == 'y' || ch == 'Y') {
        temp = (node *)malloc(sizeof(node));

        printf("\nENTER DATA: ");
        scanf("%d", &temp->data);

        temp->prev = ptr;
        temp->next = NULL;
        ptr->next = temp;
        ptr = temp;

        printf("\nDo you want to add more nodes (y/n)? ");
        fflush(stdin);
        scanf(" %c", &ch);
    }

    printf("\nElements of Doubly Linked List (Forward Traversal):\n");
    ptr = start;
    while (ptr != NULL) {
        printf("%d\t", ptr->data);
        if (ptr->next == NULL)
            temp = ptr; // last node for reverse display
        ptr = ptr->next;
    }

    printf("\n\nElements of Doubly Linked List (Backward Traversal):\n");
    ptr = temp;
    while (ptr != NULL) {
        printf("%d\t", ptr->data);
        ptr = ptr->prev;
    }

    getch(); // Hold screen (Turbo C)
}







// circular linked list


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct link {
    int data;
    struct link *next;
};

typedef struct link node;

void main() {
    node *ptr, *start, *temp;
    int item;
    char ch;

    clrscr(); // clear screen (for Turbo C)

    // Create the first node
    start = (node *)malloc(sizeof(node));
    start->next = start; // point to itself initially
    ptr = start;

    printf("\nENTER DATA: ");
    scanf("%d", &item);
    ptr->data = item;

    printf("\nDo you want to add more nodes (y/n)? ");
    fflush(stdin);
    scanf(" %c", &ch);

    // Create additional nodes
    while (ch == 'y' || ch == 'Y') {
        temp = (node *)malloc(sizeof(node));

        printf("\nENTER DATA: ");
        scanf("%d", &temp->data);

        temp->next = start;   // last node will point to start
        ptr->next = temp;     // previous node will point to new node
        ptr = temp;           // move pointer to new node

        printf("\nDo you want to add more nodes (y/n)? ");
        fflush(stdin);
        scanf(" %c", &ch);
    }

    printf("\nElements of Circular Linked List are:\n");
    ptr = start;
    do {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    } while (ptr != start);

    getch(); // hold output screen
}











//Menu Based Singly Linked List


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *head = NULL;

void insert_front();
void insert_end();
void insert_middle();
void delete_front();
void delete_end();
void delete_middle();
void display();

void main() {
    int choice;
    clrscr();

    do {
        printf("\n--- MENU ---\n");
        printf("1. Insert in front\n");
        printf("2. Insert at end\n");
        printf("3. Insert in middle\n");
        printf("4. Delete from front\n");
        printf("5. Delete from end\n");
        printf("6. Delete from middle\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert_front();
                break;
            case 2:
                insert_end();
                break;
            case 3:
                insert_middle();
                break;
            case 4:
                delete_front();
                break;
            case 5:
                delete_end();
                break;
            case 6:
                delete_middle();
                break;
            case 7:
                display();
                break;
            case 8:
                printf("\nExiting program...\n");
                break;
            default:
                printf("\nInvalid choice!\n");
        }
    } while (choice != 8);

    getch();
}

// Function to insert node at front
void insert_front() {
    int value;
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter value to insert in front: ");
    scanf("%d", &value);

    newnode->value = value;
    newnode->next = head;
    head = newnode;

    printf("Node inserted at front.\n");
}

// Function to insert node at end
void insert_end() {
    int value;
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter value to insert at end: ");
    scanf("%d", &value);

    newnode->value = value;
    newnode->next = NULL;

    if (head == NULL)
        head = newnode;
    else {
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }

    printf("Node inserted at end.\n");
}

// Function to insert node in middle (after a specific value)
void insert_middle() {
    int value, val_after;
    struct node *newnode, *temp;

    printf("\nEnter value after which to insert: ");
    scanf("%d", &val_after);

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter new value: ");
    scanf("%d", &value);
    newnode->value = value;

    temp = head;
    while (temp != NULL && temp->value != val_after)
        temp = temp->next;

    if (temp == NULL)
        printf("Value not found in list.\n");
    else {
        newnode->next = temp->next;
        temp->next = newnode;
        printf("Node inserted in middle.\n");
    }
}

// Function to delete node from front
void delete_front() {
    struct node *temp;

    if (head == NULL)
        printf("\nList is empty.\n");
    else {
        temp = head;
        head = head->next;
        free(temp);
        printf("Node deleted from front.\n");
    }
}

// Function to delete node from end
void delete_end() {
    struct node *temp, *prev;

    if (head == NULL)
        printf("\nList is empty.\n");
    else if (head->next == NULL) {
        free(head);
        head = NULL;
        printf("Node deleted from end.\n");
    } else {
        temp = head;
        while (temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
        printf("Node deleted from end.\n");
    }
}

// Function to delete node from middle (specific value)
void delete_middle() {
    struct node *temp, *prev;
    int value;

    if (head == NULL) {
        printf("\nList is empty.\n");
        return;
    }

    printf("\nEnter value to delete: ");
    scanf("%d", &value);

    temp = head;
    if (head->value == value) {
        head = head->next;
        free(temp);
        printf("Node deleted from middle.\n");
        return;
    }

    while (temp != NULL && temp->value != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        printf("Value not found in list.\n");
    else {
        prev->next = temp->next;
        free(temp);
        printf("Node deleted from middle.\n");
    }
}

// Function to display linked list
void display() {
    struct node *temp;
    if (head == NULL)
        printf("\nList is empty.\n");
    else {
        printf("\nLinked List Elements:\n");
        temp = head;
        while (temp != NULL) {
            printf("%d\t", temp->value);
            temp = temp->next;
        }
        printf("\n");
    }
}
