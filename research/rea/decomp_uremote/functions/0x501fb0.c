// rea decompile_all
// name: FUN_00501fb0
// address: 0x501fb0
// body: available
// range: 0x501fb0-0x50205f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00501fb0(void *param_1,ushort param_2)

{
  int iVar1;
  int *in_ECX;
  
  FUN_00501ba0();
  if (param_1 != (void *)0x0) {
    if ((uint)*(ushort *)(in_ECX + 1) < param_2 + 1) {
      if (*in_ECX != 0) {
        FUN_005b13e8(*in_ECX);
      }
      *(ushort *)(in_ECX + 1) = param_2 + 1;
      iVar1 = FUN_005b04d6((short)in_ECX[1]);
      *in_ECX = iVar1;
    }
    if (*in_ECX != 0) {
      _memcpy((void *)*in_ECX,param_1,(uint)param_2);
      *(undefined1 *)((uint)param_2 + *in_ECX) = 0;
    }
    *(ushort *)((int)in_ECX + 6) = param_2;
  }
  return;
}

