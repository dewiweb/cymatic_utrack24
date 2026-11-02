// rea decompile_all
// name: FUN_005e83c0
// address: 0x5e83c0
// body: available
// range: 0x5e83c0-0x5e8439 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005e83c0(void)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int in_ECX;
  int iVar4;
  
  iVar1 = *(int *)(in_ECX + 0x68);
  if (((iVar1 != 0) && (*(int *)(in_ECX + 4) != 0)) &&
     (iVar4 = *(int *)(*(int *)(in_ECX + 4) + 0x1c), iVar4 != 0)) {
    uVar2 = *(undefined4 *)(iVar4 + 0xe48);
    iVar4 = *(int *)(iVar4 + 4);
    *(undefined4 *)(in_ECX + 0x18) = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x38) = 0xffffffff;
    bVar3 = (byte)uVar2;
    *(undefined4 *)(in_ECX + 0x3c) = 0xffffffff;
    iVar4 = iVar4 >> (bVar3 + 1 & 0x1f);
    *(int *)(in_ECX + 0x30) = iVar4;
    *(int *)(in_ECX + 0x14) = iVar4 >> (bVar3 & 0x1f);
    *(undefined4 *)(in_ECX + 0x40) = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x44) = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x80) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x84) = 0xffffffff;
    return 0;
  }
  return 0xffffffff;
}

