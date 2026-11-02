// rea decompile_all
// name: FUN_00547d70
// address: 0x547d70
// body: available
// range: 0x547d70-0x547ea5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00547d70(undefined4 param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int in_ECX;
  
  *param_2 = 0x12;
  iVar2 = FUN_00532410(*param_2,1,*(byte *)(in_ECX + 0x74) >> 1 & 1,*(byte *)(in_ECX + 0x74) & 1);
  if (iVar2 != 0) {
    puVar1 = *(undefined2 **)(iVar2 + 0x1c);
    *puVar1 = *(undefined2 *)(in_ECX + 0x78);
    puVar1[1] = *(undefined2 *)(in_ECX + 0x7a);
    puVar1[2] = *(undefined2 *)(in_ECX + 0x7c);
    puVar1[3] = *(undefined2 *)(in_ECX + 0x7e);
    puVar1[4] = *(undefined2 *)(in_ECX + 0x80);
    puVar1[5] = *(undefined2 *)(in_ECX + 0x82);
    puVar1[6] = *(undefined2 *)(in_ECX + 0x84);
    puVar1[7] = *(undefined2 *)(in_ECX + 0x86);
    puVar1[8] = *(undefined2 *)(in_ECX + 0x88);
  }
  return iVar2 != 0;
}

