cmake_minimum_required(VERSION 3.10)

find_package(Doxygen)

option(BUILD_DOCUMENTATION
	"Create and install the HTML-based API documentation"
	${DOXYGEN_FOUND}
	)

if(BUILD_DOCUMENTATION)
	if(NOT DOXYGEN_FOUND)
		message(FATAL_ERROR "Doxygen is needed to build the documentation")
	endif()
	doxygen_add_docs(
		doc
		${PROJECT_SOURCE_DIR}
		COMMENT "Generate HTML pages"
		)
endif()
