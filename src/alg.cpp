// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
int sch=0;
int sch = 0;
for(int i = 0; i < len-1; i++) {
for(int j = i + 1; j < len; j++) {
if (arr[i] + arr[j] == value) sch++;
