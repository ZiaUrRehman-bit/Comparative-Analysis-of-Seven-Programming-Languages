start.time <- Sys.time()

rounds <- 10000000
  
sum <- 0
for(i in 0:rounds){
    sum <- sum + i
}
end.time <- Sys.time()
time.taken <- round(end.time - start.time, 4)

cat(sprintf("%.16f\n", sum))
time.taken
