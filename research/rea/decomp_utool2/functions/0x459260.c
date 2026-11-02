// rea decompile_all
// name: FUN_00459260
// address: 0x459260
// body: available
// range: 0x459260-0x45932f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45932e to 0x459360 FUN_00459360 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00459372) */
/* WARNING: Removing unreachable block (ram,0x00459382) */
/* WARNING: Removing unreachable block (ram,0x00459385) */

void FUN_00459260(void)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int iVar5;
  undefined8 in_XMM1_Qa;
  uint uStack_54;
  uint local_44 [2];
  undefined8 local_3c;
  int *local_2c;
  int *local_28;
  char local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007006d2;
  local_10 = ExceptionList;
  uStack_54 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_20 = 0;
  local_3c = in_XMM1_Qa;
  FUN_00459b10();
  local_8 = 0;
  if (local_24 == '\0') {
    local_8 = 5;
    cVar2 = thunk_FUN_004c1d22();
    if (cVar2 == '\0') {
      FUN_0045bb80();
    }
    local_8 = CONCAT31(local_8._1_3_,6);
    piVar3 = *(int **)(*(int *)(*local_28 + 4) + 0x38 + (int)local_28);
    if ((piVar3 != (int *)0x0) && (pcVar1 = *(code **)(*piVar3 + 8), pcVar1 != guard_check_icall)) {
      (*pcVar1)();
    }
    ExceptionList = local_10;
    return;
  }
  FUN_0044e940();
  local_8._0_1_ = 1;
  piVar3 = (int *)FUN_0045d7b0();
  local_8._0_1_ = 2;
  if ((local_2c != (int *)0x0) &&
     (puVar4 = (undefined4 *)(**(code **)(*local_2c + 8))(), puVar4 != (undefined4 *)0x0)) {
    (**(code **)*puVar4)();
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar5 = *(int *)(*in_ECX + 4) + (int)in_ECX;
  local_44[0] = local_44[0] & 0xffffff00;
  local_1c = CONCAT31(local_1c._1_3_,*(undefined1 *)(iVar5 + 0x40));
  (**(code **)(*piVar3 + 0x14))
            (local_44,local_44[0],*(undefined4 *)(iVar5 + 0x38),iVar5,local_1c,local_3c);
  FUN_00459360();
  return;
}

