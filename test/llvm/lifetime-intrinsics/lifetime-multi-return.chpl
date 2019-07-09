// This test is used to verify that llvm.lifetime instrinsics are being emitted
// for procedures having multiple return statements (gotoReturns)

// Simple hack to retain elements to show up in LLVM IR with lifetime instrinsics
proc refidentity(const ref a) const ref { return a; }

proc mytest_multi_return() {
  // CHECK: %[[REG1:[0-9]+]] = bitcast double* %ret_chpl to i8*
  // CHECK-NEXT: call void @llvm.lifetime.start.p0i8(i64 8, i8* %[[REG1]])
  const x = 1.09;
  // CHECK: %[[REG2:[0-9]+]] = bitcast double* %x_chpl to i8*
  // CHECK-NEXT: call void @llvm.lifetime.start.p0i8(i64 8, i8* %[[REG2]])
  const a = 1.22;
  // CHECK: %[[REG3:[0-9]+]] = bitcast double* %a_chpl to i8*
  // CHECK-NEXT: call void @llvm.lifetime.start.p0i8(i64 8, i8* %[[REG3]])
  refidentity(x);
  refidentity(a);
  {
    var y: real = 1.99;
    var z: real = 1.22;
    z += 0.02 + x;
    y += 0.003 + a;
    // CHECK: %[[REG4:[0-9]+]] = bitcast double* %y_chpl to i8*
    // CHECK-NEXT: call void @llvm.lifetime.start.p0i8(i64 8, i8* %[[REG4]])
    // CHECK: %[[REG5:[0-9]+]] = bitcast double* %z_chpl to i8*
    // CHECK-NEXT: call void @llvm.lifetime.start.p0i8(i64 8, i8* %[[REG5]])
    // CHECK: %[[REG6:[0-9]+]] = bitcast double** %i_lhs_chpl to i8*
    // CHECK-NEXT: call void @llvm.lifetime.start.p0i8(i64 8, i8* %[[REG6]])
    // CHECK: %[[REG7:[0-9]+]] = bitcast double** %i_lhs_chpl2 to i8*
    // CHECK-NEXT: call void @llvm.lifetime.start.p0i8(i64 8, i8* %[[REG7]])
    // CHECK: %[[REG8:[0-9]+]] = bitcast double* %coerce_tmp_chpl to i8*
    // CHECK-NEXT: call void @llvm.lifetime.start.p0i8(i64 8, i8* %[[REG8]])
    if x > 1 {
      return x;
    } else if y > 0
      // CHECK: %[[REG9:[0-9]+]] = bitcast double* %coerce_tmp_chpl2 to i8*
      // CHECK-NEXT: call void @llvm.lifetime.start.p0i8(i64 8, i8* %[[REG9]])
      // CHECK: %{{[0-9]+}} = bitcast double* %coerce_tmp_chpl2 to i8*
    {
      // CHECK: %[[REG10:[0-9]+]] = bitcast double* %coerce_tmp_chpl2 to i8*
      // CHECK-NEXT: call void @llvm.lifetime.end.p0i8(i64 8, i8* %[[REG10]])
      // CHECK: br label %_end{{.*}}
      return z;
    }
  }
  // CHECK: %[[REG11:[0-9]+]] = bitcast double* %x_chpl to i8*
  // CHECK-NEXT: call void @llvm.lifetime.end.p0i8(i64 8, i8* %[[REG11]])
  // CHECK: %[[REG12:[0-9]+]] = bitcast double* %a_chpl to i8*
  // CHECK-NEXT: call void @llvm.lifetime.end.p0i8(i64 8, i8* %[[REG12]])
  // CHECK: %[[REG13:[0-9]+]] = bitcast double* %y_chpl to i8*
  // CHECK-NEXT: call void @llvm.lifetime.end.p0i8(i64 8, i8* %[[REG13]])
  // CHECK: %[[REG14:[0-9]+]] = bitcast double* %z_chpl to i8*
  // CHECK-NEXT: call void @llvm.lifetime.end.p0i8(i64 8, i8* %[[REG14]])
  // CHECK: %[[REG15:[0-9]+]] = bitcast double* %ret_chpl to i8*
  // CHECK-NEXT: call void @llvm.lifetime.end.p0i8(i64 8, i8* %[[REG15]])
  // CHECK: %[[REG16:[0-9]+]] = bitcast double* %coerce_tmp_chpl to i8*
  // CHECK-NEXT: call void @llvm.lifetime.end.p0i8(i64 8, i8* %[[REG16]])
  // CHECK: %[[REG17:[0-9]+]] = bitcast double** %i_lhs_chpl to i8*
  // CHECK-NEXT: call void @llvm.lifetime.end.p0i8(i64 8, i8* %[[REG17]])
  // CHECK: %[[REG18:[0-9]+]] = bitcast double** %i_lhs_chpl2 to i8*
  // CHECK-NEXT: call void @llvm.lifetime.end.p0i8(i64 8, i8* %[[REG18]])
  return a;
}

mytest_multi_return();
