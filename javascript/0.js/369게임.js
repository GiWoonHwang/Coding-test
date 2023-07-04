/* 
머쓱이는 친구들과 369게임을 하고 있습니다. 369게임은 1부터 숫자를 하나씩 대며 3, 6, 9가 들어가는 숫자는 숫자 대신 3, 6, 9의 개수만큼 박수를 치는 게임입니다. 머쓱이가 말해야하는 숫자 order가 매개변수로 주어질 때, 머쓱이가 쳐야할 박수 횟수를 return 하도록 solution 함수를 완성해보세요.

제한사항
1 ≤ order ≤ 1,000,000
입출력 예
order	result
3	    1
29423	2
입출력 예 설명
입출력 예 #1

3은 3이 1개 있으므로 1을 출력합니다.
입출력 예 #2

29423은 3이 1개, 9가 1개 있으므로 2를 출력합니다.
*/

// String.prototype.matchAll() => 캡쳐그룹을 포함하여 정규식에 대한 문자열과 일치하는 모든 결과의 반복자(iterator) object가 반환한다.

// 예시
// let regexp = /고(양)(이(\d?))/g;
// let str = "고양이1고양이2";

// let array = [...str.matchAll(regexp)];

const order = 29423;


// function solution(order) {
//     let answer = [...order.toString().matchAll(/[3|6|9]/g)].length;
//     return answer;
// }


let answer = [...order.toString()] //[("2", "9", "4", "2", "3")];

console.log(answer)

let answer2 = [...order.toString().matchAll(/[3|6|9]/g)].length;
// [
//   [ '9', index: 1, input: '29423', groups: undefined ],
//   [ '3', index: 4, input: '29423', groups: undefined ]
// ]

console.log(answer2)