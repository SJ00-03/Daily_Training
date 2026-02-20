# TRAINING_PROFILE (Daily_Training)

> 이 파일은 “내가 지금 무엇을 할 수 있는지 / 어디서 자주 틀리는지 / 다음에 뭘 할지”를 누적 관리합니다.

## 현재 상태(요약)
- Python: 자료구조 직접 구현(연결리스트 기반 Stack/Queue) 시도 경험 있음
- Baekjoon: 10773(제로), 10828(스택) 풀이 경험
- 목표: 스택 → 큐 → 덱/우선순위큐/해시로 확장

## 자주 쓰는 패턴(정답률/속도 올리는 규칙)
### Python
- 입력: `sys.stdin.readline`
- 출력: `answers.append()`로 모아서 `"\n".join(answers)`
- 큐/덱: `collections.deque`

### C
- 스택/큐: 배열 + 인덱스(top/front/rear)로 구현
- 문자열 명령 처리: `char cmd[20]; scanf("%s", cmd);` + `strcmp`
- 빈 자료구조 처리 규칙:
  - pop/top/front/back: 비면 -1
  - empty: 비면 1, 아니면 0
  - size: 원소 개수

## 실수 패턴(갱신)
- (예시) empty 조건 체크 전에 front/back 접근
- (예시) top 증감 위치 헷갈림: `stack[top++]` vs `stack[--top]`
- (예시) Python에서 출력 즉시 print 반복 → 시간 초과 위험

## DAY 로그 (짧게만 누적)
### Day1(2.17)
- Python: 10828(스택), 10773(제로)
- 배운 규칙:
- 실수:

### DAY2(2.19)
- Python: 10845(큐) 목표
- C: 10828 스택 재구현 목표
- 배운 규칙:
- 실수:
