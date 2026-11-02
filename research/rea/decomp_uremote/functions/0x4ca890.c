// rea decompile_all
// name: FUN_004ca890
// address: 0x4ca890
// body: available
// range: 0x4ca890-0x4caa4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ca890(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_EDX;
  float10 fVar4;
  undefined1 auStack_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  float local_60;
  undefined1 local_5c [4];
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  undefined1 local_30 [20];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e0006;
  local_14 = ExceptionList;
  local_1c = DAT_00955fd4 ^ (uint)auStack_6c;
  ExceptionList = &local_14;
  thunk_FUN_00472232(DAT_00955fd4 ^ (uint)&stack0xffffff88);
  local_c = 0;
  FUN_004c8ff2(local_58,local_64);
  FUN_004c0036();
  FUN_004652d6();
  fVar4 = (float10)FUN_004ca4ea(local_58);
  local_60 = (float)fVar4;
  FUN_004ca5a6(local_58,local_64);
  FUN_004c6ae2();
  local_c._0_1_ = 1;
  FUN_004ca4b9();
  local_c = CONCAT31(local_c._1_3_,2);
  iVar2 = FUN_004d01c2();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_004d01c2();
    (**(code **)(*piVar3 + 4))(local_5c,local_30);
    FUN_0049f5e8();
    FUN_004c4d7a();
  }
  FUN_004ca65b(local_58,local_48);
  local_c = CONCAT31(local_c._1_3_,3);
  cVar1 = FUN_004e388d();
  if ((cVar1 == '\0') && (*(float *)(in_EDX + 0x7c) == local_60)) {
    cVar1 = FUN_004733c7();
    if (cVar1 == '\0') {
      cVar1 = FUN_004733c7();
      if (cVar1 == '\0') goto LAB_004caa07;
    }
  }
  FUN_004c1613(in_EDX);
  *(float *)(in_EDX + 0x7c) = local_60;
  FUN_004d076d();
  cVar1 = FUN_004733c7();
  if (cVar1 != '\0') {
    FUN_004ca095(local_68);
  }
  FUN_004ca18c(in_EDX);
LAB_004caa07:
  FUN_004e37c2();
  FUN_004615f7();
  FUN_004c4d7a();
  FUN_004722b6();
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_6c);
  return;
}

