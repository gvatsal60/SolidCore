include ./Makefiles/debug.mk

# Run commands only inside the development container

vsc-build:
	bear --output compile_commands.json --append -- $(MAKE) -j8 build

vsc-test:
	bear --output compile_commands.json --append -- $(MAKE) -j8 test

vsc-run:
	$(MAKE) run

vsc-clean:
	$(MAKE) -j8 clean