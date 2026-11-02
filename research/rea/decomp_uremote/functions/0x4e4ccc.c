// rea decompile_all
// name: FUN_004e4ccc
// address: 0x4e4ccc
// body: available
// range: 0x4e4ccc-0x4e4ddd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e4ccc(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int in_ECX;
  int unaff_EBX;
  undefined1 local_34 [4];
  uint local_30;
  undefined1 local_2c [24];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005debef;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_30 = 0;
  puVar3 = (undefined *)FUN_004e4ab1(DAT_00955fd4 ^ (uint)&stack0xffffffc0);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = &DAT_0095d718;
  }
  FUN_004652e4(puVar3);
  local_c = 0;
  if (*(int *)(unaff_EBX + 0xa4) == in_ECX) {
    FUN_004e5b73(*(undefined4 *)(unaff_EBX + 0xbc),local_2c);
    local_30 = 1;
    cVar2 = FUN_00465953();
    bVar1 = false;
    if (cVar2 == '\0') goto LAB_004e4d57;
  }
  bVar1 = true;
LAB_004e4d57:
  if ((local_30 & 1) != 0) {
    FUN_004652d6();
  }
  if (bVar1) {
    FUN_004e5a95(local_34,0);
    *(int *)(unaff_EBX + 0xa4) = in_ECX;
    uVar4 = FUN_00461619();
    local_c._0_1_ = 1;
    FUN_004718fd(uVar4);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_004615f7();
    FUN_004c1613(unaff_EBX);
    FUN_004e57c3(param_1);
  }
  FUN_004652d6();
  ExceptionList = local_14;
  return;
}

