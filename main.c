/* 
  파일이름: 2024시즌 구자욱 선수의 타격성적 분석
  작 성 자: 이창언
  하 는 일: 구자욱 선수의 커리어 하이 시즌인 2024년도의 타격 기록을 분석한다
*/

#include <stdio.h>

int main() {
  // 1. 변수 선언 
  char last_name[10]; 
  int back_number;
  float avg;
  float obp;
  float slg;
  float ops;

  // 2. 프로그램 시작 화면 출력
  printf("삼성 라이온즈의 주장 구자욱 선수의 2024 성적 분석 프로그램에 오신 걸 환영합니다!\n");
  printf("==========================================================================\n\n");

  // 3. 사용자 입력 받기 (변수 출력 없이 안내 문구만 작성)
  printf("성(Last Name) 입력: ");
  scanf("%s", last_name); // 문자열 배열은 & 기호를 붙이지 않습니다.
  
  printf("등번호 입력: ");
  scanf("%d", &back_number);

  printf("타율 입력: ");
  scanf("%f", &avg);

  printf("출루율 입력: ");
  scanf("%f", &obp);

  printf("장타율 입력: ");
  scanf("%f", &slg);

  // 4. 계산: OPS는 출루율과 장타율의 합
  ops = obp + slg;

  // 5. 결과 출력
  printf("\n======================= 입력 결과 =======================\n");
  printf("선수 이름: %s자욱\n", last_name);
  printf("등번호: %d\n", back_number);
  printf("타율: %.3f\n", avg);
  printf("출루율: %.3f\n", obp);
  printf("장타율: %.3f\n", slg);
  printf("OPS: %.3f\n", ops); // 계산된 OPS 출력
  printf("=========================================================\n");

  return 0;
}
