// rea decompile_all
// name: FUN_004e8cb0
// address: 0x4e8cb0
// body: available
// range: 0x4e8cb0-0x4e8da6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e8cb0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int extraout_ECX;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined1 local_24 [8];
  double local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_10 = 0xf;
  iVar2 = *(int *)(in_ECX + 0x90);
  local_1c = (double)((float)*(int *)(in_ECX + 0x18) * 0.6) + 6755399441055744.0;
  local_c = SUB84((double)((float)*(int *)(in_ECX + 0x18) * 0.35) + 6755399441055744.0,0);
  local_14 = local_c;
  _local_c = CONCAT44(3000,SUB84(local_1c,0));
  if (*(int *)(in_ECX + 0x80) != 0) {
    puVar1 = (undefined4 *)FUN_0040dd60(local_24,iVar2);
    FUN_006e9790(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    FUN_0040dd60(local_24,((int)((iVar2 >> 0x1f & 3U) + iVar2) >> 2) * 3);
    iVar2 = extraout_ECX;
  }
  if (*(int *)(in_ECX + 0x88) != 0) {
    uVar5 = *(undefined4 *)(in_ECX + 0x18);
    puVar4 = local_24;
    puVar3 = local_34;
    FUN_0040dd60(local_44,*(undefined4 *)(*(int *)(in_ECX + 0x88) + 0x1c));
    FUN_0040de10(puVar3,iVar2);
    puVar1 = (undefined4 *)FUN_0040dde0(puVar4,uVar5);
    FUN_006e9790(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  }
  return;
}

