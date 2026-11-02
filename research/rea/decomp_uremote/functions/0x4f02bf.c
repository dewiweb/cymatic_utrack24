// rea decompile_all
// name: FUN_004f02bf
// address: 0x4f02bf
// body: available
// range: 0x4f02bf-0x4f0328 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f02bf(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar2 = param_1;
  do {
    if (piVar2 == (int *)0x0) goto LAB_004f02ff;
    cVar1 = FUN_004f0123(param_3);
    if (cVar1 != '\0') {
      return 1;
    }
    piVar2 = (int *)(**(code **)(*piVar2 + 4))();
    iVar4 = iVar4 + 1;
  } while ((iVar4 < 0x65) && (piVar2 != param_1));
  if (piVar2 == (int *)0x0) {
LAB_004f02ff:
    iVar4 = FUN_004f03e7();
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 0x10;
    }
    if (iVar4 != 0) {
      uVar3 = FUN_004f0123(param_3);
      return uVar3;
    }
  }
  return 0;
}

