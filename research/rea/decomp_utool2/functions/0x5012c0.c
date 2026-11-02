// rea decompile_all
// name: FUN_005012c0
// address: 0x5012c0
// body: available
// range: 0x5012c0-0x50151b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005012c0(char *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int in_ECX;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  undefined1 auStack_74 [8];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00707420;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00684c50();
  FUN_0057f480();
  local_8 = 0;
  if (*(char *)(puVar2 + 2) != '\0') {
    *(undefined1 *)(puVar2 + 2) = 0;
    (**(code **)(*(int *)*puVar2 + 0x34))();
  }
  (**(code **)(*(int *)*puVar2 + 0x68))();
  local_8 = 0xffffffff;
  if (param_1 != (char *)0x0) {
    LOCK();
    piVar7 = (int *)((int)param_1 + 4);
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      uStack_64 = 0x501353;
      (*(code *)**(undefined4 **)param_1)();
    }
  }
  uVar8 = 0;
  if (0 < *(int *)(in_ECX + 0x380)) {
    do {
      pcVar6 = local_18;
      pcVar5 = local_1c;
      pcVar4 = local_20;
      pcVar3 = local_24;
      param_1 = "";
      local_8 = 1;
      switch(uVar8) {
      case 1:
        uStack_64 = 0x501396;
        FUN_0045c990();
        local_18 = param_1;
        break;
      case 2:
        uStack_64 = 0x5013b2;
        FUN_0045c990();
        local_1c = param_1;
        pcVar6 = pcVar5;
        break;
      case 3:
        uStack_64 = 0x5013ce;
        FUN_0045c990();
        local_20 = param_1;
        pcVar6 = pcVar4;
        break;
      case 4:
        uStack_64 = 0x5013ea;
        FUN_0045c990();
        local_24 = param_1;
        pcVar6 = pcVar3;
        break;
      default:
        goto switchD_0050137e_default;
      }
      piVar7 = (int *)(param_1 + -8);
      param_1 = pcVar6;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          uStack_64 = 0x501417;
          FID_conflict__free(piVar7);
        }
      }
      if (*param_1 != '\0') {
        uStack_64 = 0x501433;
        FUN_00684c50();
        if (uVar8 < *(uint *)(in_ECX + 0x380)) {
          uStack_64 = *(undefined4 *)(*(int *)(in_ECX + 0x378) + uVar8 * 4);
        }
        else {
          uStack_64 = 0;
        }
        uStack_68 = 0x16;
        uStack_6c = 0x501458;
        FUN_00472d90();
        uStack_64 = 0x24;
        FUN_0040e4d0(auStack_74);
        FUN_006830c0(&param_1);
      }
switchD_0050137e_default:
      uStack_64 = 0x5014a3;
      FUN_00684c50();
      uStack_64 = 0x5014d0;
      (**(code **)(*(int *)*puVar2 + 0x50))();
      local_8 = 0xffffffff;
      piVar7 = (int *)(param_1 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          uStack_64 = 0x5014f8;
          FID_conflict__free(piVar7);
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < *(int *)(in_ECX + 0x380));
  }
  ExceptionList = local_10;
  return;
}

