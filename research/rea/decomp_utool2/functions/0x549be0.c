// rea decompile_all
// name: FUN_00549be0
// address: 0x549be0
// body: available
// range: 0x549be0-0x549d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00549be0(int param_1)

{
  int *_Memory;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  DWORD DVar7;
  int in_ECX;
  bool bVar8;
  int local_14;
  uint local_8;
  
  local_8 = 0;
  if (0 < *(int *)(in_ECX + 0x20)) {
    bVar8 = *(int *)(in_ECX + 0x20) != 0;
    do {
      if (bVar8) {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x18) + local_8 * 4);
      }
      else {
        iVar2 = 0;
      }
      iVar2 = *(int *)(iVar2 + 8);
      FUN_005bdf30();
      do {
        iVar3 = FUN_00443260();
        iVar4 = FUN_00443260();
        if ((iVar3 - iVar4 != 0) && (iVar4 = (iVar3 - iVar4 >> 0x1f & 0xfffffffeU) + 1, iVar4 != 0))
        goto LAB_00549c4e;
      } while (iVar3 != 0);
      iVar4 = 0;
LAB_00549c4e:
      _Memory = (int *)(local_14 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar3 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      if (iVar4 == 0) {
        return 0;
      }
      if (param_1 != 5) {
        iVar3 = *(int *)(iVar2 + 0x28);
        iVar4 = FUN_005bd4e0();
        iVar4 = iVar4 * *(int *)(iVar2 + 0x24);
        iVar5 = FUN_0053e9b0();
        if (iVar4 <= iVar5) {
          return 0;
        }
        if (iVar4 < *(int *)(iVar2 + 0x5c)) {
          return 0;
        }
        switch(param_1) {
        case 1:
        case 2:
        case 4:
          if ((iVar3 != 1) && (iVar3 != 2)) {
            return 0;
          }
          break;
        case 3:
          break;
        default:
          goto switchD_00549cad_default;
        }
      }
      if (**(char **)(iVar2 + 0x70) == '\0') {
switchD_00549cad_default:
        return 0;
      }
      puVar6 = (undefined4 *)FUN_00458890();
      DVar7 = GetFileAttributesW((LPCWSTR)*puVar6);
      if ((DVar7 & 0x10) != 0) {
        return 0;
      }
      cVar1 = FUN_0053f750();
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = FUN_0053b610();
      if (cVar1 == '\0') {
        return 0;
      }
      local_8 = local_8 + 1;
      bVar8 = local_8 < *(uint *)(in_ECX + 0x20);
    } while ((int)local_8 < (int)*(uint *)(in_ECX + 0x20));
  }
  return 1;
}

