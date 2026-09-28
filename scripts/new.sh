#!/usr/bin/env bash
# Создаёт новую папку под задачу с копией шаблона.
# Использование: ./scripts/new.sh 0001_two_sum
set -e

NAME="$1"
if [ -z "$NAME" ]; then
    echo "Использование: ./scripts/new.sh <имя_задачи>"
    exit 1
fi

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT_DIR="$(dirname "$SCRIPT_DIR")"

DIR="$ROOT_DIR/$NAME"
mkdir -p "$DIR"
cp "$ROOT_DIR/template.cpp" "$DIR/solution.cpp"

echo "Создано: $DIR/solution.cpp"
