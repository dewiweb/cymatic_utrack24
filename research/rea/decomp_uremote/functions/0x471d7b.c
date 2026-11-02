// rea decompile_all
// name: FUN_00471d7b
// address: 0x471d7b
// body: available
// range: 0x471d7b-0x471e58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00471d7b(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005da7d7;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (param_1 == 0) {
    cVar1 = FUN_00460c4e();
    if (cVar1 != '\0') {
      FUN_00471af5(unaff_EDI);
    }
  }
  else {
    cVar1 = FUN_00460c42(DAT_00955fd4 ^ (uint)&stack0xffffffc8);
    if (cVar1 != '\0') {
      iVar2 = FUN_005af82d(0x38);
      local_c = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_004615f0();
        local_c = CONCAT31(local_c._1_3_,1);
        uVar5 = 0;
        uVar4 = FUN_00460b70(0);
        uVar3 = FUN_00472018(iVar2,unaff_ESI,unaff_EDI,uVar3,uVar4,uVar5);
      }
      local_c = 2;
      FUN_004727fe(uVar3);
      if (iVar2 != 0) {
        FUN_004615f7();
      }
    }
  }
  ExceptionList = local_14;
  return;
}

