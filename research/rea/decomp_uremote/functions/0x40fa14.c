// rea decompile_all
// name: FUN_0040fa14
// address: 0x40fa14
// body: available
// range: 0x40fa14-0x40fa56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0040fa14(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint *unaff_EBX;
  int unaff_ESI;
  uint local_8;
  
  uVar2 = 0;
  local_8 = 0;
  if (((unaff_ESI != 0) && (iVar1 = *(int *)(unaff_ESI + 0x5c), iVar1 != 0)) &&
     (*(int *)(unaff_ESI + 0x10) != 0)) {
    local_8 = param_1;
    do {
      uVar2 = (**(code **)(*(int *)(iVar1 + 0xc) + 0x10))(iVar1,&local_8);
    } while (*(uint *)(unaff_ESI + 0x10) <= uVar2);
    local_8 = -(uint)(uVar2 != 0) & local_8;
  }
  if (unaff_EBX != (uint *)0x0) {
    *unaff_EBX = uVar2;
  }
  return local_8;
}

