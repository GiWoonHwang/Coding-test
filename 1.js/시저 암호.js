/*
어떤 문장의 각 알파벳을 일정한 거리만큼 밀어서 다른 알파벳으로 바꾸는 암호화 방식을 시저 암호라고 합니다. 예를 들어 "AB"는 1만큼 밀면 "BC"가 되고, 3만큼 밀면 "DE"가 됩니다. "z"는 1만큼 밀면 "a"가 됩니다. 문자열 s와 거리 n을 입력받아 s를 n만큼 민 암호문을 만드는 함수, solution을 완성해 보세요.

제한 조건
공백은 아무리 밀어도 공백입니다.
s는 알파벳 소문자, 대문자, 공백으로만 이루어져 있습니다.
s의 길이는 8000이하입니다.
n은 1 이상, 25이하인 자연수입니다.
입출력 예
s	    n	result
"AB"	1	"BC"
"z"	    1	"a"
"a B z"	4	"e F d"
 */


/*

도저히 못풀겠어서 다른사람 코드 참고

문자열     -> 아스키코드 : s.charCodeAt()
아스키코드 -> 문자열     : String.fromCharCode()
대문자 A: 65 Z: 90
소문자 a: 87 z: 122

1. 문자열을 map으로 순회하면 공백이면 리턴한다.
2. 문자열이 있다면 아스키 코드로 변환한다.
3. 변환한 아스키코드(소문자 기준) + n이 122 이상이면 -26을 해준다
*/

let s = "a B z";
let n = 4;

console.log(s.split("").map((v,i,a)=>{
    if(v == " ") return v;
    let tmp = v.charCodeAt(); // 문자 하나하나에 대한 아슼키 코드
    console.log(tmp)
    return v.toLowerCase().charCodeAt() + n > 122  // z에 해당하는 아스키 코드 값을 넘으면
    ?  String.fromCharCode(tmp + n - 26)
    :  String.fromCharCode(tmp + n);

}).join("")
);