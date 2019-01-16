FROM r-base

RUN apt-get update \
	&& apt-get install -y --no-install-recommends libssl-dev
RUN R -e 'install.packages("devtools", repos = "https://cran.r-project.org")'
RUN R -e 'update(devtools::package_deps("rstan"), repos = "https://cran.r-project.org")'
RUN R -e 'install.packages("RInside", repos = "https://cran.r-project.org")'