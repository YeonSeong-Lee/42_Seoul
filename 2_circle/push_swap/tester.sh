#!/bin/bash
# by jeonpark
# 랜덤 생성 코드 by https://42born2code.slack.com/archives/CU6MU5TB7/p1618280285371100?thread_ts=1618252568.360600&cid=CU6MU5TB7



push_swap=push_swap
checker=checker_Mac
result_temp_file=.push_swap_result_temp



if [[ $# -ne 2 ]]; then
	echo 'usage: bash push_swap_test.sh <number> <times>'
	exit 0
fi



number=$1
times=$2



if [[ $number -le 3 ]]; then
	limit=2
elif [[ $number -le 5 ]]; then
	limit=12
elif [[ $number -le 100 ]]; then
	limit=700
elif [[ $number -le 500 ]]; then
	limit=5300
fi



biggest_instruction_count=-1
while [[ $times -gt 0 ]]; do
	ARG=$(ruby -e "puts (1..$number).to_a.shuffle.join(' ')")

	./$push_swap $ARG > $result_temp_file
	checker_result=$(cat $result_temp_file | ./$checker $ARG)
	instruction_count=$(printf '%d' $(cat $result_temp_file | wc -l))

	echo "[$checker_result]	instruction count: $instruction_count"
	if [[ $checker_result != OK || $instruction_count -gt $limit ]]; then
		echo "Issue arguments: $ARG"
	fi

	if [[ $instruction_count -gt $biggest_instruction_count ]]; then
		biggest_instruction_count=$instruction_count
		biggest_input=$ARG
	fi

	times=$((times - 1))
done
rm $result_temp_file



echo
echo "biggest_instruction_count instruction count: [$biggest_instruction_count]"
echo "arguments: $biggest_input"
