// rea decompile_all
// name: FUN_0048ffb0
// address: 0x48ffb0
// body: available
// range: 0x48ffb0-0x49020c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048ffb0(int *param_1,undefined4 *param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701ef7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar1 = in_ECX + 0x1c;
  *puVar1 = juce::Timer::vftable;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  *in_ECX = juce::DragAndDropContainer::DragImageComponent::vftable;
  *puVar1 = juce::DragAndDropContainer::DragImageComponent::vftable;
  local_8 = 2;
  piVar2 = (int *)*param_2;
  in_ECX[0x22] = piVar2;
  (**(code **)(*piVar2 + 0x58))(in_ECX + 0x24,param_2 + 2);
  if (param_3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0040de70(param_3);
  }
  in_ECX[0x26] = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  iVar4 = *param_1;
  in_ECX[0x2a] = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  piVar2 = in_ECX + 0x2c;
  local_8._0_1_ = 4;
  in_ECX[0x2b] = param_5;
  if (param_4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0040de70(param_4);
  }
  *piVar2 = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  in_ECX[0x2d] = 0;
  local_8 = CONCAT31(local_8._1_3_,6);
  in_ECX[0x2e] = param_6;
  in_ECX[0x2f] = param_7;
  *(undefined1 *)(in_ECX + 0x30) = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  uVar6 = 0;
  if (in_ECX[0x2a] != 0) {
    uVar6 = *(undefined4 *)(in_ECX[0x2a] + 0x10);
  }
  uVar5 = 0;
  if (in_ECX[0x2a] != 0) {
    uVar5 = *(undefined4 *)(in_ECX[0x2a] + 0xc);
  }
  FUN_006e9790(in_ECX[4],in_ECX[5],uVar5,uVar6);
  if ((*piVar2 == 0) || (*(int *)(*piVar2 + 8) == 0)) {
    if (param_3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0040de70(param_3);
    }
    if (*piVar2 != iVar4) {
      if (iVar4 != 0) {
        LOCK();
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
        UNLOCK();
      }
      puVar3 = (undefined4 *)*piVar2;
      *piVar2 = iVar4;
      if (puVar3 != (undefined4 *)0x0) {
        LOCK();
        piVar2 = puVar3 + 1;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*puVar3)(1);
        }
      }
    }
  }
  FUN_006dfe90(in_ECX,0);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  if (in_ECX[0x1e] == 0) {
    in_ECX[0x1d] = 200;
    in_ECX[0x1e] = 200;
    local_8._0_1_ = 7;
    if (DAT_00c8a668 == 0) {
      operator_new(0x54);
      DAT_00c8a668 = FUN_004635f0();
    }
    FUN_00463c00(puVar1);
    local_8 = CONCAT31(local_8._1_3_,6);
  }
  else {
    FUN_00463b90();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) & 0xef | 8;
  FUN_006d1c90(1);
  ExceptionList = local_10;
  return;
}

