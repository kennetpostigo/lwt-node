let () =
  Alcotest.run(
    ~argv=[|"--verbose --color"|],
    "ReasonNode",
    [
      ("PathTests", PathTests.pathTestSet),
      ("RenodeUtilsTests", RenodeUtilsTests.utilsTestSet)
    ]
  );