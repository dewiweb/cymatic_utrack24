// rea decompile_all
// name: FUN_10006a60
// address: 0x10006a60
// body: available
// range: 0x10006a60-0x10006b01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10006aa2 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_10006a60(LPCSTR param_1,ushort *param_2)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  undefined **ppuVar4;
  ushort *puVar5;
  int iVar6;
  ushort *puVar7;
  bool bVar8;
  
  puVar7 = param_2;
  if ((*(int **)(*(int *)param_2 + -0x10) == (int *)0x0) ||
     (piVar3 = (int *)(**(code **)(**(int **)(*(int *)param_2 + -0x10) + 0x10))(),
     piVar3 == (int *)0x0)) {
    ppuVar4 = FUN_1000ad47();
    piVar3 = (int *)(**(code **)(*ppuVar4 + 0x10))();
  }
  FUN_100067d0(&param_2,param_1,piVar3);
  puVar7 = *(ushort **)puVar7;
  puVar5 = param_2;
  if (puVar7 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10001000((undefined4 *)0x80004005);
  }
  do {
    uVar2 = *puVar5;
    bVar8 = uVar2 < *puVar7;
    if (uVar2 != *puVar7) {
LAB_10006ad6:
      iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10006adb;
    }
    if (uVar2 == 0) break;
    uVar2 = puVar5[1];
    bVar8 = uVar2 < puVar7[1];
    if (uVar2 != puVar7[1]) goto LAB_10006ad6;
    puVar7 = puVar7 + 2;
    puVar5 = puVar5 + 2;
  } while (uVar2 != 0);
  iVar6 = 0;
LAB_10006adb:
  puVar7 = param_2 + -2;
  LOCK();
  iVar1 = *(int *)puVar7;
  *(int *)puVar7 = *(int *)puVar7 + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    (**(code **)(**(int **)(param_2 + -8) + 4))(param_2 + -8);
  }
  return iVar6 == 0;
}

