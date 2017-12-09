#!/bin/sh

## envs
cmd=../../printf
args=`cat ./tests`

## starting
test_description="basix"
. sharness.sh

## tests

for	arg in $args; do
	arg1=`echo $arg | cut  -d , -f 1`
	arg2=`echo $arg | cut  -d , -f 2`
	test_expect_success "$arg" "
		$cmd $arg1 | grep $arg2
	"
done
	
test_expect_failure "must fail" "
	$cmd | grep 49
"
test_expect_success "print" "
	$cmd | grep 50
"
test_expect_success "return" "
	test_expect_code 0 $cmd
"

test_done
