/*
 * HackerRank Challenge: Arrays - Left Rotation
 *
 * Description:
 * This program performs 'd' left rotations on an array of integers.
 * A left rotation shifts each element of the array one position to the left,
 * and the first element moves to the end of the array. This operation is repeated 'd' times.
 *
 * For example:
 * Input:  arr = [1, 2, 3, 4, 5], d = 4
 * After 4 left rotations: [5, 1, 2, 3, 4]
 *
 * Function Signature:
 * vector<int> rotateLeft(int d, vector<int> arr)
 *
 * Parameters:
 * - d: Integer representing the number of left rotations
 * - arr: A vector of integers representing the original array
 *
 * Returns:
 * - A vector of integers representing the rotated array
 *
 * Input Format:
 * - The first line contains two space-separated integers, n (size of the array) and d (number of rotations).
 * - The second line contains n space-separated integers representing the array elements.
 *
 * Constraints:
 * - 1 <= n <= 10^5
 * - 1 <= d <= n
 * - 1 <= arr[i] <= 10^6
 *
 * This challenge is designed to test your understanding of array manipulation and
 * efficient indexing in circular data structures.
 *
 * Author: Yavuz Selim Kaya
 */


int* rotateLeft(int d, int arr_count, int* arr, int* result_count) {
    *result_count = arr_count;
    for(int i = 0; i < d; i++){
        int temp = arr[0];
        
        
        for(int j = 0; j < arr_count; j++){
            arr[j] = arr[j+1];
        }
        arr[arr_count-1] = temp;
    }
    return arr;
}


