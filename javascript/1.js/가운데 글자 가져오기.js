/*
단어 s의 가운데 글자를 반환하는 함수, solution을 만들어 보세요. 단어의 길이가 짝수라면 가운데 두글자를 반환하면 됩니다.

재한사항
s는 길이가 1 이상, 100이하인 스트링입니다.
입출력 예
s	        return
"abcde"	    "c"
"qwer"	    "we"
*/

// 홀수: 배열의 길이 절반에 해당하는 인덱스를 리턴한다. ex) arr.length = 5  -> 5/2 = 2 arr[2] = 배열의 가운데 요소(배열은 0부터 시작하기 때문에)
// 짝수: 배열길이의 절반 -1 + 절반

let s = "abcde";
let center = parseInt(s.length / 2);
console.log(Boolean(s.length % 2)); // % 같은 경우 나머지가 존재하면 true

// s[center] 값이 undefined로 나옴 = > parseInt로 해결
// 이해안되는점: 다른사람의 풀이를 보니 홀수일 때 return 값인 s[parseInt(center)] 만 parseInt처리를 했다. 왜 짝수일 때 s[center-1] + s[center]에서 s[center]는 parseInt를 하지 않아도 점답처리가 될까
s.length % 2 ? s[parseInt(center)] : s[center-1] + s[center];

// 나는 center 변수 초기화 할때 애초에 parseInt를 줌
s.length % 2 ? s[center] : s[center-1] + s[center];
