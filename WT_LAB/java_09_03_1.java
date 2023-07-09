public class java_09_03_1 {
    public static void main(String[] args) {
        int[][] arr = {{1, 2}, {3, 4}};

        int leftDiagonalSum = arr[0][0] + arr[1][1];

        int rightDiagonalSum = arr[0][1] + arr[1][0];

        System.out.println("Left Diagonal Sum: " + leftDiagonalSum);
        System.out.println("Right Diagonal Sum: " + rightDiagonalSum);
    }
}
