/* 9086번. 문자열 (C++) */

/* 1. #include <iostream>
     - 프로그램이 실행되기 전 iostream을 통한 입출력 라이브러리를 먼저 불러와서 소스에 포함시키겠다는 뜻
     
     2. iostream
     - 스트림을 사용한 입출력을 제공하는 객체 지향 라이브러리
     - cin, cout, cerr, clog 등 포함하며 코드에 해당 명령어들을 실행시킬 수 있도록 준비시킴

     3. 스트림(stream)
     - 입출력 작업이 수행되는 장치를 추상화한 개념
     - 기본적으로 임의의 길이의 문자들(characters)의 근원지(source) 또는 도착지(destination)로 표현됨
     - 문자들의 근원지와 도착지의 역할을 하는 물리적인 장치와 연관되어 있음 (예 : 디스크 파일, 키보드, 콘솔 창 등)
*/
#include <iostream>
#include <cstring>

/*  using namespace std
     - using : 사용하는 것 / namespace : 이름 공간 / std : 클래스
     - 직역 => 이름공간에 있는 클래스에 정의되어 있는 함수들을 사용하겠음
     - using namespace std; 를 선언해줘야 여러가지 함수를 올바르게 사용할 수 있음
     - std::cout이라고 매번 쓰기에 번거로움이 있어 명시하는 것임 (cout는 C++ 출력문)
     - C와 달리 C++은 클래스로 이루어져 있어 그 중 std라는 클래스를 사용한다는 것을 명시함
*/
using namespace std;

int main(void) {
    int T; // 테스트 케이스의 개수 T

    /* C++ 입력함수
         - cin : 입력함수 (C언어로 따지면 scanf 또는 scanf_s)
         - 사용방법 : cin >> 입력받을 변수;
    */
    cin >> T; // T값 입력 받음 ('예제 입력 1' 3에 해당)

    /* 크기가 1000인 char형 배열 선언
         - 입력받은 문자열을 저장할 공간
         - 문자열의 길이는 1000보다 작음
         - 문자열의 끝을 나타내기 위해 NULL 문자 추가
    */
    char str[1000] = { '\0' , };

    // 테스트 케이스의 개수인 T만큼 반복
    for (int i = 0; i < T; i++) {
        // 문자열 입력 받아 배열 str에 저장
        // cin : 입력함수 (C언어로 따지면 scanf 또는 scanf_s)
        cin >>  str;

        /* 1. C++ 출력함수
             - cout : 출력함수 (C언어로 따지면 printf)
             - 사용방법 : cout << 화면에 출력할 내용;
             
             2. C++ 줄바꿈
             - endl : 줄바꿈 (C언어로 따지면 \n)
             - 사용방법 : cout << 화면에 출력할 내용 << endl;
        */
        cout << str[0] << str[strlen(str) - 1] << endl;
    }
    return 0;
}

/* [비고]
     1. 오류 해결
     - cout << str[strlen(str) - 1] << str[0] << endl 로 작성하면 반대로 나옴 (원래 결과값 : AB , 출력되는 값 : BA)
     - strlen 함수를 사용하기 위해 #include <cstring> 헤더파일 추가
        → #include <iostream>에는 #include <string>이 내장되어 있음
        → #include <string>을 #include <cstring> 또는 #include <string.h> 로 수정 (백준에서는 이렇게 사용해야 하는건가.. 흠...)
*/

