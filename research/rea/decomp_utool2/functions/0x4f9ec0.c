// rea decompile_all
// name: FUN_004f9ec0
// address: 0x4f9ec0
// body: available
// range: 0x4f9ec0-0x4f9f69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f9ec0(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_c;
  int local_8;
  
  uVar1 = *(uint *)(in_ECX + 0x78);
  if (uVar1 != 0) {
    iVar4 = 0;
    iVar5 = 0;
    uVar3 = 0;
    if (0 < (int)uVar1) {
      bVar6 = uVar1 != 0;
      do {
        if (bVar6) {
          iVar2 = *(int *)(*(int *)(in_ECX + 0x70) + uVar3 * 4);
        }
        else {
          iVar2 = 0;
        }
        if (*(int *)(iVar2 + 0x70) < 0) {
          iVar5 = iVar5 + 1;
        }
        else {
          iVar4 = iVar4 + *(int *)(iVar2 + 0x70);
        }
        uVar3 = uVar3 + 1;
        bVar6 = uVar3 < uVar1;
      } while ((int)uVar3 < (int)uVar1);
    }
    local_c = 0;
    if (iVar5 != 0) {
      local_c = (*(int *)(in_ECX + 0x1c) - iVar4) / iVar5;
    }
    uVar3 = 0;
    local_8 = 0;
    if (0 < (int)uVar1) {
      bVar6 = *(int *)(in_ECX + 0x78) != 0;
      do {
        if (bVar6) {
          iVar4 = *(int *)(*(int *)(in_ECX + 0x70) + uVar3 * 4);
        }
        else {
          iVar4 = 0;
        }
        iVar5 = *(int *)(iVar4 + 0x70);
        if (*(int *)(iVar4 + 0x70) < 0) {
          iVar5 = local_c;
        }
        FUN_006e9790(0,local_8,*(undefined4 *)(in_ECX + 0x18),iVar5);
        uVar3 = uVar3 + 1;
        local_8 = local_8 + iVar5;
        bVar6 = uVar3 < *(uint *)(in_ECX + 0x78);
      } while ((int)uVar3 < (int)*(uint *)(in_ECX + 0x78));
    }
  }
  return;
}

