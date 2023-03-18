//Diamond Phouthavanh
//di151455
//Lab Assignment #7

#include <stdio.h>

//function that swaps the elements at the passed indexes
void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

//function that sorts the adjacent elements until it is in ascending order
int bubbleSort(int* list, int size)
{   
    //create count that keeps track of how many swaps were done
    int count = 0;

    //outer loop swaps largest element to the end
    for(int x = 0; x < size-1; x++)
    {   
        //inner loop swaps adjacent elements while ignoring the elements that have "bubbled up"
        for(int y = 0; y < size - x - 1; y++)
        {
            //enter if-statement to determine if you swap
            if(list[y] > list[y+1])
            {
                //call swap function
                swap(&list[y], &list[y+1]);

                //add to count
                count++;
            }
        }
    }

    //return number of swaps
    return count;
}

int main()
{   
    //declare and initialize variables
    int list[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int size = 9;
    int count;

    //set count = to the function call
    count = bubbleSort(list, size);

    //print amount of swaps
    printf("Swap Count: %d\n", count);

    //end program
    return 0; 
}