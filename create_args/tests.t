#!/bin/sh

test_description="args management"
. sharness.sh

# test_expect_success "compile" "
#    test_expect_code 127 make		    
# "

test_expect_success "padding" "
	../args 50 d 5 0 0 0 | egrep  '^ {5}50' &&
	../args 50 d 6 0 0 0 | egrep  '^ {6}50'
"
test_expect_success "neg padding" "
	../args 50 d -5 0 0 0 | egrep  '50 {5}' 
"

test_expect_success "precision" "
	../args 50 d 0 5 0 0 | egrep  '50ppp' 
"

test_done
