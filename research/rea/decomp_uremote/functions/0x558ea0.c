// rea decompile_all
// name: FUN_00558ea0
// address: 0x558ea0
// body: available
// range: 0x558ea0-0x558f21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00558ea0(int param_1)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  int in_ECX;
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (*(ushort *)(in_ECX + 0x10) <= local_8) {
      return in_EAX & 0xffffff00;
    }
    iVar2 = FUN_0055bb40(*(undefined2 *)(*(int *)(in_ECX + 8) + local_8 * 8));
    if (((iVar2 != 0) && (cVar1 = FUN_005034a0(param_1), cVar1 != '\0')) &&
       (*(short *)(*(int *)(in_ECX + 8) + 2 + local_8 * 8) == *(short *)(param_1 + 0xc))) break;
    in_EAX = local_8 + 1;
    local_8 = in_EAX;
  }
  return CONCAT31((uint3)(byte)((ushort)*(short *)(param_1 + 0xc) >> 8),1);
}

