import java.util.Scanner;

class BinarySearch { 
    Boolean binarySearch(int arr[], int x) { 
        int l = 0, r = arr.length - 1; 
        while (l <= r) { 
            int m = l + (r - l) / 2; 
            if (arr[m] == x) 
                return true; 
            if (arr[m] < x) 
                l = m + 1; 
            else
                r = m - 1; 
        } 
        return false; 
    } 
  
    public static void main(String args[]) { 
        BinarySearch ob = new BinarySearch(); 
        Scanner s = new Scanner(System.in);
        int size = s.nextInt();
        int size1 = s.nextInt();
        int a[] = new int[size];
        int b[] = new int[size1];
        for(int i = 0; i < size; i++){
            a[i] = s.nextInt();
        }
        for(int i = 0; i < size; i++){
            b[i] = s.nextInt();
        }
        for(int i = 0; i < size1; i++){
            if (ob.binarySearch(a, b[i]))
                System.out.println("YES");
            else System.out.println("NO");
        }
    } 
}