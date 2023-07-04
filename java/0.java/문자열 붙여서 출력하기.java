/**
 * 입력받은 두개의 문자열을 합쳐서 출력하라
 */

import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String b = sc.next();

        String result = a + b;

        System.out.println(result);
    }
}