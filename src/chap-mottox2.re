= 執筆を促進するためにSlack通知をつくってみた

//flushright{
@mottox2
//}

本書「ワンストップ学び」では「学び」という抽象的なテーマなため、執筆状況が芳しくない状況が続いていました。コミュニケーションツールとして利用しているSlackでも雑談は進む一方で、執筆はあまり活発でない時期がありました。

自分が執筆する以外に、サークル内の執筆状況を改善したいと考えたときに次のような課題感がありました。

 * 執筆状況は別のツールで管理しており、そもそも執筆状況が順調かどうかもわからない
 * 執筆が活発な雰囲気が感じられず、新規著者の参加ハードルが高いように感じられる

また、「自分の学びネタがほしい」ということがあり、これを解決するために独自の連携を作りました。最終的には、GitHub（原稿を管理しているサービス）にはみんなの原稿が集まっているので、1日に1回プログラムで原稿の数を数えて、原稿が増えていた場合、Slackに次のような通知を飛ばすようにしました。

//image[after][最終的に出来上がった通知][scale=0.8]

この試行が成功かどうかは、実際にできたこの本が厚いと思うのであれば成功ですし、薄かったら失敗だと思います。しかし、失敗したとしても次回の執筆に活かせると思うのでそれもまた学びになるでしょう。

これは自分の学びでもありますが、誰かの学びになるかもしれないので作るときに意識したポイントについて考えてみました。

== 状況を把握するためのアプローチ
弊サークルでは執筆はGit（主にソフトウェア業界でコードを管理するために使われているツール）を利用しており、GitHub（Gitを使ったプロジェクト管理を行うサービス）というサービスに原稿をおいて管理しています。
単純に通知を行うだけであれば、GitHubが標準で持っているSlack連携を使うという手もあったのですが、Gitの通知をそのまま投稿しても、執筆に最適化されたフォーマットではないので、単にうるさいだけの通知になるように思えます。
また、普段からgitに慣れた人が見るならともかく、いろんな業界の人が参加している親方Projectではもっと親切な通知のほうがいいと考えました。

//image[before][最初に作った通知][scale=0.8]

== ワイワイ感を出すためのアプローチ
ここ最近、本を作るワイワイ感が足りないし、メンバーも多くなってきて発言する人が偏ってきた感覚があります。執筆が活発であれば、まだ執筆していないメンバーも書き始める動機になるかもしれない？と考えました。
最初に作った通知は次のような通知で、伝えたい情報は伝えていますがサークル活動のワイワイ感は全くないものでした。


そこで、章の数だけ絵文字が増えて積み上げている様子がわかるフォーマットに変更しました。かなり主観的ではありますが、こちらの方が盛り上がっている感じがでていると思います。

//image[after][最終的に出来上がった通知][scale=0.8]

また、味気なかった標準のアイコンと名前から我々のサークルでおなじみのキャラクターとフレーズに変更したことで親しみやすさを出してみました。

