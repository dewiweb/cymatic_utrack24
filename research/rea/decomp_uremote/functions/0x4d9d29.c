// rea decompile_all
// name: FUN_004d9d29
// address: 0x4d9d29
// body: available
// range: 0x4d9d29-0x4d9f91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d9d29(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  float10 fVar4;
  undefined1 auStack_a0 [4];
  float local_9c;
  float local_98;
  undefined4 local_90;
  undefined4 local_8c;
  float *pfStack_88;
  uint uStack_84;
  int local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de550;
  local_14 = ExceptionList;
  uStack_84 = DAT_00955fd4 ^ (uint)&stack0xffffff80;
  ExceptionList = &local_14;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  pfStack_88 = (float *)0x4d9d81;
  cVar3 = FUN_004c3153();
  if (cVar3 == '\0') {
    uVar2 = 0x3e19999a;
  }
  else {
    uVar2 = 0x3e800000;
  }
  pfStack_88 = (float *)0x0;
  local_8c = 0;
  local_90 = 0;
  local_98 = 7.127908e-39;
  fVar4 = (float10)FUN_004d076d();
  local_98 = (float)fVar4;
  local_9c = (float)fVar4;
  FUN_0047620f(auStack_a0,uVar2);
  FUN_00476850(&local_38);
  local_c = 0;
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 == 0) {
    local_34 = (float)param_4;
    local_2c = local_34 * 0.8;
    pfStack_88 = (float *)0x4d9efb;
    FUN_005b3fb0();
    local_54 = param_4 + -1;
LAB_004d9f1a:
    local_60 = param_3;
    local_4c = 1;
    local_50 = local_60;
  }
  else {
    if (iVar1 == 1) {
      local_2c = (float)param_4 * 0.2;
      pfStack_88 = (float *)0x4d9ec3;
      FUN_005b3fb0();
      local_54 = 0;
      goto LAB_004d9f1a;
    }
    if (iVar1 == 2) {
      local_38 = (float)param_3;
      local_30 = local_38 * 0.8;
      pfStack_88 = (float *)0x4d9e6a;
      FUN_005b3fb0();
      local_58 = param_3 + -1;
      local_54 = 0;
      local_50 = 1;
      local_4c = param_4;
      goto LAB_004d9f26;
    }
    if (iVar1 != 3) goto LAB_004d9f26;
    local_30 = (float)param_3 * 0.2;
    pfStack_88 = (float *)0x4d9e24;
    FUN_005b3fb0();
    local_54 = 0;
    local_50 = 1;
    local_4c = param_4;
  }
  local_58 = 0;
LAB_004d9f26:
  pfStack_88 = &local_38;
  local_8c = param_2;
  local_90 = 0x4d9f33;
  FUN_0047ce07();
  pfStack_88 = (float *)0x4d9f45;
  pfStack_88 = (float *)FUN_00439b27();
  local_8c = 0x4d9f4e;
  FUN_0047d170();
  local_8c = 0x4d9f5f;
  FUN_0047604f();
  local_8c = 0x4d9f67;
  FUN_0047cda7();
  pfStack_88 = (float *)&local_58;
  local_8c = 0x4d9f74;
  FUN_0047d170();
  pfStack_88 = (float *)0x4d9f7d;
  FUN_004768de();
  ExceptionList = local_14;
  return;
}

