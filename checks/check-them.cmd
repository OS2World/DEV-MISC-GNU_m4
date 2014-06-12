extproc sh

#!/bin/sh
# Check GNU m4 against examples from the manual source.
# Copyright (C) 1992 Free Software Foundation, Inc.

out=m4$$.out
err=m4$$.err
xout=m4$$x.out
xerr=m4$$x.err

trap "rm -f $out $err $xout $xerr; exit 1" 2 15

m4 --version

for file
do
  echo "Checking $file"
  m4 -d $file >$out 2>$err

  sed -e '/^dnl @result{}/!d' -e 's///' $file > $xout

  if cmp -s $out $xout; then
    :
  else
    failed="$failed $file:out"
    echo `sed -e 's/^dnl //' -e 1q $file`
    echo "$file: stdout mismatch"
    diff $xout $out
  fi

  sed -e '/^dnl @error{}/!d' -e 's///' $file > $xerr

  if cmp -s $err $xerr; then
    :
  else
    failed="$failed $file:err"
    echo `sed -e 's/^dnl //' -e 1q $file`
    echo "$file: stderr mismatch"
    diff $xerr $err
  fi

done

rm -f $out $err $xout $xerr

echo
if test -z "$failed"; then
  echo "All checks successful"
else
  echo "Failed checks were:"
  echo " $failed"
fi
