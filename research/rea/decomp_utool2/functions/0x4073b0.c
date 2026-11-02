// rea decompile_all
// name: FUN_004073b0
// address: 0x4073b0
// body: available
// range: 0x4073b0-0x40747b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004073b0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar4 = *(int *)(in_ECX + 0x20) >> ((byte)*(undefined4 *)(in_ECX + 0x40) & 0x1f);
  iVar1 = iVar4 * 2;
  iVar3 = iVar4 + 2;
  if (iVar3 < iVar1) {
    iVar2 = (iVar1 - iVar3) * 8;
    do {
      *(undefined8 *)(*(int *)(in_ECX + 0x54) + iVar3 * 8) =
           *(undefined8 *)(iVar2 + *(int *)(in_ECX + 0x54));
      *(ulonglong *)(*(int *)(in_ECX + 0x54) + 8 + iVar3 * 8) =
           *(ulonglong *)(iVar2 + 8 + *(int *)(in_ECX + 0x54)) ^ 0x8000000000000000;
      iVar3 = iVar3 + 2;
      iVar2 = iVar2 + -0x10;
    } while (iVar3 < iVar1);
  }
  local_8 = 1;
  *(undefined8 *)(*(int *)(in_ECX + 0x54) + iVar4 * 8) =
       *(undefined8 *)(*(int *)(in_ECX + 0x54) + 8);
  *(undefined8 *)(*(int *)(in_ECX + 0x54) + 8 + iVar4 * 8) = 0;
  (*(undefined8 **)(in_ECX + 0x54))[1] = **(undefined8 **)(in_ECX + 0x54);
  if (1 < *(int *)(in_ECX + 0x40)) {
    do {
      iVar3 = (iVar4 << ((byte)local_8 & 0x1f)) * 8;
      FUN_004c2c30(*(int *)(in_ECX + 0x54) + iVar3,*(int *)(in_ECX + 0x54),iVar3);
      local_8 = local_8 + 1;
      *(undefined8 *)(iVar3 + 8 + *(int *)(in_ECX + 0x54)) = 0;
    } while (local_8 < *(int *)(in_ECX + 0x40));
  }
  return;
}

