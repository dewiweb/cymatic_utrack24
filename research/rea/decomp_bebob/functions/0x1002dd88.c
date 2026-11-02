// rea decompile_all
// name: FUN_1002dd88
// address: 0x1002dd88
// body: available
// range: 0x1002dd88-0x1002de55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_1002dd88(void)

{
  AFX_MODULE_STATE *pAVar1;
  CObject *pCVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  CObject *unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  
  if (*(CObject **)(unaff_EBP + -0x18) != unaff_EBX) {
    FUN_100085b9(*(void **)(unaff_EBP + -0x18));
  }
  FUN_10027192(unaff_ESI,unaff_EDI);
  pAVar1 = AfxGetModuleState();
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_1012f19c,*(CObject **)(pAVar1 + 4));
  if (((*(CObject **)(unaff_EBP + -0x1c) != unaff_EBX) && (pCVar2 != unaff_EBX)) &&
     (*(CObject **)(pCVar2 + 0xf0) != unaff_EBX)) {
    (**(code **)(*unaff_ESI + 0x428))();
  }
  uVar3 = LoadState(unaff_ESI,*(short **)(unaff_EBP + 8),*(int *)(unaff_EBP + 0xc),
                    *(int *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
  (**(code **)(*unaff_ESI + 0x208))();
  if (((CObject *)unaff_ESI[0x2b] != unaff_EBX) && ((CObject *)unaff_ESI[0x2c] != unaff_EBX)) {
    iVar5 = *unaff_ESI;
    uVar3 = (**(code **)(iVar5 + 0x160))();
    (**(code **)(iVar5 + 0x25c))(unaff_EBP + -0x2c,1,uVar3);
    iVar4 = (**(code **)(*unaff_ESI + 0x160))();
    iVar5 = *(int *)(unaff_EBP + -0x28);
    if (iVar4 == 0) {
      iVar5 = *(int *)(unaff_EBP + -0x2c);
    }
    CDockSite::ResizeRow((CDockSite *)unaff_ESI[0x2b],(CDockingPanesRow *)unaff_ESI[0x2c],iVar5,1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(CObject **)(unaff_EBP + -0x34) != unaff_EBX) {
    (**(code **)(*(int *)*(CObject **)(unaff_EBP + -0x34) + 4))(1);
  }
  uVar3 = *(undefined4 *)(unaff_EBP + -0x1c);
  FUN_10001030((undefined4 *)(*(int *)(unaff_EBP + -0x14) + -0x10));
  FUN_10001030((undefined4 *)(*(int *)(unaff_EBP + -0x20) + -0x10));
  return uVar3;
}

