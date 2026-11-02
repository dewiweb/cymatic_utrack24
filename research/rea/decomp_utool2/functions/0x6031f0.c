// rea decompile_all
// name: FUN_006031f0
// address: 0x6031f0
// body: available
// range: 0x6031f0-0x60335e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006031f0(int *param_1,int param_2,longlong param_3,uint param_4,char param_5)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_14;
  
  uVar3 = 0;
  local_14 = param_3._4_4_;
  if ((param_3._4_4_ < 1) && (param_3 < 0)) {
    local_14 = param_4;
    iVar2 = -(param_3._4_4_ + (uint)((int)param_3 != 0));
    iVar4 = param_2;
    if ((iVar2 < (int)param_4 >> 0x1f) ||
       ((iVar2 <= (int)param_4 >> 0x1f && ((uint)-(int)param_3 <= param_4)))) {
      local_14 = -(int)param_3;
    }
    while (uVar3 = local_14, iVar4 = iVar4 + -1, -1 < iVar4) {
      if ((void *)param_1[iVar4] != (void *)0x0) {
        _memset((void *)param_1[iVar4],0,local_14 * 4);
      }
    }
    param_4 = param_4 - local_14;
    param_3._0_4_ = 0;
    local_14 = 0;
  }
  if (0 < (int)param_4) {
    iVar4 = in_ECX[8];
    if (param_2 < in_ECX[8]) {
      iVar4 = param_2;
    }
    cVar1 = (**(code **)(*in_ECX + 0xc))(param_1,iVar4,uVar3,(int)param_3,local_14);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar4 = in_ECX[8];
    if (iVar4 < param_2) {
      if (param_5 == '\0') {
        for (; iVar4 < param_2; iVar4 = iVar4 + 1) {
          if ((void *)param_1[iVar4] != (void *)0x0) {
            _memset((void *)param_1[iVar4],0,param_4 << 2);
          }
        }
      }
      else {
        iVar2 = *param_1;
        iVar5 = iVar4;
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 1) goto LAB_006032fc;
        } while (param_1[iVar5] == 0);
        iVar2 = param_1[iVar5];
LAB_006032fc:
        if ((iVar2 != 0) && (iVar5 = iVar2, iVar4 < param_2)) {
          do {
            if (param_1[iVar4] != 0) {
              FUN_004c2c30(param_1[iVar4],iVar2,param_4 << 2);
              iVar2 = iVar5;
              iVar5 = iVar2;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_2);
          return 1;
        }
      }
    }
  }
  return 1;
}

