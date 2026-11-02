// rea decompile_all
// name: FUN_004575bf
// address: 0x4575bf
// body: available
// range: 0x4575bf-0x45785f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004575bf(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  float fStack_70;
  undefined1 **local_6c;
  undefined *puStack_68;
  uint uStack_64;
  undefined1 *puStack_54;
  undefined1 *local_50;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e06b2;
  local_14 = ExceptionList;
  uStack_64 = DAT_00955fd4 ^ (uint)&stack0xffffffa0;
  ExceptionList = &local_14;
  puStack_68 = (undefined *)0x4575f6;
  FUN_0047888f();
  local_c = 0;
  local_50 = (undefined1 *)&puStack_68;
  local_6c = (undefined1 **)0x45760c;
  FUN_004d076d();
  local_6c = (undefined1 **)0x457616;
  FUN_0047cda7();
  local_6c = (undefined1 **)(in_ECX + 0x25c);
  puStack_68 = &DAT_0095d798;
  fStack_70 = 6.379036e-39;
  FUN_0047d2ae();
  puStack_68 = (undefined *)0x45762d;
  iVar2 = FUN_0044bfc5();
  puStack_68 = (undefined *)(iVar2 + 0xa4);
  local_6c = (undefined1 **)0x457641;
  local_50 = (undefined1 *)&puStack_68;
  FUN_004d076d();
  local_6c = (undefined1 **)0x457648;
  FUN_0047cda7();
  puStack_68 = &DAT_0095d798;
  local_6c = (undefined1 **)0x3f800000;
  fStack_70 = 6.379103e-39;
  local_6c = (undefined1 **)FUN_0047badf();
  fStack_70 = (float)(in_ECX + 0x25c);
  FUN_0047d2d0();
  puStack_68 = (undefined *)(in_ECX + 0x248);
  local_6c = (undefined1 **)0x457673;
  FUN_0047ceaa();
  if (*(int *)(in_ECX + 600) == 1) {
    local_6c = (undefined1 **)0x3f800000;
    iVar2 = FUN_0044bfc5();
    fStack_70 = (float)*(int *)(iVar2 + 0x14);
    uVar3 = FUN_0043bc2d();
    FUN_0047d60d(param_1,uVar3);
  }
  local_6c = (undefined1 **)0x1;
  puStack_54 = (undefined1 *)&fStack_70;
  fStack_70 = 5.04467e-44;
  FUN_0043bc2d();
  FUN_0047cf16(param_1,in_ECX + 0x24c);
  local_6c = &puStack_54;
  fStack_70 = 6.379299e-39;
  FUN_0046537e();
  local_6c = (undefined1 **)0x1;
  puStack_10._0_1_ = 1;
  fStack_70 = 5.04467e-44;
  piVar1 = (int *)(in_ECX + 0xb0);
  local_50 = (undefined1 *)&fStack_70;
  FUN_0047d02d(param_1,&puStack_54,*(int *)(in_ECX + 0xa8) + *(int *)(in_ECX + 0xa0),
               *(undefined4 *)(in_ECX + 0xa4),
               *piVar1 - (*(int *)(in_ECX + 0xa8) + *(int *)(in_ECX + 0xa0)),
               *(undefined4 *)(in_ECX + 0xac));
  puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
  local_6c = (undefined1 **)0x457731;
  FUN_004652d6();
  if (*(int *)(in_ECX + 600) == 2) {
    local_6c = (undefined1 **)0x3f800000;
    iVar2 = FUN_0044bfc5();
    fStack_70 = (float)*(int *)(iVar2 + 0x14);
    uVar3 = FUN_0043bc2d();
    FUN_0047d60d(param_1,uVar3);
  }
  local_6c = (undefined1 **)0x1;
  local_50 = (undefined1 *)&fStack_70;
  fStack_70 = 5.04467e-44;
  FUN_0043bc2d();
  FUN_0047cf16(param_1,in_ECX + 0x250);
  local_6c = &puStack_54;
  fStack_70 = 6.379554e-39;
  FUN_0046537e();
  local_6c = (undefined1 **)0x1;
  puStack_10._0_1_ = 2;
  fStack_70 = 5.04467e-44;
  local_50 = (undefined1 *)&fStack_70;
  FUN_0047d02d(param_1,&puStack_54,*(int *)(in_ECX + 0xb8) + *piVar1,*(undefined4 *)(in_ECX + 0xa4),
               *(int *)(in_ECX + 0xc0) - (*(int *)(in_ECX + 0xb8) + *piVar1),
               *(undefined4 *)(in_ECX + 0xac));
  puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
  local_6c = (undefined1 **)0x4577e7;
  FUN_004652d6();
  if (*(int *)(in_ECX + 600) == 3) {
    local_6c = (undefined1 **)0x3f800000;
    iVar2 = FUN_0044bfc5();
    fStack_70 = (float)*(int *)(iVar2 + 0x14);
    uVar3 = FUN_0043bc2d();
    FUN_0047d60d(param_1,uVar3);
  }
  local_6c = (undefined1 **)0x1;
  local_50 = (undefined1 *)&fStack_70;
  fStack_70 = 5.04467e-44;
  FUN_0043bc2d();
  FUN_0047cf16(param_1,in_ECX + 0x254);
  local_6c = (undefined1 **)0x45784b;
  FUN_004f7994();
  ExceptionList = pvStack_18;
  return;
}

