/*
연수 N이 주어지면, N의 각 자릿수의 합을 구해서 return 하는 solution 함수를 만들어 주세요.
예를들어 N = 123이면 1 + 2 + 3 = 6을 return 하면 됩니다.

제한사항
N의 범위 : 100,000,000 이하의 자연수
입출력 예
N	    answer
123	    6
987	    24
입출력 예 설명
입출력 예 #1
문제의 예시와 같습니다.

입출력 예 #2
9 + 8 + 7 = 24이므로 24를 return 하면 됩니다.
*/

let n = 123;

console.log(n.toString().split("")); // 문자열 배열로 만들기
n = n.toString().split("");

// 배열로만들었으니 map 시용
n = n.map((v,i,a)=>{return  parseInt(v)}); // 문자형을 숫자로 변경 

// 정수배열을 reduce로 누적 더하기
n = n.reduce((acc,cur)=>{return acc+cur},0);

// 메소드 체이닝으로 코드 정리

n
.toString() // 문자로
.split("")  // 배열로
.map((v,i,a)=>{return parseInt(v)}) // 문자요소를 정수 배열로
.reduce((acc,cur)=>{return acc+cur},0);