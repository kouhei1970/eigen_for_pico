# ベクトル・行列演算ライブラリEigenをRaspberry Pi Picoで使う

## EigenのClone
picoディレクトリに移動してEigenをclone

```
git clone https://gitlab.com/libeigen/eigen.git
```

## CMakeLists.txtを書き換え
クローンしたeigenディレクトリに移動してpwdコマンドでpicoディレクトリの場所を確認

```
cd eigen
pwd
```

確認したディレクトリのフルパス（表示されたディレクトリの場所を全て）でCMakeLists.txtの下記の場所を書き換える

```
include_directories(pwdコマンドで調べたディレクトリの場所でここを書き換える)

```

## ビルド
picoディレクトリに本レポジトリをクローンして通常通りビルドする。

## Eigenの使い方の勉強

以下のサイトを参考にする
http://blog.livedoor.jp/tek_nishi/archives/8623876.html

行列の逆行列を計算できる様にする


