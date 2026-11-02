// rea decompile_all
// name: FUN_0054cbc0
// address: 0x54cbc0
// body: available
// range: 0x54cbc0-0x54cc79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0054cbc0(undefined4 param_1,short *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int in_ECX;
  
  *param_2 = *(short *)(in_ECX + 0x7a) + 4;
  iVar2 = FUN_00532410(*param_2,6,*(byte *)(in_ECX + 0x74) >> 1 & 1,*(byte *)(in_ECX + 0x74) & 1);
  if (iVar2 != 0) {
    puVar1 = *(undefined2 **)(iVar2 + 0x1c);
    *puVar1 = *(undefined2 *)(in_ECX + 0x78);
    puVar1[1] = *(undefined2 *)(in_ECX + 0x7a);
    _memcpy(puVar1 + 2,(void *)(in_ECX + 0x7c),(uint)*(ushort *)(in_ECX + 0x7a));
  }
  return iVar2 != 0;
}

