// rea decompile_all
// name: FUN_005e8d00
// address: 0x5e8d00
// body: available
// range: 0x5e8d00-0x5e8d91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e8d00(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  int in_EDX;
  
  iVar2 = FUN_005e8da0(1);
  if (iVar2 != 0) {
    return 1;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x68);
  iVar2 = *(int *)(in_EDX + 0x1c);
  puVar3 = (undefined4 *)FUN_004c5556(1,0x24);
  puVar3[1] = *(undefined4 *)(in_EDX + 4);
  *puVar3 = 0xc61c3c00;
  puVar3[2] = iVar2 + 0xb34;
  puVar1[0xf] = puVar3;
  uVar4 = FUN_004c5556(1,0xb4);
  *puVar1 = uVar4;
  FUN_005e6940();
  FUN_005e9a30();
  *(undefined4 *)(in_ECX + 0x40) = 3;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  return 0;
}

