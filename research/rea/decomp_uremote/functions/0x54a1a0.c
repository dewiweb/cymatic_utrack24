// rea decompile_all
// name: FUN_0054a1a0
// address: 0x54a1a0
// body: available
// range: 0x54a1a0-0x54a307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0054a1a0(undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  
  *param_2 = 0x16;
  iVar3 = FUN_00532410(*param_2,3,*(byte *)(in_ECX + 0x74) >> 1 & 1,*(byte *)(in_ECX + 0x74) & 1);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    puVar2 = *(undefined2 **)(iVar3 + 0x1c);
    *puVar2 = *(undefined2 *)(in_ECX + 0x78);
    puVar2[1] = *(undefined2 *)(in_ECX + 0x7a);
    puVar2[2] = *(undefined2 *)(in_ECX + 0x7c);
    puVar2[3] = *(undefined2 *)(in_ECX + 0x7e);
    puVar2[4] = *(undefined2 *)(in_ECX + 0x80);
    puVar2[5] = *(undefined2 *)(in_ECX + 0x82);
    puVar2[6] = *(undefined2 *)(in_ECX + 0x84);
    puVar2[7] = *(undefined2 *)(in_ECX + 0x86);
    puVar2[8] = *(undefined2 *)(in_ECX + 0x88);
    puVar2[9] = *(undefined2 *)(in_ECX + 0x8a);
    uVar1 = *(undefined2 *)(in_ECX + 0x8c);
    puVar2[10] = uVar1;
    uVar4 = CONCAT31((int3)(CONCAT22((short)((uint)(puVar2 + 10) >> 0x10),uVar1) >> 8),1);
  }
  return uVar4;
}

