# libunit

# 詳細

- imac or ワカモレ
- 作成するライブラリはlibunit.a
- いつものmakefile
- 使用可能関数
  - malloc
  - free
  - exit
  - fork
  - wait
  - write
  - printf
  - macro in <sys/wait.h>, <signal.h>
- マイクロフレームワークの実装
  - ソースファイルはframeworkフォルダに格納
  - 一連のテストを中断することなく実行する
  - 各テスト結果は最終的に標準出力に出力する
  - 各テストは個別のプロセスで実行する
  - test結果の種類
    - OK : Test passed.
    - KO : Test failed
    - SEGV : Segmentation fault detected.
    - BUSE : Error bus detected.
  - testの総数に対する成功したテストの説明を最後に表示する
  - テスト関数の最終的な返り値は、すべてのテストがパス（OK？）したら０、そうでなければ-1を返す
  - 各テストの結果のみが標準出力に表示される
  - 標準出力への表示形式は、統一性と最低限の部分ができていれば自由
- testの実装
  - testsフォルダに格納
  - test関数は以下の形式に従う必要がある  
    ```
    int an_awesome_dummy_test_function( void )
    {
      if (/* this test is successful */ )
          return (0);
      else /* this dumb test fails */
          return (-1);
    }
    ```