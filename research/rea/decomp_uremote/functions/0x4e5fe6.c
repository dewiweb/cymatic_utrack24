// rea decompile_all
// name: FUN_004e5fe6
// address: 0x4e5fe6
// body: available
// range: 0x4e5fe6-0x4e60f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004e5fe6(void)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int *unaff_EDI;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [20];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de45e;
  local_14 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_14;
  FUN_004ebf83(local_30);
  local_c = 0;
  FUN_004718c0(unaff_EDI + 0x21,local_2c);
  cVar1 = FUN_00465953(uVar2);
  FUN_004652d6();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    FUN_00465317(unaff_EDI + 0x25);
    FUN_00461693(local_30);
    local_c._0_1_ = 1;
    FUN_004718fd(local_28);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_004615f7();
    FUN_004c1613(unaff_EDI);
    (**(code **)(*unaff_EDI + 0xb8))();
    cVar1 = FUN_004f5fe9(0);
    if (cVar1 != '\0') {
      if (unaff_EDI[0x2c] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(unaff_EDI[0x2c] + 8);
      }
      (**(code **)(unaff_EDI[0x1f] + 4))(uVar4,1,1);
    }
    uVar3 = 1;
  }
  FUN_004652d6();
  ExceptionList = local_14;
  return uVar3;
}

