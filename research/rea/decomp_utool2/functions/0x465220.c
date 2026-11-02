// rea decompile_all
// name: FUN_00465220
// address: 0x465220
// body: available
// range: 0x465220-0x465372 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00465220(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *in_ECX;
  undefined4 *in_XMM1_Da;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined **local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700f57;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = in_XMM1_Da;
  piVar4 = operator_new(0x5c);
  local_8 = 0;
  local_18 = (undefined **)piVar4;
  FUN_0046e120(in_ECX);
  iVar1 = in_ECX[0x15];
  piVar4[0x15] = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  iVar1 = in_ECX[0x16];
  piVar4[0x16] = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  local_8 = 0xffffffff;
  if ((int *)*in_ECX != (int *)0x0) {
    (**(code **)(*(int *)*in_ECX + 0x2c))(&local_2c,uVar3);
    local_18 = juce::NativeImageType::vftable;
    local_8 = 1;
    FUN_00673a00(&local_14,2,local_24,local_20,1);
    local_8 = 0xffffffff;
    puVar2 = (undefined4 *)piVar4[0x15];
    piVar4[0x15] = (int)local_14;
    local_14 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      piVar5 = puVar2 + 1;
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*puVar2)(1);
      }
    }
    piVar4[0x14] = (int)local_1c;
    FUN_004647b0(-local_2c,-local_28);
    if (1 < ((int *)*piVar4)[1]) {
      piVar5 = (int *)(**(code **)(*(int *)*piVar4 + 4))(&local_1c);
      iVar1 = *piVar4;
      *piVar4 = *piVar5;
      *piVar5 = iVar1;
      if (local_1c != (undefined4 *)0x0) {
        piVar5 = local_1c + 1;
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          (**(code **)*local_1c)(1);
        }
      }
    }
    (**(code **)(*(int *)*piVar4 + 0x24))(-local_2c,-local_28);
  }
  ExceptionList = local_10;
  return piVar4;
}

