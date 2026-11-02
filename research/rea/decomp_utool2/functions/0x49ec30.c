// rea decompile_all
// name: FUN_0049ec30
// address: 0x49ec30
// body: available
// range: 0x49ec30-0x49edbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049ec30(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int iStack_44;
  int iStack_40;
  undefined1 *puStack_3c;
  int iStack_38;
  undefined1 local_28 [16];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = *(int *)(in_ECX + 0x108);
  local_14 = *(int *)(in_ECX + 0x10c);
  iVar1 = *(int *)(in_ECX + 0x110);
  if ((*(int *)(in_ECX + 0x11c) == 1) || (*(int *)(in_ECX + 0x11c) == 2)) {
    local_18 = local_18 + 2;
    local_10 = 0;
    if (0 < iVar1 + -4) {
      local_10 = iVar1 + -4;
    }
    iVar2 = *(int *)(in_ECX + 0x114);
  }
  else {
    local_14 = local_14 + 2;
    iVar2 = *(int *)(in_ECX + 0x114) + -4;
    local_10 = 0;
    if (0 < iVar1) {
      local_10 = iVar1;
    }
  }
  local_c = 0;
  if (0 < iVar2) {
    local_c = iVar2;
  }
  *(bool *)(in_ECX + 0x138) = local_c < local_10;
  if (local_c < local_10) {
    iStack_38 = local_10 / 2;
    puStack_3c = local_28;
    iStack_40 = 0x49ecc7;
    piVar3 = (int *)FUN_0040dd10();
    iStack_38 = piVar3[3];
    puStack_3c = (undefined1 *)piVar3[2];
    iStack_40 = piVar3[1];
    iStack_44 = *piVar3;
    FUN_006e9790();
    if (*(int *)(*(int *)(in_ECX + 0x148) + 0xb8) != 2) {
      *(undefined4 *)(*(int *)(in_ECX + 0x148) + 0xb8) = 2;
      FUN_006e6400(&iStack_44);
      FUN_006ce9f0(1);
    }
    if (*(int *)(*(int *)(in_ECX + 0x144) + 0xb8) == 1) goto LAB_0049eda2;
    *(undefined4 *)(*(int *)(in_ECX + 0x144) + 0xb8) = 1;
  }
  else {
    iStack_38 = local_c / 2;
    puStack_3c = local_28;
    iStack_40 = 0x49ed36;
    piVar3 = (int *)FUN_00418d70();
    iStack_38 = piVar3[3];
    puStack_3c = (undefined1 *)piVar3[2];
    iStack_40 = piVar3[1];
    iStack_44 = *piVar3;
    FUN_006e9790();
    if (*(int *)(*(int *)(in_ECX + 0x148) + 0xb8) != 4) {
      *(undefined4 *)(*(int *)(in_ECX + 0x148) + 0xb8) = 4;
      FUN_006e6400(&iStack_44);
      FUN_006ce9f0(1);
    }
    if (*(int *)(*(int *)(in_ECX + 0x144) + 0xb8) == 8) goto LAB_0049eda2;
    *(undefined4 *)(*(int *)(in_ECX + 0x144) + 0xb8) = 8;
  }
  FUN_006e6400(&iStack_44);
  FUN_006ce9f0(1);
LAB_0049eda2:
  iStack_38 = local_c;
  puStack_3c = (undefined1 *)local_10;
  iStack_40 = local_14;
  iStack_44 = local_18;
  FUN_006e9790();
  return;
}

