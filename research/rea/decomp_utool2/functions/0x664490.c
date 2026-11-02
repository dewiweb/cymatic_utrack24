// rea decompile_all
// name: FUN_00664490
// address: 0x664490
// body: available
// range: 0x664490-0x66453d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00664490(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(in_ECX + 4))();
  *(undefined4 **)(in_ECX + 0x194) = puVar1;
  iVar2 = 0x10;
  *puVar1 = FUN_00664540;
  puVar1[1] = FUN_00664710;
  puVar1[2] = FUN_00664680;
  puVar1[6] = FUN_00664bc0;
  puVar1[0x17] = 0;
  puVar3 = puVar1 + 0x18;
  do {
    puVar3[-0x11] = FUN_00664bc0;
    *puVar3 = 0;
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 0);
  puVar1[7] = FUN_00664ec0;
  puVar1[0x15] = FUN_00664ec0;
  iVar2 = *(int *)(in_ECX + 0x194);
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x17c) = 0;
  *(undefined2 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0xa0) = 0;
  return;
}

