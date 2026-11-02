// rea decompile_all
// name: FUN_005b6820
// address: 0x5b6820
// body: available
// range: 0x5b6820-0x5b691e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005b6820(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int in_EDX;
  int iVar6;
  
  iVar6 = 0;
  if (0 < param_3) {
    iVar4 = *param_1;
    do {
      if (iVar4 == **(int **)(in_EDX + iVar6 * 4)) {
LAB_005b6915:
        return iVar6 + 1;
      }
      while( true ) {
        iVar1 = FUN_00443260();
        iVar2 = FUN_00443260();
        if ((iVar1 - iVar2 != 0) && ((iVar1 - iVar2 >> 0x1f & 0xfffffffeU) != 0xffffffff)) break;
        if (iVar1 == 0) {
          return iVar6 + 1;
        }
      }
      iVar2 = iVar6 + param_3 >> 1;
      iVar1 = **(int **)(in_EDX + iVar2 * 4);
      if (iVar2 == iVar6) {
        if ((iVar4 != iVar1) && (iVar4 = FUN_00448730(*param_1), iVar4 < 0)) {
          return iVar6;
        }
        goto LAB_005b6915;
      }
      if (iVar4 != iVar1) {
        do {
          iVar1 = FUN_00443260();
          iVar3 = FUN_00443260();
          if ((iVar1 - iVar3 != 0) &&
             (uVar5 = iVar1 - iVar3 >> 0x1f & 0xfffffffe, uVar5 != 0xffffffff)) {
            if ((int)(uVar5 + 1) < 0) goto LAB_005b68d4;
            break;
          }
        } while (iVar1 != 0);
      }
      iVar6 = iVar2;
      iVar2 = param_3;
LAB_005b68d4:
      param_3 = iVar2;
    } while (iVar6 < param_3);
  }
  return iVar6;
}

