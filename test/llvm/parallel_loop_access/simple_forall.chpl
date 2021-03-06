config const n = 10000;
proc main() {
  var A:[1..n] real = 0;
  loop(A);
  writeln(A[1], " ", A[n]);
}

proc loop(A) {
  forall i in 1..n {
    A[i] = 17.5 * i;
  }
  // check the serial loop body
  // CHECK: @loop
  // CHECK: fmul
  // CHECK: !llvm.access.group ![[GROUP1:[0-9]+]]
  // CHECK: br i1
  // CHECK-SAME: !llvm.loop ![[LOOP1:[0-9]+]]

  // check follower loop body in the coforall
  // CHECK: @coforall
  // CHECK: fmul
  // CHECK: !llvm.access.group ![[GROUP2:[0-9]+]]
  // CHECK: br i1
  // CHECK-SAME: !llvm.loop ![[LOOP2:[0-9]+]]
}
// CHECK: ![[LOOP1]] = distinct !{![[LOOP1]], ![[PA1:[0-9]+]]
// CHECK: ![[PA1]] = !{!"llvm.loop.parallel_accesses",
// CHECK-SAME: ![[GROUP1]]
// CHECK-NOT: ![[GROUP2]]
// CHECK-SAME: }

// CHECK: ![[LOOP2]] = distinct !{![[LOOP2]], ![[PA2:[0-9]+]]
// CHECK: ![[PA2]] = !{!"llvm.loop.parallel_accesses",
// CHECK-SAME: ![[GROUP2]]
// CHECK-NOT: ![[GROUP1]]
// CHECK-SAME: }
