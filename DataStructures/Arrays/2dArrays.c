/*
 * HackerRank Challenge: 2D Arrays - Hourglass Sum
 *
 * Description:
 * This program calculates the maximum hourglass sum in a 6x6 2D array of integers.
 * An hourglass is a subset of array elements with the following pattern:
 *
 *   a b c
 *     d
 *   e f g
 *
 * The 2D array contains exactly 16 hourglasses. The task is to:
 * - Traverse all possible hourglasses in the array
 * - Compute the sum of each hourglass
 * - Return the maximum hourglass sum found
 *
 * Example Input:
 * 1 1 1 0 0 0
 * 0 1 0 0 0 0
 * 1 1 1 0 0 0
 * 0 0 2 4 4 0
 * 0 0 0 2 0 0
 * 0 0 1 2 4 0
 *
 * Maximum hourglass sum: 19
 * (From the hourglass starting at row 3, column 2)
 *
 * Constraints:
 * - The input array size is always 6x6.
 * - Each integer is in a reasonable range defined by HackerRank.
 *
 * This challenge tests your ability to work with 2D arrays and apply
 * pattern-based traversal using loops and indexing.
 *
 * Author: Yavuz Selim Kaya
 */

int hourglassSum(int arr_rows, int arr_columns, int** arr) {
    
    int sum=0;
    int temp=-63;
    for(int i = 0; i < arr_rows - 2; i++){
        for(int j = 0; j < arr_columns - 2; j++){
            sum = arr[i][j] + arr[i][j+1] +  arr[i][j+2] +  arr[i+1][j+1] +  arr[i+2][j] + arr[i+2][j+1] +  arr[i+2][j+2];
            if(sum>temp)
                temp = sum;
        }
    }
    return temp;
}



