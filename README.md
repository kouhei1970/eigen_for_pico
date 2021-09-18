# ベクトル・行列演算ライブラリEigenをRaspberry Pi Picoで使う

## EigenのClone
picoディレクトリに移動してEigenをclone

```
cd
cd pico
git clone https://gitlab.com/libeigen/eigen.git
```

## 本リポジトリのclone

通常通りpicoディレクトリに移動して本リポジトリをclone

```
cd
cd pico
git clone https://github.com/kouhei1970/eigein_for_pico.git
```

このままではビルドでエラーになるので、以下の手順を実行する。

## CMakeLists.txtを書き換え
クローンしたeigenディレクトリに移動してpwdコマンドでpicoディレクトリの場所を確認

```
cd
cd pico/eigen
pwd
```

確認したディレクトリのフルパス（表示されたディレクトリの場所を全て）でCMakeLists.txtの下記の場所を書き換える

```
include_directories(pwdコマンドで調べたディレクトリの場所でここを書き換える)
```

## ビルド
通常通りビルドする。

```
cd
cd pico/eigen_for_pico
mkdir build
cd build
cmake ..
make
```

## シリアル端末で確認
無限ループでシリアル端末（TeraTerm等）に計算結果が送れれているので確認する。

## Eigenの使い方の勉強

以下のサイトや資料をを参考にする

- [http://blog.livedoor.jp/tek_nishi/archives/8623876.html](http://blog.livedoor.jp/tek_nishi/archives/8623876.html)
- [http://ankokudan.org/d/dl/pdf/pdf-eigennote.pdf](http://ankokudan.org/d/dl/pdf/pdf-eigennote.pdf)

## 課題
行列の逆行列を計算できる様にする
