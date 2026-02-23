#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. 영화 정보 구조체
typedef struct {
    char title[100];
    char director[50];
    int year;
} Movie;

// 2. 동적 배열 관리 구조체
typedef struct {
    Movie* data;     // 영화 배열 포인터
    int count;       // 현재 저장된 영화 수
    int capacity;    // 현재 할당된 총 용량
} MovieManager;

// 초기화 함수
void initManager(MovieManager* manager, int initialCapacity) {
    manager->count = 0;
    manager->capacity = initialCapacity;
    manager->data = (Movie*)malloc(sizeof(Movie) * manager->capacity);

    if (manager->data == NULL) {
        printf("메모리 할당 실패!\n");
        exit(1);
    }
}

// 영화 추가 함수 (용량이 꽉 차면 자동으로 확장)
void addMovie(MovieManager* manager) {
    if (manager->count >= manager->capacity) {
        manager->capacity *= 2; // 용량을 2배로 늘림
        manager->data = (Movie*)realloc(manager->data, sizeof(Movie) * manager->capacity);
        printf(">> 메모리 확장됨! 현재 용량: %d\n", manager->capacity);
    }

    printf("\n[영화 정보 입력]\n");
    printf("제목: ");
    scanf(" %[^\n]s", manager->data[manager->count].title); // 공백 포함 입력
    printf("감독: ");
    scanf(" %[^\n]s", manager->data[manager->count].director);
    printf("개봉연도: ");
    scanf("%d", &manager->data[manager->count].year);

    manager->count++;
    printf("영화가 추가되었습니다.\n");
}

// 목록 출력 함수
void listMovies(MovieManager* manager) {
    if (manager->count == 0) {
        printf("\n저장된 영화가 없습니다.\n");
        return;
    }

    printf("\n--- 영화 목록 (%d/%d) ---\n", manager->count, manager->capacity);
    for (int i = 0; i < manager->count; i++) {
        printf("%d. %s | %s | %d년\n", i + 1,
               manager->data[i].title,
               manager->data[i].director,
               manager->data[i].year);
    }
}

// 메모리 해제 함수
void freeManager(MovieManager* manager) {
    free(manager->data);
    manager->data = NULL;
    manager->count = 0;
    manager->capacity = 0;
}

int main() {
    MovieManager myManager;
    initManager(&myManager, 2); // 초기 용량 2로 시작

    int choice;
    while (1) {
        printf("\n1.추가  2.목록  3.종료\n선택: ");
        scanf("%d", &choice);

        if (choice == 1) addMovie(&myManager);
        else if (choice == 2) listMovies(&myManager);
        else if (choice == 3) break;
        else printf("잘못된 선택입니다.\n");
    }

    freeManager(&myManager);
    printf("프로그램을 종료합니다.\n");
    return 0;
}