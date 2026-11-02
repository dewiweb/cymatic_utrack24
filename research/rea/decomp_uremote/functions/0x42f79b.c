// rea decompile_all
// name: FUN_0042f79b
// address: 0x42f79b
// body: available
// range: 0x42f79b-0x42f7ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0042f79b(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  
  pbVar2 = (byte *)unaff_ESI[2];
  (*(code *)unaff_ESI[7])();
  if (((byte *)*unaff_ESI < pbVar2) && (*(byte *)*unaff_ESI - 0x30 < 10)) {
    iVar4 = (*(code *)unaff_ESI[9])();
    (*(code *)unaff_ESI[8])();
    iVar3 = *unaff_ESI;
    iVar1 = iVar3 + 1;
    *param_2 = iVar1;
    if ((-1 < iVar4) && (iVar4 < (int)pbVar2 - iVar1)) {
      *unaff_ESI = iVar3 + 1 + iVar4;
      *param_1 = iVar4;
      return unaff_ESI[3] == 0;
    }
  }
  if (param_3 == '\0') {
    unaff_ESI[3] = 3;
  }
  return false;
}

