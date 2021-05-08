typedef struct	s_unit_test
{
	char			*func_name;
	int				(*func)(void);
	struct s_unit_test	*last;
	struct s_unit_test	*next;
}				t_unit_test;

typedef struct	s_result
{
	int			success_num;
	int			total_num;
}				t_result;

int launch_tests(t_unit_test *testlist, t_result *result)
{
	while (testlist)
	{
		// 実行
		
		// 出力

		// 格納

	// listを次に進める
	}

}

int launcher(t_result *result)
{
{
	t_unit_test *testlist;

	// puts("STRLEN:");

	// unit_test_init(testlist);

	// t_unit_testに入れる
	// load_test(testlist, "Basic test", &basic_test);
	// load_test(testlist, "NULL test", &null_test);
	//load_test(&testlist, "Bigger string test", &bigger_str_test); /* This test won't be loaded */

	// 実行する
	// return(launch_tests(testlist, result));
}

int main()
{
	t_result *result;
	// スタートの合図の出力
	// put_start();

	// 初期化

	// deta_init(result);

	// どのランチャーを実行します
	// teat1(result)
	// test2(result)
	// test3(result)

	// print_result(list)
}
// -> 
// ------------main
// [...]
// *********************************
// ** 42 - Unit Tests ****
// *********************************
// ------------launcher
// STRLEN:
// > Basic test : [OK]
// > NULL test : [SEGV]
// 1/2 tests checked
// ------------main
// 1/2 all tests checked