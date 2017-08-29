let () =
  Alcotest.run argv::[| "--verbose" |] "Renode" [
    ("PathTests", PathTests.pathTestSet),
    ("RenodeUtilsTests", RenodeUtilsTests.utilsTestSet)
  ];
