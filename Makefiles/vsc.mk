#!/usr/bin/make

.PHONY: all clean test

vsc-all:
	@$(MAKE) vsc-clean vsc-build

# Run commands only inside the development container
.PHONY: vsc-build build
vsc-build:
	@bear --output compile_commands.json --append -- $(MAKE) -j$(nproc) build

.PHONY: vsc-test test
vsc-test:
	@bear --output compile_commands.json --append -- $(MAKE) -j$(nproc) test

.PHONY: vsc-run run
vsc-run:
	@$(MAKE) run

.PHONY: vsc-clean clean
vsc-clean:
	@$(MAKE) -j$(nproc) clean
