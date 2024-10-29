#define MAXFNAME 56

struct tagEmployer { // сотрудник
  char name[MAXFNAME]; // имя
  double zp; // зарплата
  int age; // возраст
  struct tagEmployer *pnext, *pprev; // указатели вперед и назад
};

typedef struct tagEmployer Employer;


