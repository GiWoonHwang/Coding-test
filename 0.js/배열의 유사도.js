/* 
두 배열이 얼마나 유사한지 확인해보려고 합니다. 문자열 배열 s1과 s2가 주어질 때 같은 원소의 개수를 return하도록 solution 함수를 완성해주세요.

제한사항
1 ≤ s1, s2의 길이 ≤ 100
1 ≤ s1, s2의 원소의 길이 ≤ 10
s1과 s2의 원소는 알파벳 소문자로만 이루어져 있습니다
s1과 s2는 각각 중복된 원소를 갖지 않습니다.
입출력 예
s1	                s2	                            result
["a", "b", "c"]	    ["com", "b", "d", "p", "c"]	    2
["n", "omg"]	    ["m", "dot"]	                0
입출력 예 설명
입출력 예 #1

"b"와 "c"가 같으므로 2를 return합니다.
입출력 예 #2

같은 원소가 없으므로 0을 return합니다.
*/

const s1 = ["a", "b", "c"];
const s2 = ["com", "b", "d", "p", "c"];

const intersaction = s1.filter((x)=> s2.includes(x));
console.log(intersaction)



// function solution(s1, s2) {
//   const intersection = s1.filter((x) => s2.includes(x));
//   return intersection.length;
// }
