/*
정수 배열 array와 정수 n이 매개변수로 주어질 때, array에 들어있는 정수 중 n과 가장 가까운 수를 return 하도록 solution 함수를 완성해주세요.

제한사항
1 ≤ array의 길이 ≤ 100
1 ≤ array의 원소 ≤ 100
1 ≤ n ≤ 100
가장 가까운 수가 여러 개일 경우 더 작은 수를 return 합니다.
입출력 예
array	        n	result
[3, 10, 28]	    20	28
[10, 11, 12]	13	12
입출력 예 설명
입출력 예 #1

3, 10, 28 중 20과 가장 가까운 수는 28입니다.
입출력 예 #2

10, 11, 12 중 13과 가장 가까운 수는 12입니다.
*/

// sort 함수는 숫자를 정렬할 떄 유니코드 포인트의 순서를 기준으로 정렬한다. 따라서 숫자 요소를 정렬할 때는 sort 메서드에 정렬 순서를 정의하는 비교 함수를 인수로 전달해야 한다.

const array = [3, 10, 28];	
const n     = 20

function solution(array, n) {
  array.sort((a, b) => Math.abs(n - a) - Math.abs(n - b) || a - b); // a-b 는 오름차순 정렬을 뜻하는 건가?

    console.log(array)
    return array[0];
}

solution(array,n)
