// rea decompile_all
// name: FUN_0055a0e0
// address: 0x55a0e0
// body: available
// range: 0x55a0e0-0x55a180 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055a0e0(int param_1,byte param_2)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  uint local_c;
  
  for (local_c = 0; local_c < *(ushort *)(in_ECX + 10); local_c = local_c + 1) {
    iVar2 = param_1;
    FUN_0055af60(*(undefined2 *)(*(int *)(in_ECX + 4) + local_c * 8));
    cVar1 = FUN_005034a0(iVar2);
    if ((cVar1 != '\0') &&
       (*(short *)(*(int *)(in_ECX + 4) + 2 + local_c * 8) == *(short *)(param_1 + 0xc))) {
      *(byte *)(*(int *)(in_ECX + 4) + 6 + local_c * 8) =
           *(byte *)(*(int *)(in_ECX + 4) + 6 + local_c * 8) & 0xfe | param_2 & 1;
    }
  }
  return;
}

