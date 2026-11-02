// rea decompile_all
// name: FUN_004caec6
// address: 0x4caec6
// body: available
// range: 0x4caec6-0x4caf67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004caec6(void)

{
  undefined4 uVar1;
  int iVar2;
  int *unaff_ESI;
  undefined1 local_38 [16];
  undefined1 local_28 [20];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dd2a9;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004cae93(DAT_00955fd4 ^ (uint)&stack0xffffffc0);
  FUN_004cae68(local_38);
  iVar2 = 0;
  local_c = 0;
  FUN_00472542();
  if (0 < unaff_ESI[2]) {
    do {
      uVar1 = (**(code **)(**(int **)(*unaff_ESI + iVar2 * 4) + 4))(local_28);
      puStack_10._0_1_ = 1;
      FUN_00472528(uVar1);
      puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
      FUN_004722b6();
      iVar2 = iVar2 + 1;
    } while (iVar2 < unaff_ESI[2]);
  }
  FUN_004722b6();
  ExceptionList = local_14;
  return;
}

