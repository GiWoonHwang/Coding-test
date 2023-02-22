/*
문자열 s는 한 개 이상의 단어로 구성되어 있습니다. 각 단어는 하나 이상의 공백문자로 구분되어 있습니다. 각 단어의 짝수번째 알파벳은 대문자로, 홀수번째 알파벳은 소문자로 바꾼 문자열을 리턴하는 함수, solution을 완성하세요.

제한 사항
문자열 전체의 짝/홀수 인덱스가 아니라, 단어(공백을 기준)별로 짝/홀수 인덱스를 판단해야합니다.
첫 번째 글자는 0번째 인덱스로 보아 짝수번째 알파벳으로 처리해야 합니다.
입출력 예
s	                return
"try hello world"	"TrY HeLlO WoRlD"
입출력 예 설명
"try hello world"는 세 단어 "try", "hello", "world"로 구성되어 있습니다. 각 단어의 짝수번째 문자를 대문자로, 홀수번째 문자를 소문자로 바꾸면 "TrY", "HeLlO", "WoRlD"입니다. 따라서 "TrY HeLlO WoRlD" 를 리턴합니다.

*/

// 인덱스가 짝수다 == 나누어 떨어져서 0이 되어야 한다.
// split를 한번만 써서는 통과하지 못한다 -> 

let s = "try hello world"; 


// let result = s
// .split("")
// .map((s_v,s_i,s_a)=>s_v.split("").map((v,i,a)=> i % 2 === 0 ? v[i].toUpperCase() : v[i].toLowerCase()))
// .join("")
// let data = result.map((v,i,a)=>
    
//     // console.log(result[i])
//     i % 2 === 0 ?  result[i].toUpperCase() : result[i].toLowerCase()
// ).join("")

// 초기에 split으로 분리할떄 .split("")으로 하면 테스트 케이스는 통과하지만 문제는 통과하지 못한다. split(" ") split("") 두번 사용하니 통과됨
s
.split(" ")
.map((word) =>
  word
    .split("")
    .map((char, index) =>
      index % 2 === 0
        ? word[index].toUpperCase()
        : word[index].toLowerCase()
    )
    .join("")
)
.join(" ");
  



