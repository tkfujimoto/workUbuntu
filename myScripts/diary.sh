#!/bin/bash

# 日記データの保存ディレクトリ
directory="${HOME}/work/myScripts"

# データ保存ディレクトリがなければ作成する
if [ ! -d "$directory" ]; then
	mkdir "$directory"
fi

# 日記ファイルパスの組み立て
diaryfile="${directory}/$(date '+%Y-%m-%d').txt"

# 日記ファイルがなければ、先頭日付を挿入
if [ ! -e "$diaryfile" ]; then
	date '+%Y-%m-%d' > "$diaryfile"
fi

gedit "$diaryfile" &
