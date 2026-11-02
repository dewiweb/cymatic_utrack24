// rea decompile_all
// name: FUN_00531e60
// address: 0x531e60
// body: available
// range: 0x531e60-0x531f66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00531e60(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar4 = 0;
  local_c = 0;
  if (0 < *(int *)(in_ECX + 0x4bc)) {
    bVar5 = *(int *)(in_ECX + 0x4bc) != 0;
    do {
      if (bVar5) {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x4b4) + uVar4 * 4);
      }
      else {
        iVar2 = 0;
      }
      uVar4 = uVar4 + 1;
      *(undefined1 *)(iVar2 + 0x38) = 0;
      bVar5 = uVar4 < *(uint *)(in_ECX + 0x4bc);
    } while ((int)uVar4 < (int)*(uint *)(in_ECX + 0x4bc));
  }
  local_8 = 0;
  iVar1 = FUN_004ae6c0();
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      uVar4 = FUN_004ae6c0();
      if (local_8 < uVar4) {
        iVar2 = 0;
        if (0 < *(int *)(in_ECX + 0x224)) {
          uVar4 = local_8;
          do {
            iVar1 = *(int *)(*(int *)(in_ECX + 0x21c) + iVar2 * 4);
            iVar3 = *(int *)(*(int *)(in_ECX + 0x21c) + 4 + iVar2 * 4) - iVar1;
            if ((int)uVar4 < iVar3) {
              uVar4 = iVar1 + uVar4;
              goto LAB_00531f0b;
            }
            uVar4 = uVar4 - iVar3;
            iVar2 = iVar2 + 2;
          } while (iVar2 < *(int *)(in_ECX + 0x224));
        }
        uVar4 = 0;
      }
      else {
        uVar4 = 0xffffffff;
      }
LAB_00531f0b:
      if (uVar4 < *(uint *)(in_ECX + 0x4bc)) {
        local_c = local_c + 1;
        *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0x4b4) + uVar4 * 4) + 0x38) = 1;
      }
      local_8 = local_8 + 1;
      iVar1 = FUN_004ae6c0();
      iVar2 = local_c;
    } while ((int)local_8 < iVar1);
  }
  iVar1 = FUN_004ae6c0();
  FUN_004f8300(0 < iVar1);
  return iVar2;
}

