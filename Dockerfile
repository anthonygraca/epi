FROM debian:bullseye

RUN apt-get update && \
    apt-get install -y apt-transport-https curl software-properties-common git \
                       gcc gnupg2 g++ openjdk-17-jdk-headless                  \
                       python-dev-is-python3 zip wget vim apt-transport-https  \
                       curl gnupg                                           && \
    apt-get clean

RUN curl -fsSL https://download.docker.com/linux/debian/gpg | apt-key add -

RUN add-apt-repository "deb [arch=amd64] https://download.docker.com/linux/debian $(lsb_release -cs) stable"

RUN apt-get update && apt-get install -y docker-ce

RUN wget https://releases.bazel.build/5.0.0/release/bazel-5.0.0-installer-linux-x86_64.sh -O ./bazel-installer.sh && chmod 755 ./bazel-installer.sh

RUN ./bazel-installer.sh

RUN curl -O https://download.clojure.org/install/linux-install-1.10.3.1058.sh && chmod 755 linux-install-1.10.3.1058.sh

RUN ./linux-install-1.10.3.1058.sh

#docker build --platform linux/x86_64 -t bazel_container - < Dockerfile
#docker run -it   -v /var/run/docker.sock:/var/run/docker.sock   -v /tmp:/tmp -v <location of source>:/src   -w /src   bazel_container   /bin/bash
