1.how to compile your program?
enter "make" in command line
2.
*result:
<1000>:
sort():0seconds
v1/v2 are different
insertion_sort():0.01 seconds
v1/v2 are different
<10000>:
sort():0 seconds
v1/v2 are different
insertion_sort():1.29 seconds
v1/v2 are different
<100000>:
sort():0.04seconds
v1/v2 are different
insertion_sort():unknown seconds
v1/v2 are different
<1000000>:
sort():0.51seconds
v1/v2 are different
insertion_sort():unknown seconds
v1/v2 are different
explain:
insertion sort:每次和sorted數比較,最多加總次數n(n-1)/2~n^2
sort():一開始就分成兩部分,再分大小,後排序-->次數減少-->nlogn
