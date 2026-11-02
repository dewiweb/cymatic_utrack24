// rea decompile_all
// name: FUN_006888e0
// address: 0x6888e0
// body: available
// range: 0x6888e0-0x688a42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006888e0(undefined4 param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  int *local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720ff8;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar6 = 0;
  local_11 = '\0';
  local_18 = in_ECX;
  if (0 < *(int *)(in_ECX + 0x30)) {
    do {
      piVar5 = *(int **)(*(int *)(local_18 + 0x28) + iVar6 * 4);
      local_1c = piVar5;
      cVar1 = FUN_0044daa0(param_1);
      if (cVar1 != '\0') {
        iVar4 = *piVar5;
        iVar3 = *(int *)(*(int *)(local_18 + 0x24) + 0x14) + -1;
        if (-1 < iVar3) {
          do {
            piVar5 = *(int **)(*(int *)(*(int *)(local_18 + 0x24) + 0xc) + iVar3 * 4);
            if (*piVar5 == iVar4) {
              if ((piVar5 != (int *)0x0) && ((*(byte *)(piVar5 + 7) & 4) == 0)) {
                local_3c = 0;
                local_38 = &DAT_00bfe12c;
                local_34 = &DAT_00bfe12c;
                local_30 = &DAT_00bfe12c;
                local_2c = 0;
                uStack_28 = 0;
                uStack_24 = 0;
                uStack_20 = 0;
                local_8 = 0;
                iVar4 = FUN_00689a20(iVar4,&local_3c);
                if (iVar4 != 0) {
                  if ((uStack_20 & 1) == 0) {
                    FUN_00688a50(*local_1c,param_1,1,0,param_2);
                    FUN_004915a0();
                    ExceptionList = local_10;
                    return 1;
                  }
                  local_11 = '\x01';
                }
                local_8 = 0xffffffff;
                FUN_004915a0();
              }
              break;
            }
            iVar3 = iVar3 + -1;
          } while (-1 < iVar3);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(local_18 + 0x30));
  }
  if ((param_2 != 0) && (local_11 != '\0')) {
    piVar5 = (int *)FUN_006e9580(uVar2);
    if (*(code **)(*piVar5 + 0x3c) == FUN_006d52e0) {
      MessageBeep(0);
    }
    else {
      (**(code **)(*piVar5 + 0x3c))();
    }
  }
  ExceptionList = local_10;
  return 0;
}

