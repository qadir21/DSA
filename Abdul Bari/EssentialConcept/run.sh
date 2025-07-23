#!/bin/bash

if [ "$#" -ne 1 ]; then
    echo "Usage: ./run.sh filename.cpp"
    exit 1
fi

filename="$1"
basename="${filename%.*}"

echo "Compiling $filename..."
g++ -std=c++17 "$filename" -o "$basename"

if [ $? -eq 0 ]; then
    echo "Running $basename..."
    ./"$basename" < input.txt > output.txt
    echo "Done! Output saved to output.txt"
    echo "Output:"
    cat output.txt
else
    echo "Compilation failed!"
fi
