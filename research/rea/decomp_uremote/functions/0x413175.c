// rea decompile_all
// name: FUN_00413175
// address: 0x413175
// body: available
// range: 0x413175-0x4131ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00413175(void)

{
  int in_EAX;
  int in_ECX;
  int *in_EDX;
  uint uVar1;
  int iVar2;
  
  uVar1 = in_EAX - in_EDX[4];
  if (in_EDX[3] < in_ECX) {
    in_ECX = in_EDX[3];
  }
  iVar2 = in_ECX - in_EDX[2];
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  if ((iVar2 != *in_EDX) || (uVar1 != in_EDX[1])) {
    if (in_EDX[10] == 0) {
      FUN_00413153();
    }
    in_EDX[8] = 0;
    in_EDX[9] = 0;
  }
  *in_EDX = iVar2;
  in_EDX[1] = uVar1;
  if ((uVar1 < (uint)in_EDX[7]) && (iVar2 < in_EDX[6])) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  in_EDX[10] = iVar2;
  return;
}

