// rea decompile_all
// name: FUN_0048c78f
// address: 0x48c78f
// body: available
// range: 0x48c78f-0x48c819 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048c78f(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  int iVar5;
  
  iVar1 = unaff_ESI[2];
  iVar4 = unaff_ESI[6] * iVar1 * 0x80;
  iVar3 = unaff_ESI[4];
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = iVar3 - iVar5;
      if (unaff_ESI[5] < iVar3 - iVar5) {
        iVar2 = unaff_ESI[5];
      }
      iVar3 = unaff_ESI[7] - (unaff_ESI[6] + iVar5);
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      iVar3 = unaff_ESI[1] - (unaff_ESI[6] + iVar5);
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      if (iVar2 < 1) {
        return;
      }
      iVar2 = iVar2 * iVar1 * 0x80;
      if (param_2 == '\0') {
        (*(code *)unaff_ESI[10])
                  (param_1,unaff_ESI + 10,*(undefined4 *)(*unaff_ESI + iVar5 * 4),iVar4,iVar2);
      }
      else {
        (*(code *)unaff_ESI[0xb])(param_1,unaff_ESI + 10,*(undefined4 *)(*unaff_ESI + iVar5 * 4));
      }
      iVar5 = iVar5 + unaff_ESI[5];
      iVar3 = unaff_ESI[4];
      iVar4 = iVar4 + iVar2;
    } while (iVar5 < iVar3);
  }
  return;
}

