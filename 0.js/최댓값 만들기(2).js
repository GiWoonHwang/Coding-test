/* 
정수 배열 numbers가 매개변수로 주어집니다. numbers의 원소 중 두 개를 곱해 만들 수 있는 최댓값을 return하도록 solution 함수를 완성해주세요.

제한사항
-10,000 ≤ numbers의 원소 ≤ 10,000
2 ≤ numbers 의 길이 ≤ 100
입출력 예
numbers	                    result
[1, 2, -3, 4, -5]	        15
[0, -31, 24, 10, 1, 9]	    240
[10, 20, 30, 5, 5, 20, 5]	600
입출력 예 설명
입출력 예 #1

두 수의 곱중 최댓값은 -3 * -5 = 15 입니다.
입출력 예 #2

두 수의 곱중 최댓값은 10 * 24 = 240 입니다.
입출력 예 #3

두 수의 곱중 최댓값은 20 * 30 = 600 입니다.
*/

let numbers = [1, 2, -3, 4, -5];
numbers.sort((a,b) => a -b)

const data  = Math.max(numbers[0]*numbers[1], numbers[numbers.length-1]*numbers[numbers.length-2]);
