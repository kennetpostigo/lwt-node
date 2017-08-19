build:
  jbuilder build

run:
	./_build/install/default/examples/examples

test:
	jbuilder tests

clean:
	rm -rf _build *.install
