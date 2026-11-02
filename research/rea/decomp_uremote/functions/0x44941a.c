// rea decompile_all
// name: FUN_0044941a
// address: 0x44941a
// body: available
// range: 0x44941a-0x4494ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044941a(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_8;
  
  FUN_0044bfc5();
  iVar3 = 0;
  local_8 = 0;
  iVar1 = FUN_004c121d();
  if (0 < iVar1) {
    do {
      uVar2 = FUN_004c1221();
      FUN_00449510(uVar2,param_1);
      FUN_004c0bf7(0,local_8);
      local_8 = FUN_005b3fb0();
      iVar3 = iVar3 + 1;
      iVar1 = FUN_004c121d();
    } while (iVar3 < iVar1);
    if (local_8 != 0) goto LAB_00449490;
  }
  FUN_005b3fb0();
LAB_00449490:
  uVar2 = FUN_005b3fb0();
  FUN_004c0be5(uVar2);
  return;
}

