# visualizer_ahc015

このレポジトリーはAtCoderHeuristicContest015のvisualizerをSiv3Dを用いて実装したものである。

本コード内の"struct ahc015"が設問を解くためのコードである。

公式のvisualizerとの違いは以下の点である。

・入力値が不明である（もちろんソースコードを一部書き換えることで容易に出力させることができる）。

・設問を解くためにC++で作成したソースコードを構造体として組み込むことで、動作する（公式では出力値を入れることで動作する）。

また、お菓子１：Candy、お菓子２：Chocolate、お菓子３：Lollipopとしている。


なお、本コードはSiv3D（VisualStdio版）以外の環境での動作は未確認である。


――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

AHC015については以下のリンクを参照していただきたい。

https://atcoder.jp/contests/ahc015/tasks/ahc015_a


――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

本コードでのAHC015の解法を記しておく。

今貰ったものをx、次にもらうものをyとし、これを以下の4パターンに分ける。

・y=1のとき：手前に傾ける

・x=1、y!=1のとき：　奥に傾ける

・x!=1、y=2のとき：　左に傾ける

・x!=1、y=3のとき：　右に傾ける

なお、この解法はAHC015本番で使用したコードとは異なる。（本番でのコード：https://atcoder.jp/contests/ahc015/submissions/36096705）


以上。
