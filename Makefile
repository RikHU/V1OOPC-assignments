.PHONY: clean All

All:
	@echo "----------Building project:[ week4_opdacht1 -  ]----------"
	@cd "week4_opdacht1" && "$(MAKE)" -f  "week4_opdacht1.mk"
clean:
	@echo "----------Cleaning project:[ week4_opdacht1 -  ]----------"
	@cd "week4_opdacht1" && "$(MAKE)" -f  "week4_opdacht1.mk" clean
