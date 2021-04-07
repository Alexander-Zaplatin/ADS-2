// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
int res = 0;
for (int i = 0; i < len - 1; i++) {
for (int j = i + 1; j <= len; j++) {
if (arr[i] + arr[j] == value) res++;
}
}
  return res;
}

int countPairs2(int *arr, int len, int value) {
int res = 0;
int num = 0;
int m = len - 1;
int h = -1;
while (h != value) {
if (arr[m] > value) m--;
if (arr[m] == value) h = value;
}
for (int i = 0; i < m - 1; i++) {
for (int j = 0; i <= m; j++) {
if (arr[i] + arr[j] == value) res++;
}
}
  return res;
}

int countPairs3(int *arr, int len, int value) {
int res = 0;
int r = len - 1;
int l = 0;
while (r - 1 < l) {
int mid = (l + r) / 2;
if (value >= arr[mid]) l = mid;
else
r = mid;
}
}
len = r - 1;
for (i = 0; i < len; i++) {
l = i + 1;
r = len - 1;
int res2 = 0;
while (r > l) {
int mid = (l + r) / 2;
if ((value - arr[i]) > arr[mid]) l = mid + 1;
else
r = mid;
}
}
while ((value - arr[i]) == arr[l]) {
res2++;
l++;
}
res = res + res2;
}
  return res;
}
