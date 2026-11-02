// rea decompile_all
// name: FUN_00500e7b
// address: 0x500e7b
// body: available
// range: 0x500e7b-0x500ee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00500e7b(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = in_EAX[2];
  iVar2 = FUN_00470645(0,iVar1);
  iVar3 = FUN_00470645(0,iVar1);
  if (iVar3 < iVar2) {
    puVar5 = (undefined4 *)(*in_EAX + iVar3 * 4);
    iVar4 = iVar1 - iVar2;
    in_EAX[2] = iVar1 - (iVar2 - iVar3);
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      *puVar5 = puVar5[iVar2 - iVar3];
      puVar5 = puVar5 + 1;
    }
    if ((in_EAX[2] * 2 < in_EAX[1]) && (in_EAX[2] < in_EAX[1])) {
      FUN_004f8197();
    }
  }
  return;
}

