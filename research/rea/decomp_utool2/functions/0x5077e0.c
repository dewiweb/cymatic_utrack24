// rea decompile_all
// name: FUN_005077e0
// address: 0x5077e0
// body: available
// range: 0x5077e0-0x507a9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005077e0(char *param_1)

{
  int *_Memory;
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined1 *puStack_44;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00708038;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00637a90();
  local_8 = 0;
  pcVar1 = *(char **)param_1;
  if (*pcVar1 == '\0') {
LAB_00507983:
    (**(code **)(*(int *)(in_ECX + 0x850) + 0x28))();
    (**(code **)(*(int *)(in_ECX + 0x3b8) + 0x28))();
    if (*(int *)(in_ECX + 0x1d4) != 1) {
      FUN_0063eab0();
      *(undefined4 *)(in_ECX + 0x280) = 0;
      *(undefined4 *)(in_ECX + 0x1d4) = 1;
      FUN_006e6400(&puStack_44);
      FUN_006ce9f0(1);
    }
    if (*(int *)(in_ECX + 0x308) != 0) {
      FUN_0063eab0();
      *(undefined4 *)(in_ECX + 0x3b4) = 0;
      *(undefined4 *)(in_ECX + 0x308) = 0;
      FUN_006e6400(&puStack_44);
      FUN_006ce9f0(1);
    }
    FUN_00627bf0();
    local_8 = CONCAT31(local_8._1_3_,1);
    uStack_3c = 0x507a47;
    FUN_004f8780();
    piVar3 = (int *)(param_1 + -8);
    if (piVar3 == &DAT_00bfe124) goto LAB_00507a6a;
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
  }
  else {
    FUN_0044ebd0();
    iVar2 = FUN_00426f70();
    param_1 = pcVar1;
    if (iVar2 == 0x55) goto LAB_00507983;
    (**(code **)(*(int *)(in_ECX + 0x850) + 0x28))();
    (**(code **)(*(int *)(in_ECX + 0x3b8) + 0x28))();
    if (*(int *)(in_ECX + 0x1d4) != 0) {
      FUN_0063eab0();
      puStack_44 = auStack_40;
      *(undefined4 *)(in_ECX + 0x280) = 0;
      *(undefined4 *)(in_ECX + 0x1d4) = 0;
      FUN_006e6400();
      puStack_44 = (undefined1 *)0x1;
      FUN_006ce9f0();
    }
    if (*(int *)(in_ECX + 0x308) != 1) {
      FUN_0063eab0();
      puStack_44 = auStack_40;
      *(undefined4 *)(in_ECX + 0x3b4) = 0;
      *(undefined4 *)(in_ECX + 0x308) = 1;
      FUN_006e6400();
      puStack_44 = (undefined1 *)0x1;
      FUN_006ce9f0();
    }
    FUN_00627bf0();
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar3 = (int *)(local_18 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    LOCK();
    iVar2 = *(int *)(in_ECX + 0x438);
    *(int *)(in_ECX + 0x438) = local_18;
    UNLOCK();
    _Memory = (int *)(iVar2 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar2 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    uStack_3c = 0x507955;
    FUN_006e4900();
    (**(code **)(**(int **)(in_ECX + 0x444) + 4))();
    if (piVar3 == &DAT_00bfe124) goto LAB_00507a6a;
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    uStack_3c = 0x507a67;
    FID_conflict__free(piVar3);
  }
LAB_00507a6a:
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      uStack_3c = 0x507a87;
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return;
}

