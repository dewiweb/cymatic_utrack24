// rea decompile_all
// name: FUN_00538760
// address: 0x538760
// body: available
// range: 0x538760-0x53886b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00538760(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 auStack_44 [8];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *local_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070da8b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_34 = &param_1;
  uStack_38 = 0x538796;
  FUN_004110e0();
  puVar2 = param_1;
  local_8 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if ((char)param_5 != '\0') {
      local_34 = (undefined4 *)0x5387c2;
      FUN_00684a80();
    }
    local_34 = (undefined4 *)0x5387da;
    FUN_00684c50();
    local_34 = (undefined4 *)0x5387e5;
    FUN_0040eb90();
    local_34 = (undefined4 *)(param_3 + -0x2c);
    local_8 = CONCAT31(local_8._1_3_,1);
    uStack_38 = 0;
    uStack_3c = 0x538802;
    FUN_00472d90();
    local_34 = (undefined4 *)0x21;
    FUN_0040e4d0(auStack_44);
    FUN_006830c0(&param_5);
    piVar3 = (int *)(param_5 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_34 = (undefined4 *)0x538846;
        FID_conflict__free(piVar3);
      }
    }
    LOCK();
    piVar3 = puVar2 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      local_34 = (undefined4 *)0x538859;
      (**(code **)*puVar2)();
    }
  }
  ExceptionList = local_10;
  return;
}

