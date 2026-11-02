
# GitLab CI Pipeline for Data Structures Exercise 1

This README provides an overview of the GitLab CI pipeline defined in `gitlab-ci.yml` for building, testing, and deploying a data structures exercise.

## Overview

The pipeline has the following stages:

-   `build-pipeline-tools`: Clones and builds utility scripts and programs needed for the pipeline
-   `files-verifier`: Verifies required files are present before and after submission
-   `build-1`: Compiles part 1 code
-   `test-1`: Runs tests on part 1 code
-   `build-2`: Compiles part 2 code
-   `test-2`: Runs tests on part 2 code
-   `submission-date-verifier`: Verifies submission date
-   `zip-and-send`: Zips all files and sends to the ing server

## Job Details

**Build Pipeline Tools** - Clones and builds the following utils required for the pipeline:

-   filesverifier - Checks required files are present
-   valgrindverifier - Checks Valgrind memory leak reports
-   Other utils: clearscreen, printbanner, printMessage

**Verify Submission** - Runs the filesverifier to check:

-   Required  `.gitignore`  files exist
-   Required code files are present
-   Unneeded files are not included

**Verify Exercise Files** - Checks for necessary files submitted for the exercise using filesverifier.

**Compile Part 1** - Compiles the part 1 code with the test file.

**Part 1 Tests** - Runs the part 1 code on sample test cases.

**Part 2 Compile & Test** - Same as Part 1 but for part 2 code.

**Memory Checks** - Runs Valgrind on the test runs to check for mem leaks.

**Verify Submission Date** - Checks if submission date requirement was met.

**ZIP and Send** - Zips all files and sends to the ING server.

## Conclusion

This pipeline automates building, testing, verification of this data structures exercise. The use of reusable utils and clear stages and jobs simplifies maintenance and troubleshooting.
