int isPrime(int number) {
  int d = 0, i = 1;

  while (i <= number) {
    if (number % i == 0) {
      d++;
    }
    if (d == 3) {
      return 0;
    }
    i++;
  }

  return (d == 2) ? 1 : 0;
}
