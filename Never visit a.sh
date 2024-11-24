n=$1
while : ; do
	#calculate sum of digits
	sum=0
	num=$n
	while [[ $num -gt 0 ]]; do
		digit=$((num % 10))
		sum=$((sum + digit))
		num=$((num / 10))
	done

	n=$((n - sum))
	[[ $n -gt 100 ]] || break
done

case $n in
1 )
echo "kiwi"
;;
2 )
echo "pear"
;;
3 )
echo "kiwi"
;;
4 )
echo "banana"
;;
5 )
echo "melon"
;;
6 )
echo "banana"
;;
7 )
echo "melon"
;;
8 )
echo "pineapple"
;;
9 )
echo "apple"
;;
10 )
echo "pineapple"
;;
11 )
echo "cucumber"
;;
12 )
echo "pineapple"
;;
13 )
echo "cucumber"
;;
14 )
echo "orange"
;;
15 )
echo "grape"
;;
16 )
echo "orange"
;;
17 )
echo "grape"
;;
18 )
echo "apple"
;;
19 )
echo "grape"
;;
20 )
echo "cherry"
;;
21 )
echo "pear"
;;
22 )
echo "cherry"
;;
23 )
echo "pear"
;;
24 )
echo "kiwi"
;;
25 )
echo "banana"
;;
26 )
echo "kiwi"
;;
27 )
echo "apple"
;;
28 )
echo "melon"
;;
29 )
echo "banana"
;;
30 )
echo "melon"
;;
31 )
echo "pineapple"
;;
32 )
echo "melon"
;;
33 )
echo "pineapple"
;;
34 )
echo "cucumber"
;;
35 )
echo "orange"
;;
36 )
echo "apple"
;;
37 )
echo "orange"
;;
38 )
echo "grape"
;;
39 )
echo "orange"
;;
40 )
echo "grape"
;;
41 )
echo "cherry"
;;
42 )
echo "pear"
;;
43 )
echo "cherry"
;;
44 )
echo "pear"
;;
45 )
echo "apple"
;;
46 )
echo "pear"
;;
47 )
echo "kiwi"
;;
48 )
echo "banana"
;;
49 )
echo "kiwi"
;;
50 )
echo "banana"
;;
51 )
echo "melon"
;;
52 )
echo "pineapple"
;;
53 )
echo "melon"
;;
54 )
echo "apple"
;;
55 )
echo "cucumber"
;;
56 )
echo "pineapple"
;;
57 )
echo "cucumber"
;;
58 )
echo "orange"
;;
59 )
echo "cucumber"
;;
60 )
echo "orange"
;;
61 )
echo "grape"
;;
62 )
echo "cherry"
;;
63 )
echo "apple"
;;
64 )
echo "cherry"
;;
65 )
echo "pear"
;;
66 )
echo "cherry"
;;
67 )
echo "pear"
;;
68 )
echo "kiwi"
;;
69 )
echo "pear"
;;
70 )
echo "kiwi"
;;
71 )
echo "banana"
;;
72 )
echo "apple"
;;
73 )
echo "banana"
;;
74 )
echo "melon"
;;
75 )
echo "pineapple"
;;
76 )
echo "melon"
;;
77 )
echo "pineapple"
;;
78 )
echo "cucumber"
;;
79 )
echo "pineapple"
;;
80 )
echo "cucumber"
;;
81 )
echo "apple"
;;
82 )
echo "grape"
;;
83 )
echo "orange"
;;
84 )
echo "grape"
;;
85 )
echo "cherry"
;;
86 )
echo "grape"
;;
87 )
echo "cherry"
;;
88 )
echo "pear"
;;
89 )
echo "cherry"
;;
90 )
echo "apple"
;;
91 )
echo "kiwi"
;;
92 )
echo "banana"
;;
93 )
echo "kiwi"
;;
94 )
echo "banana"
;;
95 )
echo "melon"
;;
96 )
echo "banana"
;;
97 )
echo "melon"
;;
98 )
echo "pineapple"
;;
99 )
echo "apple"
;;
100 )
echo "pineapple"
;;

esac
