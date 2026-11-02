// rea decompile_all
// name: FUN_006eba80
// address: 0x6eba80
// body: available
// range: 0x6eba80-0x6ebe2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006eba80(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined1 *extraout_EDX;
  int iVar6;
  undefined1 *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 *puStack_78;
  undefined1 *local_74;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  undefined4 *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728fad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puStack_78 = &stack0xffffff94;
  local_74 = (undefined1 *)0x1007000;
  local_7c = 0x6ebabd;
  local_20 = in_ECX;
  FUN_006e8e70();
  FUN_00684a80();
  if ((*(byte *)(in_ECX + 0xc4) & 2) != 0) {
    FUN_006ec1d0();
    local_74 = &stack0xffffff94;
    puStack_78 = (undefined1 *)0x6ebafa;
    FUN_00680d30();
    puStack_78 = &stack0xffffff90;
    local_74 = (undefined1 *)local_14;
    local_7c = 0x6ebb12;
    FUN_00680d30();
    local_74 = (undefined1 *)0xa;
    puStack_78 = (undefined1 *)0xa;
    local_84 = *(undefined1 **)(in_ECX + 0xd0);
    local_80 = *(undefined4 *)(in_ECX + 0xd4);
    local_7c = *(undefined4 *)(in_ECX + 0xd8);
    FUN_00676c40(*(undefined4 *)(in_ECX + 0xcc));
    local_74 = (undefined1 *)local_14;
    puStack_78 = local_28;
    local_7c = 0x6ebb5a;
    FUN_00680d30();
    local_74 = (undefined1 *)0x6ebb69;
    FUN_00680c60();
    FUN_00684c50();
    puVar2 = operator_new(0x28);
    local_8 = 0;
    *puVar2 = juce::ReferenceCountedObject::vftable;
    puVar2[1] = 0;
    *puVar2 = juce::Font::SharedFontInternal::vftable;
    puVar2[2] = 0;
    piVar3 = (int *)FUN_00643f40();
    iVar6 = *piVar3;
    puVar2[3] = iVar6;
    piVar3 = (int *)(iVar6 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    FUN_0045c990();
    puVar2[5] = 0x41600000;
    puVar2[6] = 0x3f800000;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined1 *)(puVar2 + 9) = 0;
    LOCK();
    puVar2[1] = puVar2[1] + 1;
    UNLOCK();
    local_8 = 1;
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    (**(code **)(*(int *)*param_1 + 0x68))();
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      piVar3 = puVar2 + 1;
      iVar6 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)*puVar2)();
      }
    }
    local_8 = 2;
    local_74 = (undefined1 *)0x6ebc74;
    FUN_0067ef50();
    local_8 = CONCAT31(local_8._1_3_,4);
    local_84 = (undefined1 *)&local_80;
    FUN_0040e4d0();
    local_84 = extraout_EDX;
    FUN_006830c0();
    local_8 = 0xffffffff;
    piVar3 = (int *)((int)local_18 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
  if ((*(byte *)(in_ECX + 0xc4) & 4) != 0) {
    puStack_78 = &stack0xffffff94;
    local_74 = (undefined1 *)0x1007001;
    local_7c = 0x6ebce3;
    FUN_006e8e70();
    FUN_00684c50();
    (**(code **)(*(int *)*param_1 + 0x6c))();
    FUN_00683640();
    local_8 = 5;
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    (**(code **)(*(int *)*param_1 + 0x68))();
    local_8 = 0xffffffff;
    if (local_1c != (undefined4 *)0x0) {
      LOCK();
      piVar3 = local_1c + 1;
      iVar6 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        local_74 = (undefined1 *)0x6ebd4a;
        (**(code **)*local_1c)();
      }
    }
    iVar6 = 3;
    piVar3 = (int *)(local_20 + 0xac);
    do {
      iVar1 = *piVar3;
      if ((*(byte *)(iVar1 + 0x68) & 2) != 0) {
        local_20 = *(undefined4 *)(iVar1 + 0x1c);
        local_1c = (undefined4 *)(*(int *)(iVar1 + 0x10) + -8);
        local_18 = *(undefined1 **)(iVar1 + 0x14);
        piVar4 = (int *)(*(int *)(iVar1 + 4) + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
        }
        local_74 = (undefined1 *)0x6ebda3;
        uVar5 = FUN_006377c0();
        local_8 = 6;
        local_74 = (undefined1 *)local_1c;
        puStack_78 = local_18;
        local_7c = 0x6ebdbf;
        FUN_00472d90();
        local_74 = (undefined1 *)0x22;
        FUN_0040e4d0(&local_84);
        FUN_006830c0(uVar5);
        local_8 = 0xffffffff;
        piVar4 = (int *)(local_24 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            local_74 = (undefined1 *)0x6ebe05;
            FID_conflict__free(piVar4);
          }
        }
      }
      piVar3 = piVar3 + -1;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  ExceptionList = local_10;
  return;
}

