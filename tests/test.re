let () =
  Alcotest.run(
    ~argv=[|"--verbose --color"|],
    "Renode",
    [("PathTests", PathTests.pathTestSet), ("RenodeUtilsTests", RenodeUtilsTests.utilsTestSet)]
  );
