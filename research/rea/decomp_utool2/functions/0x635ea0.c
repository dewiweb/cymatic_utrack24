// rea decompile_all
// name: FUN_00635ea0
// address: 0x635ea0
// body: available
// range: 0x635ea0-0x635fdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00635ea0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_ECX;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ec31;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar7 = 0;
  local_14 = 0;
  FUN_006286b0(in_ECX,param_3,param_4,param_2);
  local_8 = 0;
  cVar3 = FUN_00628120(0,0,0,0,0,0);
  while (cVar3 != '\0') {
    if ((local_1c == 0) || (*(char *)(local_1c + 0x25) == '\0')) {
      piVar5 = &local_18;
    }
    else {
      piVar5 = (int *)FUN_00628100(uVar4);
    }
    iVar2 = param_1[2];
    iVar6 = iVar2 + 1;
    if (param_1[1] < iVar6) {
      if (iVar6 < 0) {
        iVar6 = iVar2 + 2;
      }
      uVar8 = iVar2 + 9 + (iVar6 >> 1) & 0xfffffff8;
      iVar7 = local_14;
      if (param_1[1] != uVar8) {
        if ((int)uVar8 < 1) {
          FID_conflict__free((void *)*param_1);
          *param_1 = 0;
        }
        else if (*param_1 == 0) {
          iVar7 = FUN_004c554b();
          *param_1 = iVar7;
        }
        else {
          iVar7 = FUN_004c553b(*param_1,uVar8 * 4);
          *param_1 = iVar7;
        }
        param_1[1] = uVar8;
        iVar7 = local_14;
      }
    }
    iVar2 = param_1[2];
    param_1[2] = iVar2 + 1;
    piVar1 = (int *)(*param_1 + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar5;
      *piVar1 = iVar2;
      piVar5 = (int *)(iVar2 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
    }
    iVar7 = iVar7 + 1;
    local_14 = iVar7;
    cVar3 = FUN_00628120(0,0,0,0,0,0);
  }
  FUN_006285d0();
  ExceptionList = local_10;
  return iVar7;
}

