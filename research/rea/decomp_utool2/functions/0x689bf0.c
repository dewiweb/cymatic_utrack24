// rea decompile_all
// name: FUN_00689bf0
// address: 0x689bf0
// body: available
// range: 0x689bf0-0x689cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00689bf0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0xc) + iVar5 * 4);
      if (puVar2[3] != *param_2) {
        do {
          iVar3 = FUN_00443260();
          iVar4 = FUN_00443260();
          if ((iVar3 - iVar4 != 0) && ((iVar3 - iVar4 >> 0x1f & 0xfffffffeU) != 0xffffffff))
          goto LAB_00689ce4;
        } while (iVar3 != 0);
      }
      iVar3 = param_1[2];
      iVar4 = iVar3 + 1;
      if (param_1[1] < iVar4) {
        if (iVar4 < 0) {
          iVar4 = iVar3 + 2;
        }
        uVar6 = iVar3 + 9 + (iVar4 >> 1) & 0xfffffff8;
        if (param_1[1] != uVar6) {
          if ((int)uVar6 < 1) {
            FID_conflict__free((void *)*param_1);
            *param_1 = 0;
          }
          else if (*param_1 == 0) {
            iVar3 = FUN_004c554b();
            *param_1 = iVar3;
          }
          else {
            iVar3 = FUN_004c553b(*param_1,uVar6 * 4);
            *param_1 = iVar3;
          }
          param_1[1] = uVar6;
        }
      }
      iVar3 = param_1[2];
      param_1[2] = iVar3 + 1;
      puVar1 = (undefined4 *)(*param_1 + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *puVar2;
      }
LAB_00689ce4:
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x14));
  }
  return param_1;
}

