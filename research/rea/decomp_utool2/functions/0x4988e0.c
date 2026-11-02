// rea decompile_all
// name: FUN_004988e0
// address: 0x4988e0
// body: available
// range: 0x4988e0-0x49895d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004988e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_24 [16];
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  iVar2 = *(int *)(in_ECX + 0xd4);
  uVar6 = *(undefined4 *)(in_ECX + 0xb4);
  iVar4 = *(int *)(in_ECX + 0xb8);
  uVar5 = *(undefined4 *)(in_ECX + 0xbc);
  local_8 = *(int *)(in_ECX + 0xc0);
  local_14 = uVar6;
  local_10 = iVar4;
  local_c = uVar5;
  if (iVar2 < 0) {
    puVar1 = (undefined4 *)FUN_00414ad0(local_24,iVar4 - iVar2);
    uVar6 = *puVar1;
    iVar4 = puVar1[1];
    uVar5 = puVar1[2];
    iVar3 = puVar1[3];
  }
  else {
    iVar3 = local_8;
    if ((0 < iVar2) && (iVar2 = (iVar2 - *(int *)(in_ECX + 0xd0)) + local_8, 0 < iVar2)) {
      iVar3 = local_8 - iVar2;
    }
  }
  FUN_006e9790(uVar6,iVar4,uVar5,iVar3);
  FUN_004989e0();
  return;
}

