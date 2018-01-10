let () =
  Alcotest.run(
    ~argv=[|"--verbose --color"|],
    "LwtNode",
    [
      ("PathTests", PathTests.pathTestSet),
      ("RenodeUtilsTests", RenodeUtilsTests.utilsTestSet)
    ]
  );