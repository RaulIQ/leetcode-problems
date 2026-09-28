#!/usr/bin/env bash
# Компилирует и запускает один .cpp файл.
# Использование: ./scripts/run.sh path/to/solution.cpp
#                ./scripts/run.sh            (ищет ./solution.cpp в текущей папке)
set -e

FILE="${1:-solution.cpp}"

if [ ! -f "$FILE" ]; then
    echo "Файл не найден: $FILE"
    exit 1
fi

OUT="$(mktemp /tmp/leetcode_run_XXXXXX)"

g++ -std=c++20 -O2 -Wall -Wextra -Wshadow \
    -fsanitize=address,undefined -fno-sanitize-recover=all \
    -o "$OUT" "$FILE"

"$OUT"
STATUS=$?

rm -f "$OUT"
exit $STATUS
