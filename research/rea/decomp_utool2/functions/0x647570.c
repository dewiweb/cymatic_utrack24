// rea decompile_all
// name: FUN_00647570
// address: 0x647570
// body: available
// range: 0x647570-0x647836 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64782b to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x647832 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00647570(undefined4 param_1,undefined4 param_2,int param_3,int param_4,char *param_5,
                 int *param_6)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *local_7c;
  char *local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined1 local_64 [80];
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_68 = param_4;
  if (3 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  iVar5 = FUN_00648ed0(local_64);
  if (iVar5 != 0) {
    iVar8 = iVar5 + 1;
    pcVar6 = param_5;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    pcVar6 = pcVar6 + ((uint)(local_68 != 0) - (int)(param_5 + 1));
    local_74 = pcVar6 + iVar5 + 0xb;
    if (in_ECX == 0) {
      local_7c = (undefined4 *)0x0;
    }
    else if ((local_68 * 4 == 0) ||
            (local_7c = (undefined4 *)FUN_004c554b(local_68 * 4), local_7c == (undefined4 *)0x0))
    goto LAB_00647830;
    local_70 = 0;
    if (0 < local_68) {
      puVar9 = local_7c;
      do {
        pcVar7 = *(char **)(((int)param_6 - (int)local_7c) + (int)puVar9);
        pcVar1 = pcVar7 + 1;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        *puVar9 = pcVar7 + ((uint)(local_70 != local_68 + -1) - (int)pcVar1);
        local_74 = local_74 + (int)(pcVar7 + ((uint)(local_70 != local_68 + -1) - (int)pcVar1));
        puVar9 = puVar9 + 1;
        local_70 = local_70 + 1;
      } while (local_70 < local_68);
    }
    FUN_00649770(local_74);
    if ((in_ECX != 0) && (iVar8 != 0)) {
      if (*(code **)(in_ECX + 0xc) == (code *)0x0) goto LAB_00647830;
      (**(code **)(in_ECX + 0xc))(in_ECX,local_64,iVar8);
      FUN_006598a0(iVar8);
    }
    local_14 = (undefined1)((uint)param_1 >> 0x18);
    local_13 = (undefined1)((uint)param_1 >> 0x10);
    local_12 = (undefined1)((uint)param_1 >> 8);
    local_11 = (undefined1)param_1;
    local_10 = (undefined1)((uint)param_2 >> 0x18);
    local_f = (undefined1)((uint)param_2 >> 0x10);
    local_e = (undefined1)((uint)param_2 >> 8);
    local_c = (undefined1)param_3;
    local_d = (undefined1)param_2;
    local_b = (undefined1)local_68;
    if (in_ECX != 0) {
      if (*(code **)(in_ECX + 0xc) == (code *)0x0) goto LAB_00647830;
      (**(code **)(in_ECX + 0xc))(in_ECX,&local_14,10);
      FUN_006598a0(10);
      if ((param_5 != (char *)0x0) && (pcVar6 != (char *)0x0)) {
        if (*(code **)(in_ECX + 0xc) == (code *)0x0) goto LAB_00647830;
        (**(code **)(in_ECX + 0xc))(in_ECX,param_5,pcVar6);
        FUN_006598a0(pcVar6);
      }
    }
    local_6c = 0;
    if (0 < local_68) {
      iVar8 = (int)local_7c - (int)param_6;
      iVar5 = local_68;
      do {
        iVar3 = *(int *)(iVar8 + (int)param_6);
        if (((in_ECX != 0) && (*param_6 != 0)) && (iVar3 != 0)) {
          if (*(code **)(in_ECX + 0xc) == (code *)0x0) goto LAB_00647830;
          (**(code **)(in_ECX + 0xc))(in_ECX,*param_6,iVar3);
          FUN_006598a0(iVar3);
          iVar5 = local_68;
        }
        local_6c = local_6c + 1;
        param_6 = param_6 + 1;
      } while (local_6c < iVar5);
    }
    if (in_ECX != 0) {
      if (local_7c != (undefined4 *)0x0) {
        FID_conflict__free(local_7c);
      }
      uVar4 = *(undefined4 *)(in_ECX + 0xf4);
      *(undefined4 *)(in_ECX + 0x26c) = 0x82;
      local_68 = CONCAT13((char)uVar4,
                          CONCAT12((char)((uint)uVar4 >> 8),
                                   CONCAT11((char)((uint)uVar4 >> 0x10),(char)((uint)uVar4 >> 0x18))
                                  ));
      if (*(code **)(in_ECX + 0xc) == (code *)0x0) goto LAB_00647830;
      (**(code **)(in_ECX + 0xc))(in_ECX,&local_68,4);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00647830:
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

