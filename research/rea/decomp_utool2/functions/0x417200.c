// rea decompile_all
// name: FUN_00417200
// address: 0x417200
// body: available
// range: 0x417200-0x4172ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00417200(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  undefined4 local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = in_EDX - in_ECX >> 2;
  if ((1 < (int)local_10) && (iVar4 = (int)(local_10 - (in_EDX - in_ECX >> 0x1f)) >> 1, 0 < iVar4))
  {
    local_14 = local_10 - 1;
    local_c = local_14 / 2;
    do {
      uVar3 = *(undefined4 *)(in_ECX + -4 + iVar4 * 4);
      iVar5 = iVar4 + -1;
      iVar4 = iVar5;
      local_18 = uVar3;
      local_8 = iVar5;
      if (iVar5 < local_c) {
        do {
          iVar2 = *(int *)(in_ECX + 8 + iVar4 * 8);
          iVar5 = iVar4 * 2 + 2;
          iVar1 = *(int *)(in_ECX + -4 + iVar5 * 4);
          if (iVar1 != 0) {
            LOCK();
            *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
            UNLOCK();
          }
          if (iVar2 != 0) {
            LOCK();
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
            UNLOCK();
          }
          iVar2 = FUN_00416bc0(iVar2,iVar1);
          if (iVar2 < 0) {
            iVar5 = iVar4 * 2 + 1;
          }
          *(undefined4 *)(in_ECX + iVar4 * 4) = *(undefined4 *)(in_ECX + iVar5 * 4);
          uVar3 = extraout_ECX;
          iVar4 = iVar5;
        } while (iVar5 < local_c);
      }
      iVar4 = local_8;
      if ((iVar5 == local_c) && ((local_10 & 1) == 0)) {
        *(undefined4 *)(in_ECX + iVar5 * 4) = *(undefined4 *)(in_ECX + -4 + local_10 * 4);
      }
      FUN_00417510(local_8,&local_18,uVar3);
    } while (0 < iVar4);
  }
  return;
}

