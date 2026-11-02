// rea decompile_all
// name: FUN_00636260
// address: 0x636260
// body: available
// range: 0x636260-0x6363bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00636260(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int *in_ECX;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_0071ec88;
  local_10 = ExceptionList;
  iVar2 = in_ECX[2];
  if (iVar2 < 1) {
    *param_1 = (int)&DAT_00bfe12c;
    return;
  }
  if (iVar2 == 1) {
    iVar2 = *(int *)*in_ECX;
    *param_1 = iVar2;
    piVar6 = (int *)(iVar2 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
      return;
    }
  }
  else {
    pcVar7 = param_2;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    puVar8 = (undefined4 *)*in_ECX;
    local_8 = iVar2;
    do {
      pcVar4 = (char *)*puVar8;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      puVar8 = puVar8 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    ExceptionList = &local_10;
    FUN_00455850(&DAT_00bfe12c,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    iVar9 = 0;
    pcVar4 = local_14;
    while( true ) {
      pcVar3 = *(char **)(*in_ECX + iVar9 * 4);
      pcVar5 = pcVar4;
      if ((*pcVar3 != '\0') && (cVar1 = *pcVar3, *pcVar4 = cVar1, cVar1 != '\0')) {
        do {
          cVar1 = pcVar5[(int)(pcVar3 + (1 - (int)pcVar4))];
          pcVar5 = pcVar5 + 1;
          *pcVar5 = cVar1;
        } while (cVar1 != '\0');
      }
      iVar9 = iVar9 + 1;
      if (iVar2 <= iVar9) break;
      pcVar4 = pcVar5;
      if ((pcVar7 != param_2 + 1) && (cVar1 = *param_2, *pcVar5 = cVar1, cVar1 != '\0')) {
        do {
          cVar1 = pcVar4[(int)(param_2 + (1 - (int)pcVar5))];
          pcVar4 = pcVar4 + 1;
          *pcVar4 = cVar1;
        } while (cVar1 != '\0');
      }
    }
    *pcVar5 = '\0';
    *param_1 = (int)local_14;
  }
  ExceptionList = local_10;
  return;
}

