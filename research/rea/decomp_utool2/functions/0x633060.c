// rea decompile_all
// name: FUN_00633060
// address: 0x633060
// body: available
// range: 0x633060-0x63314e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00633060(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071e852;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = FUN_0044ec90(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  iVar4 = FUN_0044ec90();
  iVar1 = *in_ECX;
  iVar6 = 0;
  *param_1 = iVar1;
  piVar5 = (int *)(iVar1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  local_8 = 0;
  cVar2 = (char)param_4;
  while( true ) {
    if (cVar2 == '\0') {
      iVar6 = FUN_006325e0(iVar6,param_2);
    }
    else {
      iVar6 = FUN_006214e0(iVar6,param_2);
    }
    if (iVar6 < 0) break;
    piVar5 = (int *)FUN_00631550(&param_4,iVar6,uVar3,param_3);
    iVar1 = *param_1;
    *param_1 = *piVar5;
    *piVar5 = iVar1;
    piVar5 = (int *)(param_4 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    iVar6 = iVar6 + iVar4;
  }
  ExceptionList = local_10;
  return param_1;
}

