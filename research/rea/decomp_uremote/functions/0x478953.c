// rea decompile_all
// name: FUN_00478953
// address: 0x478953
// body: available
// range: 0x478953-0x47898f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00478953(void)

{
  uint uVar1;
  undefined4 *in_EAX;
  undefined4 uVar2;
  float *pfVar3;
  int *in_EDX;
  int iVar4;
  uint uVar5;
  
  uVar1 = in_EDX[2];
  if ((uVar1 == in_EAX[2]) && ((char)in_EDX[7] == *(char *)(in_EAX + 7))) {
    uVar5 = 0;
    if (uVar1 != 0) {
      pfVar3 = (float *)*in_EAX;
      iVar4 = *in_EDX - (int)pfVar3;
      do {
        if (*pfVar3 != *(float *)(iVar4 + (int)pfVar3)) goto LAB_0047898b;
        uVar5 = uVar5 + 1;
        pfVar3 = pfVar3 + 1;
      } while (uVar5 < uVar1);
    }
    uVar2 = 0;
  }
  else {
LAB_0047898b:
    uVar2 = 1;
  }
  return uVar2;
}

