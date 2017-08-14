let () =
  Alcotest.run argv::[| "--verose" |] "Renode" [
    ("PathTests", PathTests.pathTestSet),
    ("RenodeUtilsTests", RenodeUtilsTests.utilsTestSet)
  ];
