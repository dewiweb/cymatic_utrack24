// rea decompile_all
// name: FUN_004b9660
// address: 0x4b9660
// body: available
// range: 0x4b9660-0x4b96f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b9660(short param_1,short param_2,short param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = *(int *)(in_ECX + 0x2c0c);
  *(short *)(in_ECX + 0x18 + iVar1 * 8) = param_1;
  *(short *)(in_ECX + 8 + iVar1 * 8) = param_1;
  *(short *)(in_ECX + 0x12 + iVar1 * 8) = param_2;
  iVar1 = in_ECX + iVar1 * 8;
  *(short *)(iVar1 + 10) = param_2;
  *(short *)(iVar1 + 0x20) = param_3 + param_1;
  *(short *)(iVar1 + 0x10) = param_3 + param_1;
  *(short *)(iVar1 + 0x22) = param_2 + 1;
  *(short *)(iVar1 + 0x1a) = param_2 + 1;
  uVar2 = (((param_5 >> 0x18) << 8 | param_5 & 0xff) << 8 | param_5 >> 8 & 0xff) << 8 |
          param_5 >> 0x10 & 0xff;
  *(uint *)(iVar1 + 0xc) = uVar2;
  *(uint *)(iVar1 + 0x14) = uVar2;
  *(uint *)(iVar1 + 0x1c) = uVar2;
  *(uint *)(iVar1 + 0x24) = uVar2;
  *(int *)(in_ECX + 0x2c0c) = *(int *)(in_ECX + 0x2c0c) + 4;
  if (0x3fc < *(int *)(in_ECX + 0x2c0c)) {
    FUN_004b9700();
  }
  return;
}

