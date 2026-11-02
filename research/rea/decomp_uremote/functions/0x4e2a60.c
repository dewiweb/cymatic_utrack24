// rea decompile_all
// name: FUN_004e2a60
// address: 0x4e2a60
// body: available
// range: 0x4e2a60-0x4e2aeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e2a60(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *unaff_EBX;
  
  iVar2 = FUN_004e2a32(param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_005af82d(8);
    if (iVar2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_004e2b44(param_1,param_2);
    }
    if (unaff_EBX[1] < unaff_EBX[2] + 1) {
      FUN_004f8197();
    }
    iVar2 = unaff_EBX[2];
    unaff_EBX[2] = iVar2 + 1;
    *(undefined4 *)(*unaff_EBX + iVar2 * 4) = param_2;
  }
  else {
    cVar1 = FUN_004e2fac(iVar2 + 4,param_2);
    if (cVar1 == '\0') {
      return;
    }
    FUN_004e2ee9(iVar2 + 4);
  }
  FUN_004e2b04();
  return;
}

