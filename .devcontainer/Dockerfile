# ##########################################################################
# File: Dockerfile
# Author: USER
# Date: 16-Aug-2024
# Description: Brief description of the Dockerfile purpose.
# ##########################################################################

# ##########################################################################
# License
# ##########################################################################
# This Dockerfile is licensed under the MIT License.
# License information should be updated as necessary.
# ##########################################################################

# ##########################################################################
# Base Image
# ##########################################################################
FROM mcr.microsoft.com/vscode/devcontainers/cpp:jammy AS base

# ##########################################################################
# Maintainer
# ##########################################################################
LABEL maintainer="gvatsal60"

ENV DEBIAN_FRONTEND=noninteractive

# ##########################################################################
# Install Dependencies
# ##########################################################################
# Add NodeSource APT repository for Node.js Installation
RUN curl -fsSL https://deb.nodesource.com/setup_lts.x | bash - \
  && apt update \
  && apt install -y \
  nodejs \
  bear \
  && rm -rf /var/lib/apt/lists/* /var/cache/apt/archives/*

# Install gtest-v1.15.2
FROM base AS gtest
ARG GTEST_VER=v1.15.2
RUN set -x \
  # Building gtest from source
  && SRC=/usr/local/src/google-test-${GTEST_VER} \
  && mkdir -p ${SRC} && cd ${SRC} \
  # Download and extract gtest source code
  && curl -Lfs https://github.com/google/googletest/archive/refs/tags/${GTEST_VER}.tar.gz \
  | tar xz -C ${SRC} --strip-component=1 \
  # Create build directory and compile gtest
  && mkdir -p build \
  && cd build && cmake .. \
  && make -j$(nproc) && make install DESTDIR=/opt/gtest

# ##########################################################################
# Copy Files
# ##########################################################################
# Create a final stage to assemble the final image
FROM base
# Copy gtest binaries from the gtest stage
COPY --from=gtest /opt/gtest /

# ##########################################################################
# Set Working Directory
# ##########################################################################

# ##########################################################################
# Expose Port
# ##########################################################################

# ##########################################################################
# Command to Run
# ##########################################################################
CMD ["/bin/bash"]
