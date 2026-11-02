// rea decompile_all
// name: FUN_00472f28
// address: 0x472f28
// body: available
// range: 0x472f28-0x472fbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00472f28(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  undefined4 *puVar4;
  int local_c;
  
  iVar2 = unaff_EBX[2];
  iVar1 = FUN_00470645(0,iVar2);
  iVar2 = FUN_00470645(0,iVar2);
  local_c = iVar2;
  if (iVar2 < iVar1) {
    do {
      FUN_00473176();
      *(undefined4 *)(*unaff_EBX + local_c * 4) = 0;
      local_c = local_c + 1;
    } while (local_c < iVar1);
    puVar4 = (undefined4 *)(*unaff_EBX + iVar2 * 4);
    iVar3 = unaff_EBX[2] - iVar1;
    unaff_EBX[2] = unaff_EBX[2] - (iVar1 - iVar2);
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      *puVar4 = puVar4[iVar1 - iVar2];
      puVar4 = puVar4 + 1;
    }
    if ((unaff_EBX[2] * 2 < unaff_EBX[1]) && (unaff_EBX[2] < unaff_EBX[1])) {
      FUN_004f8197();
    }
  }
  return;
}

