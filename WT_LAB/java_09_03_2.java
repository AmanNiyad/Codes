public class java_09_03_2{
    public static void main(String[] args) {
        int[][] jaggedArray = {{2, 4, 6},{8, 10},{12},{14, 16},{18, 20, 22}};

        for (int i=0;i<jaggedArray.length;i++) {
            for (int j=0;j<jaggedArray[i].length;j++) {
                System.out.print(jaggedArray[i][j] + " ");
            }
            System.out.println();
        }
    }
}
