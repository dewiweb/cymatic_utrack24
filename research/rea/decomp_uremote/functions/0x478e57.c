// rea decompile_all
// name: FUN_00478e57
// address: 0x478e57
// body: available
// range: 0x478e57-0x478ea9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00478e57(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *in_EAX;
  int iVar3;
  float *pfVar4;
  undefined4 *unaff_EDI;
  
  iVar3 = in_EAX[2] + -1;
  if (0 < iVar3) {
    pfVar4 = (float *)(*in_EAX + iVar3 * 4);
    if (*pfVar4 == 100005.0) {
      do {
        if (*pfVar4 == 100002.0) {
          iVar3 = iVar3 + 2;
          break;
        }
        iVar3 = iVar3 + -1;
        pfVar4 = pfVar4 + -1;
      } while (-1 < iVar3);
    }
    if (0 < iVar3) {
      puVar1 = (undefined4 *)(*in_EAX + iVar3 * 4);
      *unaff_EDI = puVar1[-1];
      uVar2 = *puVar1;
      goto LAB_00478ea4;
    }
  }
  uVar2 = 0;
  *unaff_EDI = 0;
LAB_00478ea4:
  unaff_EDI[1] = uVar2;
  return;
}

