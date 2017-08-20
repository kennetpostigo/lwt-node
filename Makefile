build:
	jbuilder build

run: build
	./_build/install/default/bin/examples

test:
	jbuilder runtest

coverage:
	rm -rf bisect*.out
	BISECT_ENABLE=YES jbuilder build
	jbuilder runtest
	bisect-ppx-report -I build/ -html coverage/ bisect*.out
	open -a "Google Chrome" ./coverage/index.html

clean:
	rm -rf _build *.install
