let () =
  Alcotest.run argv::[| "--verbose" |] "reason-node" [
    ("PathTests", PathTests.pathTestSet),
    ("RenodeUtilsTests", RenodeUtilsTests.utilsTestSet)
  ];
