= 己の学びのために地域技術コミュニティ立ち上げた話

//flushright{
	こうの@hk_it7
//}

== 俺は別に東京に行きたいわけではない！！

学びを得る機会としてさまざまな勉強会があります。プログラミング言語系だと、JJUG CCCやPycon JP、PHPカンファレンスなどです。ほかにも開発手法にフィーチャーしたイベントやクラウド技術、製品を中心としたイベントもありますね。

現在、その多くが東京で行われています。コロナ禍に多くの勉強会が中止、オンライン開催になりましたが、2024年になり、多数が再度オフラインでの開催に戻しています。

そのような経緯のもと、オンラインでの開催を経験した結果、2つのことを考えるようになりました。

1つは、エンジニア同士で会話できずに、感想戦が難しいという点です。もう1つは東京まで行くの少し......という点です@<fn>{kouno_private}。

//footnote[kouno_private][あくまで筆者個人の感想であることに留意が必要です。]

カンファレンスの参加目的は東京に行くことではありません。もちろん地方開催のカンファレンスの醍醐味として、観光や現地での食事であることも認めます。しかし、主目的はやはり技術的な知識であったり交流であったりだと考えています。

毎回場所を変えて実施しているカンファレンスとしてRubyKaigiなどがありますが、家の近くで行われる可能性はかなり低いでしょう。

そうなると、開催されることを待つよりも自分でコミュニティを作ってしまうのが早いですよね！

== 立ち上げたコミュニティはどんなものか？

千葉県東葛地区（松戸市、野田市、柏市、流山市、我孫子市、鎌ケ谷市あたり）を拠点とするエンジニアコミュニティです。

目的は情報交換や学習の相互支援、単純な人付き合い、つまりエンジニア同士の交流としています。

エンジニアコミュニティとしては、知見の共有を中心とした学習を主目的とすることが多いと思いますが、そのようにはしませんでした。

地方コミュニティという特性上、強いエンジニアが集まるという形式は想像しづらく、間口を広げたいと考えたからです。

また実施するコンテンツも、カンファレンスではないので、ライトニングトークやOSTが中心となります。そうすると高度な内容を学ぶことは時間制約上も難しいです。

== 実践しているコミュニティ運営指針の紹介

大きな方針として、「可能な限り主催者は場の提供に留める」ということにしています。

個人でなんとなく始めたものなので、主催者（=私）が「やらされている感」なく続けることを目指しています。

具体的には次のような方針です。

 * 企業スポンサーはつけない
 * ノベルティや軽食を出さない
 * 運営側でテーマを絞りすぎない
 * 振り返り等はしない
 * 運営（主催者）は2人以上を維持する

誰かが責任を感じることが少ないように運営を進めています。

=== オフラインイベントにあたって会場と金銭面を公共施設利用で解決する

会場は公共施設を利用することで金銭面のハードルを下げています。

現在主に使っている柏市の施設では、20人程度入る会議室を3時間借りても800円程度です。

プロジェクターを追加でレンタルしても、合計で1500円払えばお釣りがきます。

また、ノベルティや軽食を出さないので、「おもてなし」に費用はかかりません。そして、「用意したものが余ってしまった......」みたいなことも起きません。

人が集まらなくて800円の出費であれば、そのまま1人で会議室をコワーキングスペースとして使って、もくもく作業しても納得できるかと思っています。

このようにオフラインイベントでハードルになりがちな会場と金銭面については公共施設を使って解決しています。

==== 会場に公共施設を使う上でのハードル

公共施設利用にはたいていの場合、市内在住や在勤の条件が付与されています。

満たさない場合、借りられないところや料金が倍になるところもあるので注意が必要です。

例えば柏市の施設を利用するためには次のいづれかが必要です。

 * 個人（市内在住または在勤）で利用登録を行う
 * 5人以上のメンバーを集め（半数以上が市内在住または在勤）、団体利用の登録を行う

個人利用の場合、予約が個人名義になりますので、参加者にどこの部屋かの案内をする際に本名でのやり取りが必要です。
しかし、それさえ許容できればハードルは低いです。

団体利用の場合は市内のメンバーを集める必要があります。

私の場合はTwitter（現：X）で見つけた市内のエンジニアや、所属会社で同じ市に住んでいる人がいたので協力を依頼しました。

コミュニティがない地域であれば、声をかけると案外希望者はいるように思えます。

また、近隣の技術コミュニティに参加することも良い案だと思います。CoderDojoなどは全国に拠点があり、学習やコミュニティに対して前向きな人が多いです。

地域コミュニティを立ち上げる際は少し調べてみると良いかもしれません。

== 地域コミュニティでやっていること

前述の通りコミュニティの主目的を交流としているため、会話を通して学習が促進されるように設計しています。

大まかな流れとしては自己紹介、アイスブレイク、トークセッション、締めという流れです。

アイスブレイクとして、特定の答えのない議題について話していくOST（オープン・スペース・テクノロジー）などを行っています。

最初の議題は地元のオススメスポット紹介など誰でも話せる非技術的な内容にして話しやすい空気を作るようにしています。

次にトークセッションです。基本的にLT会を実施しています。

しかし、一般的なLT会とは異なり、3枠に対して60分時間を取っています。

話すのは1枠10分までとしているので1枠あたり10分くらい時間が余るわけですが、感想戦タイムにしています。イメージとしてはここでもLT内容についてOSTをしているような感じです。

LTを聞いてもっと知りたいことや自分の考えていることを自由に発言して、発表者と参加者の相互で学びを深められればと考えています@<fn>{kouno_lt}。

//footnote[kouno_lt][初回に何も考えず時間を切って、後付けの理由だけど今のところ主旨にあっているなんて言えない。]

また、地域コミュニティは日常の交流があってこそだと思っているので、Discordサーバーを作成し、そこでも互いの作業進捗や地域グルメ等について話し合っています。

大きなカンファレンスとの住み分けを意識して、交流という大きな目的のもとでコミュニティ内でうまく学習のサイクルを作れるようにコミュニティ設計をしています。

== コミュニティの今後

私利私欲で作ったコミュニティですが、あくまで「地域のエンジニアコミュニティ」であり「私のコミュニティ」にすべきではないと考えています。

そのため、私がいなくても勝手にコミュニティがまわり、少しずつスケールしていければ良いなと考えています。

コミュニティの理想は井戸端会議です。なんとなく集まってなんとなく情報が交換される、そこに強いオーナーシップはなく、ゆるい所属意識となくならないといいなって気持ちで駆動していく。そんなコミュニティになっていけばと思っています。

最後になりますが、2つ伝えたいことがあります。

1つはコミュニティ作るのはそんなに難しいことではないということです。これはここまで書いている内容を見ればなんとなく伝わるかなと思います。

そしてもう1つは、近所にコミュニティがあれば、ぜひ参加してほしいということです。自分と異なる考えを持っている人との交流は知識の幅や視野を広げる一助となります。

というわけで、これを読んでいて千葉県の東葛地区近辺にお住まいの人は、東葛.devで検索して参加してください！！（笑）