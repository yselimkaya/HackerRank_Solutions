/* 
 * HackerRank Challenge: Arrays - Reverse an Array
 *
 * Description:
 * This program defines a function that reverses a given array of integers.
 * Arrays are fixed-size, contiguous memory blocks that store elements of the same type.
 * The function takes an array as input and returns a new array where the order of elements is reversed.
 *
 * Example:
 * Input:  [1, 4, 3, 2]
 * Output: [2, 3, 4, 1]
 *
 * Constraints:
 * - The number of elements (n) will be in the valid range defined by HackerRank.
 * - All elements are integers.
 *
 * This is a basic array manipulation problem designed to test your understanding
 * of indexing and iteration in arrays.
 *
 * Author: Yavuz Selim Kaya
*/

int* reverseArray(int a_count, int* a, int* result_count) {
    *result_count = a_count;
    int* reversed = malloc(a_count * sizeof(int));
    for(int i = 0; i < a_count; i++){
        reversed[i] = a[a_count - 1 - i];
        
    }
    return reversed;
 
}
