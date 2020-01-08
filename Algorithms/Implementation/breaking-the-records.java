import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
  // Complete the breakingRecords function below.
  static int[] breakingRecords(int[] scores) {
    int len = scores.length, no_max = 0, no_min = 0, min = scores[0], max = scores[0];
    for (int i = 1; i < len; i++) {
      if (scores[i] < min) {
        min = scores[i];
        no_min++;
      }
      if (scores[i] > max) {
        max = scores[i];
        no_max++;
      }
    }
    int[] ar = new int[2];
    ar[0] = no_max;
    ar[1] = no_min;
    return ar;
  }

  private static final Scanner scanner = new Scanner(System.in);

  public static void main(String[] args) throws IOException {
    BufferedWriter bufferedWriter =
        new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

    int n = scanner.nextInt();
    scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

    int[] scores = new int[n];

    String[] scoresItems = scanner.nextLine().split(" ");
    scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

    for (int i = 0; i < n; i++) {
      int scoresItem = Integer.parseInt(scoresItems[i]);
      scores[i] = scoresItem;
    }

    int[] result = breakingRecords(scores);

    for (int i = 0; i < result.length; i++) {
      bufferedWriter.write(String.valueOf(result[i]));

      if (i != result.length - 1) {
        bufferedWriter.write(" ");
      }
    }

    bufferedWriter.newLine();

    bufferedWriter.close();

    scanner.close();
  }
}
