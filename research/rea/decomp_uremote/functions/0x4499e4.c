// rea decompile_all
// name: FUN_004499e4
// address: 0x4499e4
// body: available
// range: 0x4499e4-0x44a1ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004499e4(undefined4 param_1)

{
  int *piVar1;
  int ***pppiVar2;
  char cVar3;
  int iVar4;
  undefined1 ***pppuVar5;
  undefined4 uVar6;
  int *in_ECX;
  undefined1 *puVar7;
  int **ppiStack_210;
  int ****local_20c;
  int ****local_208;
  uint uStack_204;
  undefined1 ****local_1f4;
  undefined1 ****local_1f0;
  undefined1 ***local_1ec;
  int iStack_1e8;
  undefined1 ****ppppuStack_1e4;
  float local_1e0;
  undefined1 ***pppuStack_1dc;
  float local_1d8;
  float fStack_1d4;
  int *local_1d0;
  undefined1 ***apppuStack_1cc [13];
  int *apiStack_198 [12];
  int *apiStack_168 [6];
  int *apiStack_150 [6];
  int *apiStack_138 [12];
  int *apiStack_108 [6];
  int *apiStack_f0 [6];
  int *apiStack_d8 [18];
  int *apiStack_90 [12];
  undefined1 auStack_60 [76];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e0bcf;
  local_14 = ExceptionList;
  uStack_204 = DAT_00955fd4 ^ (uint)&stack0xfffffe00;
  if (*(char *)in_ECX[0x23] == '\0') {
    return;
  }
  local_208 = (int ****)0x449a30;
  ExceptionList = &local_14;
  local_1d0 = in_ECX;
  iVar4 = FUN_0044bfc5();
  local_1d8 = (float)*(int *)(iVar4 + 8);
  local_208 = (int ****)0x449a3c;
  iVar4 = FUN_0044bfc5();
  local_1e0 = *(float *)(iVar4 + 0xc);
  piVar1 = in_ECX + 0x26;
  if (*piVar1 == 0) {
    local_20c = (int ****)0x449c25;
    cVar3 = FUN_004c32c9();
    if (((cVar3 != '\0') && ((char)in_ECX[0x24] == '\0')) && (in_ECX[0x25] != 0)) {
      local_208 = (int ****)0x449c40;
      iVar4 = FUN_0044bfc5();
      local_208 = (int ****)(iVar4 + 0x7c);
      local_1f4 = (undefined1 ****)&local_208;
      local_20c = (int ****)0x449c51;
      FUN_004d076d();
      local_20c = (int ****)0x449c59;
      FUN_0047d23a();
    }
  }
  else {
    local_208 = (int ****)0x449a57;
    iVar4 = FUN_0044bfc5();
    local_208 = (int ****)(iVar4 + 0x7c);
    local_1f4 = (undefined1 ****)&local_208;
    local_20c = (int ****)0x449a68;
    FUN_004d076d();
    local_20c = (int ****)0x449a72;
    FUN_0047cda7();
    local_208 = (int ****)in_ECX[7];
    local_20c = (int ****)(*piVar1 + in_ECX[6]);
    ppiStack_210 = (int **)0x0;
    FUN_0047d187();
    local_20c = (int ****)(((float)*piVar1 * 0.6) / (float)-(in_ECX[6] / 2) + 0.4);
    ppiStack_210 = (int **)&local_208;
    local_1f4 = (undefined1 ****)&local_208;
    local_1f0 = (undefined1 ****)local_20c;
    FUN_0047620f();
    local_20c = (int ****)0x449ace;
    FUN_0047cda7();
    local_208 = (int ****)in_ECX[7];
    local_20c = (int ****)-*piVar1;
    ppiStack_210 = (int **)0x0;
    FUN_0047d187();
    local_208 = (int ****)&local_1ec;
    local_20c = (int ****)0x449b04;
    FUN_0046537e();
    local_c = 0;
    local_20c = (int ****)&local_1f0;
    local_208 = (int ****)((float)in_ECX[7] * 0.5);
    ppiStack_210 = (int **)0x449b33;
    local_1f0 = (undefined1 ****)local_208;
    FUN_0044bfc5();
    ppiStack_210 = (int **)0x449b3e;
    local_208 = (int ****)FUN_0049f81a();
    local_c = CONCAT31(local_c._1_3_,1);
    local_20c = (int ****)0x449b4c;
    FUN_0047ceaa();
    puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
    local_20c = (int ****)0x449b5d;
    FUN_004c4d7a();
    local_20c = (int ****)&local_1f4;
    ppiStack_210 = (int **)0x449b6a;
    FUN_0047cef9();
    local_20c = (int ****)&local_1f0;
    puStack_10._0_1_ = 2;
    ppiStack_210 = (int **)0x449b7c;
    iVar4 = FUN_0049fa60();
    puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
    local_20c = (int ****)0x449b8f;
    FUN_004c4d7a();
    if (*piVar1 < -iVar4) {
      local_208 = (int ****)-(*piVar1 + iVar4);
      pppuStack_1dc = (undefined1 ***)&local_208;
      ppiStack_210 = (int **)&local_208;
      local_20c = (int ****)((float)(int)local_208 / (float)(in_ECX[6] / 2 - iVar4));
      local_1f0 = (undefined1 ****)local_20c;
      FUN_0047620f();
      local_20c = (int ****)0x449bdd;
      FUN_0047cda7();
      local_208 = (int ****)0x0;
      pppuStack_1dc = (undefined1 ***)&local_20c;
      local_20c = (int ****)0x24;
      ppiStack_210 = (int **)in_ECX[7];
      FUN_0047d02d(param_1,&local_1ec,in_ECX[6] + *piVar1,0,-*piVar1);
    }
    local_c = 0xffffffff;
    local_208 = (int ****)0x449c1d;
    FUN_004652d6();
  }
  local_208 = (int ****)0x449c60;
  cVar3 = FUN_004c3153();
  local_208 = (int ****)&DAT_0095d8b0;
  if (cVar3 == '\0') {
    local_208 = (int ****)&DAT_0095d9f4;
  }
  local_1f4 = (undefined1 ****)&local_208;
  local_20c = (int ****)0x449c7a;
  FUN_004d076d();
  local_20c = (int ****)0x449c82;
  FUN_0047cda7();
  local_208 = (int ****)0x449c91;
  iStack_1e8 = FUN_005b3fb0();
  pppiVar2 = (int ***)in_ECX[7];
  local_208 = (int ****)0x449cab;
  local_1f0 = (undefined1 ****)pppiVar2;
  pppuVar5 = (undefined1 ***)FUN_005b3fb0();
  iVar4 = in_ECX[0x25];
  local_1ec = pppuVar5;
  if (iVar4 == 0) {
    local_1f4 = (undefined1 ****)(((int)pppiVar2 - (int)pppuVar5) / 2);
    if (in_ECX[0x22] == 0) {
      local_1f4 = (undefined1 ****)((int)local_1f4 + (int)pppuVar5);
      local_208 = (int ****)(float)(int)local_1f4;
      ppiStack_210 = apiStack_90;
      local_20c = (int ****)0x0;
      uVar6 = 0xbfc90fdb;
      puVar7 = auStack_60;
      FUN_0047745f((float)(int)pppuVar5,puVar7,0xbfc90fdb);
      FUN_004771b4(puVar7,uVar6);
      local_208 = (int ****)FUN_0047713c();
      local_20c = (int ****)0x3f800000;
      ppiStack_210 = (int **)0x44a022;
      local_20c = (int ****)FUN_0047badf();
      ppiStack_210 = (int **)(in_ECX + 0x27);
      FUN_0047d2d0();
      local_208 = (int ****)&local_1f0;
      local_20c = (int ****)0x44a041;
      FUN_0046537e();
      local_208 = (int ****)&local_1f0;
      local_c = 3;
      local_20c = (int ****)0x44a058;
      (**(code **)(*in_ECX + 0x24))();
    }
    else {
      local_208 = (int ****)(float)(int)local_1f4;
      ppiStack_210 = apiStack_f0;
      local_20c = (int ****)0x0;
      FUN_0047745f((float)(int)pppuVar5);
      local_208 = (int ****)FUN_0047713c();
      local_20c = (int ****)0x3f800000;
      ppiStack_210 = (int **)0x449f85;
      local_20c = (int ****)FUN_0047badf();
      ppiStack_210 = (int **)(in_ECX + 0x27);
      FUN_0047d2d0();
      local_208 = (int ****)apppuStack_1cc;
      local_20c = (int ****)0x449fa4;
      FUN_0046537e();
      local_208 = (int ****)apppuStack_1cc;
      local_c = 4;
      local_20c = (int ****)0x449fbb;
      (**(code **)(*in_ECX + 0x24))();
    }
    local_c = 0xffffffff;
    local_208 = (int ****)0x44a069;
    FUN_004652d6();
    iStack_1e8 = -(int)local_1e0;
    goto LAB_0044a073;
  }
  if (iVar4 == 0x1000) {
    local_1f4 = (undefined1 ****)(((int)pppiVar2 - (int)pppuVar5) / 2);
    local_208 = (int ****)(float)(int)local_1f4;
    ppiStack_210 = apiStack_150;
LAB_00449f00:
    local_20c = (int ****)(float)iStack_1e8;
    FUN_0047745f((float)(int)pppuVar5);
    local_208 = (int ****)FUN_0047713c();
  }
  else {
    if (iVar4 == 0x2000) {
      local_1f4 = (undefined1 ****)(((int)pppiVar2 - (int)pppuVar5) / 2);
      local_208 = (int ****)(float)(int)local_1f4;
      ppiStack_210 = apiStack_198;
      goto LAB_00449f00;
    }
    if (iVar4 != 0x3000) {
      if (iVar4 != 0x5000) goto LAB_0044a073;
      ppppuStack_1e4 = (undefined1 ****)(((int)pppiVar2 - (int)pppuVar5) / 2);
      local_208 = (int ****)(float)(int)ppppuStack_1e4;
      ppiStack_210 = apiStack_d8;
      goto LAB_00449f00;
    }
    local_1ec = (undefined1 ***)((float)(int)pppuVar5 * 0.7);
    ppiStack_210 = apiStack_168;
    fStack_1d4 = ((float)(int)pppuVar5 - (float)local_1ec) * 0.5;
    ppppuStack_1e4 = (undefined1 ****)(float)iStack_1e8;
    local_208 = (int ****)((float)(((int)pppiVar2 - (int)pppuVar5) / 2) + fStack_1d4 + fStack_1d4);
    local_20c = (int ****)(fStack_1d4 + fStack_1d4 + (float)ppppuStack_1e4);
    local_1f4 = (undefined1 ****)local_20c;
    FUN_0047745f(local_1ec);
    local_208 = (int ****)FUN_0047713c();
    ppiStack_210 = (int **)0x449db4;
    FUN_0047d2ae();
    local_1f4 = (undefined1 ****)&local_208;
    ppiStack_210 = (int **)&local_208;
    local_20c = (int ****)_DAT_0095768c;
    FUN_0047620f();
    local_20c = (int ****)0x449dd7;
    FUN_0047cda7();
    ppiStack_210 = apiStack_138;
    local_208 = (int ****)((float)((in_ECX[7] - (int)pppuVar5) / 2) + fStack_1d4);
    local_20c = (int ****)(fStack_1d4 + (float)ppppuStack_1e4);
    local_1f4 = (undefined1 ****)local_20c;
    FUN_0047745f(local_1ec);
    local_208 = (int ****)FUN_0047713c();
    local_20c = (int ****)(in_ECX + 0x27);
    ppiStack_210 = (int **)0x449e3f;
    FUN_0047d2ae();
    local_1f4 = (undefined1 ****)&local_208;
    ppiStack_210 = (int **)&local_208;
    local_20c = (int ****)0x3ecccccd;
    FUN_0047620f();
    local_20c = (int ****)0x449e62;
    FUN_0047cda7();
    local_1f4 = (undefined1 ****)((in_ECX[7] - (int)pppuVar5) / 2);
    local_208 = (int ****)(float)(int)local_1f4;
    ppiStack_210 = apiStack_108;
    local_20c = (int ****)ppppuStack_1e4;
    FUN_0047745f(local_1ec);
    local_208 = (int ****)FUN_0047713c();
  }
  local_20c = (int ****)(in_ECX + 0x27);
  ppiStack_210 = (int **)0x449f25;
  FUN_0047d2ae();
LAB_0044a073:
  local_208 = (int ****)0x44a07a;
  cVar3 = FUN_004c3153();
  local_208 = (int ****)&DAT_0095d8b0;
  if (cVar3 == '\0') {
    local_208 = (int ****)&DAT_0095d9f4;
  }
  local_1f4 = (undefined1 ****)&local_208;
  local_20c = (int ****)0x44a094;
  FUN_004d076d();
  local_20c = (int ****)0x44a09e;
  FUN_0047cda7();
  local_208 = (int ****)(local_1d8 * 0.5);
  iStack_1e8 = (int)pppuVar5 + iStack_1e8 + (int)local_1e0 * 2;
  local_20c = (int ****)&pppuStack_1dc;
  ppiStack_210 = (int **)0x44a0c9;
  local_1f4 = (undefined1 ****)local_208;
  FUN_0044bfc5();
  ppiStack_210 = (int **)0x44a0d4;
  local_208 = (int ****)FUN_0049f81a();
  local_c = 5;
  local_20c = (int ****)0x44a0e5;
  FUN_0047ceaa();
  puStack_10 = (undefined1 *)0xffffffff;
  local_20c = (int ****)0x44a0f6;
  FUN_004c4d7a();
  local_1e0 = local_1d8;
  if (in_ECX[0x25] == 0) {
    local_1e0 = 0.0;
  }
  local_1f4 = (undefined1 ****)(in_ECX[6] - iStack_1e8);
  local_208 = (int ****)0x44a125;
  uVar6 = FUN_005b3fb0();
  local_208 = (int ****)0x3f800000;
  local_20c = (int ****)0x1;
  local_1f4 = (undefined1 ****)&ppiStack_210;
  ppiStack_210 = (int **)0x21;
  FUN_0047d12a(iStack_1e8,0,uVar6,in_ECX[7]);
  piVar1 = local_1d0;
  if (local_1d0[0x25] != 0) {
    local_208 = (int ****)0x44a161;
    iVar4 = FUN_0044bfc5();
    local_208 = (int ****)(iVar4 + 0xb8);
    local_1d0 = (int *)&local_208;
    local_20c = (int ****)0x44a175;
    FUN_004d076d();
    local_20c = (int ****)0x44a17d;
    FUN_0047cda7();
    local_208 = (int ****)(float)in_ECX[6];
    ppiStack_210 = (int **)(piVar1[7] + -1);
    local_20c = (int ****)0x0;
    FUN_0047d84f(param_1);
  }
  ExceptionList = local_14;
  return;
}

