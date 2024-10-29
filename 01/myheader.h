struct Data {
  int yy, mm, dd;
};

struct tagGoods {   // 78 байт
  double price;  // 8 байт
  char name[50]; // 50 байт
  char *prod;    // 4 байта
  int weight;    // 4 байта
  struct Data data; // 12 байт
};

typedef struct tagGoods Goods;

/*
2011 [Кораблин] Программирование на языке Си
Модуль 11 Структуры.wmv
2:05

Структура данных
*/