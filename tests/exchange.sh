#!/bin/bash

SORT="exchange"

declare -a StringArray=(
    "${SORT} 2"
    "${SORT} 3"
    "${SORT} 4"
    "${SORT} 16"
    "${SORT} 32"
    "${SORT} 64"
    "${SORT} 128"
    "${SORT} 256"
    "${SORT} 512"
    "${SORT} 1024" 
)

for args in "${StringArray[@]}"; do
    ${DRIVER} $args
    if [ $? -ne 0 ]; then
        exit 1
    fi
done

exit 0