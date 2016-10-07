for (int r = 0 r < H - R + 1; ++r){
  for (int c = 0; c < W - C + 1; ++c) {
    //for every (r,c)…
    int sum = 0;
    for (int y = 0; y < R; ++y)
      for (int x = 0; x < C; ++x)
        sum += G[r + y][c + x];
    best = min(best, sum);
  }
}
