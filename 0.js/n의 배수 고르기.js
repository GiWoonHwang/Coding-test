/*
정수 n과 정수 배열 numlist가 매개변수로 주어질 때, numlist에서 n의 배수가 아닌 수들을 제거한 배열을 return하도록 solution 함수를 완성해주세요.

제한사항
1 ≤ n ≤ 10,000
1 ≤ numlist의 크기 ≤ 100
1 ≤ numlist의 원소 ≤ 100,000
입출력 예
n	numlist	                        result
3	[4, 5, 6, 7, 8, 9, 10, 11, 12]	[6, 9, 12]
5	[1, 9, 3, 10, 13, 5]	        [10, 5]
12	[2, 100, 120, 600, 12, 12]	    [120, 600, 12, 12]
입출력 예 설명
입출력 예 #1

numlist에서 3의 배수만을 남긴 [6, 9, 12]를 return합니다.
입출력 예 #2

numlist에서 5의 배수만을 남긴 [10, 5]를 return합니다.
입출력 예 #3

numlist에서 12의 배수만을 남긴 [120, 600, 12, 12]를 return합니다.
*/

// filter() 메서드는 주어진 함수의 테스트를 통과하는 모든 요소를 모아 새로운 배열로 반환합니다.
function solution(n, numlist) {
    return numlist.filter((num) => num % n === 0);
}


const numlist = [4, 5, 6, 7, 8, 9, 10, 11, 12];
const n       = 3;

console.log(numlist.filter((num)=>num % n == 0))