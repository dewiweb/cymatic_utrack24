// rea decompile_all
// name: FUN_004c721b
// address: 0x4c721b
// body: available
// range: 0x4c721b-0x4c7267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c721b(void)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  
  if (unaff_ESI[1] == in_EAX[1]) {
    if (((unaff_ESI[2] == in_EAX[2]) || (unaff_ESI[2] == 0)) || (in_EAX[2] == 0)) {
      iVar1 = *in_EAX;
      if (*unaff_ESI == iVar1) {
        return 1;
      }
      if ((*unaff_ESI < 0x100) && (iVar1 < 0x100)) {
        iVar1 = FUN_00464f5d(iVar1);
        iVar2 = FUN_00464f5d(*unaff_ESI);
        if (iVar2 == iVar1) {
          return 1;
        }
      }
    }
  }
  return 0;
}

