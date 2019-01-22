cygwin_smile
============

# Cygwinでdllに依存しないexeの作り方

### 準備
Cygwin Setupで「mingw64-x86_64-gcc-core」 をインストール

### アイコンファイルの作成
```
wget icon.ico
vi icon.rc
ICON_FILE ICON icon.ico
```

### コンパイル
```
windres.exe -i icon.rc icon.o
x86_64-w64-mingw32-gcc -mwindows -o bin2csv bin2csv.c icon.o
```

### 参考
 [Cygwinでdllに依存しないexeの作り方](http://d.hatena.ne.jp/wlt/20111231/1325289060)
