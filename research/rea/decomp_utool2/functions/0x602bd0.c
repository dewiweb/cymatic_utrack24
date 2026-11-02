// rea decompile_all
// name: FUN_00602bd0
// address: 0x602bd0
// body: available
// range: 0x602bd0-0x602d38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00602bd0(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int *in_EDX;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_1c;
  
  iVar3 = 0;
  if (0 < param_6) {
    do {
      *(undefined1 *)(param_1 + 0x94) = 0;
      in_EDX[iVar3] = *(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4) + param_2 * 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_6);
  }
  in_EDX[param_6] = 0;
  uVar4 = param_3;
  if ((param_5 < 1) && (param_5 < 0)) {
    local_1c = param_3;
    iVar2 = -(param_5 + (uint)(param_4 != 0));
    iVar3 = param_6;
    if ((iVar2 < (int)param_3 >> 0x1f) ||
       ((iVar2 <= (int)param_3 >> 0x1f && ((uint)-param_4 <= param_3)))) {
      local_1c = -param_4;
    }
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      if ((void *)in_EDX[iVar3] != (void *)0x0) {
        _memset((void *)in_EDX[iVar3],0,local_1c * 4);
      }
    }
    uVar4 = param_3 - local_1c;
  }
  if (((0 < (int)uVar4) && (cVar1 = (**(code **)(*in_ECX + 0xc))(), cVar1 != '\0')) &&
     (iVar3 = in_ECX[8], iVar3 < param_6)) {
    iVar2 = *in_EDX;
    iVar5 = iVar3;
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 < 1) goto LAB_00602d09;
    } while (in_EDX[iVar5] == 0);
    iVar2 = in_EDX[iVar5];
LAB_00602d09:
    iVar5 = iVar2;
    if (iVar2 != 0) {
      for (; iVar3 < param_6; iVar3 = iVar3 + 1) {
        if (in_EDX[iVar3] != 0) {
          FUN_004c2c30(in_EDX[iVar3],iVar2,param_3 << 2);
          iVar2 = iVar5;
          iVar5 = iVar2;
        }
      }
    }
  }
  return;
}

