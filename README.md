# 数当てゲーム

C++で実装されたシンプルな数当てゲーム。
プレイヤーはランダムに生成された数値を当てるまで試行し、試行回数がスコアとして出力されます。

## **動作方法**

1. プログラムをコンパイル：
   ```bash
   g++ -o guess_game main.cpp
   ```

2. プログラムを実行：
   ```bash
   .guess_game
   ```

## 動作イメージ

```bash
数当てゲームへようこそ！
難易度を選択してください：
command...
1: 1~10
2: 1~100
3: 1~1000
1
あなたの予想は？: 3
もっと大きいです！
あなたの予想は？: 5
もっと小さいです！
あなたの予想は？: 5
もっと小さいです！
あなたの予想は？: 4
正解です！ (4回目で正解しました)
```