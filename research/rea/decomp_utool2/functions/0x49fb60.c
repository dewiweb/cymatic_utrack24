// rea decompile_all
// name: FUN_0049fb60
// address: 0x49fb60
// body: available
// range: 0x49fb60-0x49fce6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049fb60(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  undefined4 extraout_ECX;
  int iVar5;
  int iVar6;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007030c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(*(int *)(in_ECX + 0xb8) + 0xc0) != '\0') {
    uVar2 = FUN_00637250(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    FUN_006d13b0(0xf836743,uVar2,param_2 != 0,0);
    local_8 = 0xffffffff;
    piVar3 = param_1 + -2;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    uVar2 = FUN_00637250();
    local_8 = 1;
    iVar5 = 0;
    iVar1 = *(int *)(*(int *)(in_ECX + 0xb8) + 0xb4);
    iVar4 = *(int *)(iVar1 + 0x80) + -1;
    if (-1 < iVar4) {
      iVar6 = iVar5;
      do {
        iVar5 = iVar6 + 1;
        if ((*(byte *)(*(int *)(*(int *)(iVar1 + 0x78) + iVar4 * 4) + 8) & 1) == 0) {
          iVar5 = iVar6;
        }
        iVar4 = iVar4 + -1;
        iVar6 = iVar5;
      } while (-1 < iVar4);
    }
    FUN_006d13b0(0xf836744,uVar2,0 < iVar5,0);
    local_8 = 0xffffffff;
    piVar3 = (int *)(local_18 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    if ((0 < param_1[2]) && (*(char *)(*(int *)(*param_1 + -4 + param_1[2] * 4) + 0x26) == '\0')) {
      FUN_006a0850();
      local_8 = 2;
      FUN_006a06e0(extraout_ECX);
      local_8 = 0xffffffff;
      FUN_004abe20();
    }
  }
  FUN_006989a0(param_1,param_2);
  ExceptionList = local_10;
  return;
}

