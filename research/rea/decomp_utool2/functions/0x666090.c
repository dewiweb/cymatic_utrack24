// rea decompile_all
// name: FUN_00666090
// address: 0x666090
// body: available
// range: 0x666090-0x666129 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00666090(void)

{
  undefined1 *puVar1;
  int *in_ECX;
  int iVar2;
  
  *(undefined4 *)(*in_ECX + 0x14) = 0x66;
  (**(code **)(*in_ECX + 4))();
  if (*(char *)(in_ECX[0x65] + 0xc) != '\0') {
    *(undefined4 *)(*in_ECX + 0x14) = 0x3d;
    (**(code **)*in_ECX)();
  }
  iVar2 = 0x10;
  puVar1 = (undefined1 *)((int)in_ECX + 0xda);
  do {
    puVar1[-0x10] = 0;
    *puVar1 = 1;
    puVar1[0x10] = 5;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  in_ECX[0x3f] = 0;
  *(undefined2 *)((int)in_ECX + 0x106) = 1;
  iVar2 = in_ECX[0x65];
  in_ECX[10] = 0;
  *(undefined2 *)((int)in_ECX + 0x109) = 0;
  *(undefined2 *)(in_ECX + 0x40) = 0x100;
  *(undefined4 *)((int)in_ECX + 0x102) = 0x10001;
  *(undefined1 *)(in_ECX + 0x42) = 0;
  *(undefined1 *)(iVar2 + 0xc) = 1;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

