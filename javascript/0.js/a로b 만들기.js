/* 
문자열 before와 after가 매개변수로 주어질 때, before의 순서를 바꾸어 after를 만들 수 있으면 1을, 만들 수 없으면 0을 return 하도록 solution 함수를 완성해보세요.

제한사항
0 < before의 길이 == after의 길이 < 1,000
before와 after는 모두 소문자로 이루어져 있습니다.
입출력 예
before	    after	result
"olleh"	    "hello"	1
"allpe"	    "apple"	0
입출력 예 설명
입출력 예 #1

"olleh"의 순서를 바꾸면 "hello"를 만들 수 있습니다.
입출력 예 #2

"allpe"의 순서를 바꿔도 "apple"을 만들 수 없습니다.
*/

// 
let before = "olleh";
let after  = "hello";

function solution(before, after) {
    return before.split("").sort().join("") === after.split("").sort().join("") ? 1 : 0;
}

console.log(before.split("").sort()); // [ 'e', 'h', 'l', 'l', 'o' ]
console.log('이거',before.split("").sort().join("")); // [ 'e', 'h', 'l', 'l', 'o' ]

// console.log("뭔차이",before.sort()); // 배열 아니면 sort가 안되는구나
