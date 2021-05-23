// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
int a = 0;
for (int i = 0; i < len-1; i++) {
for (int j = i+1; j <= len; j++) {
if ((arr[i] + arr[j]) == value) a=a+1;
for (int j = i+1; j < len; j++) {
if ((arr[i] + arr[j]) == value) a++;
}
}
return a;
@@ -19,7 +19,7 @@ else
r = m;
}
len = r - 1;
for (int i = l; i >= 0; i--) {
for (int i = len; i >= 0; i--) {
for (int j = 0; j < i; j++) {
if (arr[i] + arr[j] == value)
a++;
