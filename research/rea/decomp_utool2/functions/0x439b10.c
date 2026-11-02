// rea decompile_all
// name: FUN_00439b10
// address: 0x439b10
// body: available
// range: 0x439b10-0x439d1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00439b10(int param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_18;
  uint local_14;
  
  if (*(char *)(in_ECX + 0xf4) == '\0') {
    return 0;
  }
  if ((int)param_6 < 1) {
    return 1;
  }
  local_18 = param_5;
  local_14 = param_4;
  do {
    uVar4 = *(uint *)(in_ECX + 0xec);
    iVar2 = (int)uVar4 >> 0x1f;
    uVar1 = uVar4;
    if ((param_5 < iVar2) || ((param_5 <= iVar2 && (param_4 < uVar4)))) {
LAB_00439c27:
      iVar3 = (int)*(uint *)(in_ECX + 0x18) >> 0x1f;
      if ((param_5 < iVar3) || ((param_5 <= iVar3 && (param_4 < *(uint *)(in_ECX + 0x18))))) {
        if ((iVar2 <= param_5) && ((iVar2 < param_5 || (uVar4 <= param_4)))) {
          iVar2 = *(int *)(in_ECX + 0xf0);
          if (iVar2 < 0x1ff) {
            iVar2 = 0x1ff;
          }
          iVar3 = (int)(iVar2 + uVar1) >> 0x1f;
          if ((param_5 <= iVar3) && ((param_5 < iVar3 || (param_4 <= iVar2 + uVar1)))) {
            *(uint *)(in_ECX + 0xec) = *(int *)(in_ECX + 0xf0) + uVar1;
            *(undefined4 *)(in_ECX + 0xf0) = 0;
            FUN_005f6ab0();
            param_4 = local_14;
            goto LAB_00439cc0;
          }
        }
        *(undefined4 *)(in_ECX + 0xf0) = 0;
        *(uint *)(in_ECX + 0xec) = param_4 & 0xfffffe00;
        FUN_005f68d0(param_4 & 0xfffffe00,(int)param_4 >> 0x1f);
        param_4 = local_14;
      }
      else {
        *(undefined4 *)(in_ECX + 0xf0) = 0;
      }
LAB_00439cc0:
      if (*(int *)(in_ECX + 0xf0) == 0) {
        if ((int)param_6 < 1) {
          return 1;
        }
        while (param_2 = param_2 + -1, -1 < param_2) {
          iVar2 = *(int *)(param_1 + param_2 * 4);
          if (iVar2 != 0) {
            _memset((void *)(iVar2 + param_3 * 4),0,param_6 << 2);
          }
        }
        return 1;
      }
    }
    else {
      uVar1 = *(int *)(in_ECX + 0xf0) + uVar4;
      iVar3 = (int)uVar1 >> 0x1f;
      if ((iVar3 < local_18) || ((iVar3 <= local_18 && (uVar1 <= param_4)))) {
        uVar1 = *(uint *)(in_ECX + 0xec);
        param_5 = local_18;
        goto LAB_00439c27;
      }
      uVar4 = uVar1 - param_4;
      iVar2 = (iVar3 - local_18) - (uint)(uVar1 < param_4);
      if (((int)param_6 >> 0x1f < iVar2) || (((int)param_6 >> 0x1f <= iVar2 && (param_6 <= uVar4))))
      {
        uVar4 = param_6;
      }
      iVar2 = param_2;
      if (*(int *)(in_ECX + 0x54) < param_2) {
        iVar2 = *(int *)(in_ECX + 0x54);
      }
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        iVar3 = *(int *)(param_1 + iVar2 * 4);
        if (iVar3 != 0) {
          FUN_004c2c30(iVar3 + param_3 * 4,
                       *(int *)(*(int *)(in_ECX + 0x60) + iVar2 * 4) +
                       (param_4 - *(int *)(in_ECX + 0xec)) * 4,uVar4 * 4);
          param_4 = local_14;
        }
      }
      param_3 = param_3 + uVar4;
      bVar5 = CARRY4(param_4,uVar4);
      param_4 = param_4 + uVar4;
      param_5 = local_18 + ((int)uVar4 >> 0x1f) + (uint)bVar5;
      param_6 = param_6 - uVar4;
      local_18 = param_5;
      local_14 = param_4;
    }
    if ((int)param_6 < 1) {
      return 1;
    }
  } while( true );
}

