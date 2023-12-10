# 3DPrintedMotor

## Overview
3Dプリンタで作る自作モーターのリポジトリです。

アイデアがより的確に実現できるようになるといいなと思って開発中です。

<img src="https://github.com/Jun-robot/3DPrintedMotor/blob/main/readme.jpg" width="50%">

## How to make
#### 必要なもの
- 3Dプリンタ
- ネジとかコイルとかベアリングとか

#### 作り方
1. "3Dmodels"の中にある5つのSTLファイルをダウンロード！！
1. 3Dプリンタで印刷！！
1. コイル巻いたり、組み立てたり
   - 必要な部品の型番は今後、追記していきます。
	 - 今のところ、設計データから推定できます。

## Concept
- 3Dプリンタさえあれば手に入る
  - あとは、ネジやコイルの規格品のみで作成可能！
- 開発物に適した形状、性能に。
  - アイデアの妥協をなくし、作りたいモノに最適化

## Mechanism
Fusion360で作成

https://a360.co/3StNydJ

## Circuit
KiCADで設計

DRV8332とSTM32F446を使用した自作基板

磁気エンコーダーはAS5601を使用

## Software
VScode + PlatformIOでArduinoで開発

現在は、強制転流。
今後フィードバック制御をかけていく予定

## Achievement
- サイエンスキャッスル2022関東大会 口頭発表
- [未踏ジュニア2023採択](https://jr.mitou.org/projects/2023/3d_printed_brushless_motor)
- MakerFaireTokyo2023 未踏ジュニアブースにて展示
- 未踏ジュニア成果報告会2023 発表

## Licence
MIT
