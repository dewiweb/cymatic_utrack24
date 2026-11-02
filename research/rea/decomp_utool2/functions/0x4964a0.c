// rea decompile_all
// name: FUN_004964a0
// address: 0x4964a0
// body: available
// range: 0x4964a0-0x496620 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004964a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *in_ECX;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007025c8;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006ea2c0(uVar3);
  local_8 = 0;
  *in_ECX = (int)juce::PopupMenu::HelperClasses::ItemComponent::vftable;
  FUN_006a0770(param_1);
  iVar5 = *(int *)(param_1 + 0x10);
  in_ECX[0x26] = iVar5;
  if (iVar5 != 0) {
    *(int *)(iVar5 + 0x74) = *(int *)(iVar5 + 0x74) + 1;
  }
  local_8._0_1_ = 2;
  *(undefined1 *)(in_ECX + 0x27) = 0;
  if (*(char *)((int)in_ECX + 0x97) != '\0') {
    puVar4 = operator_new(0x7c);
    FUN_006ea2c0(uVar3);
    puVar4[0x1c] = juce::SingleThreadedReferenceCountedObject::vftable;
    puVar4[0x1d] = 0;
    *(undefined2 *)(puVar4 + 0x1e) = 0;
    local_8._0_1_ = 4;
    *puVar4 = juce::PopupMenu::HelperClasses::HeaderItemComponent::vftable;
    puVar4[0x1c] = juce::PopupMenu::HelperClasses::HeaderItemComponent::vftable;
    FUN_006e9f90(in_ECX + 0x1c);
    local_8._0_1_ = 2;
    if ((undefined4 *)in_ECX[0x26] != puVar4) {
      puVar4[0x1d] = puVar4[0x1d] + 1;
      puVar1 = (undefined4 *)in_ECX[0x26];
      in_ECX[0x26] = (int)puVar4;
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = puVar1 + 0x1d;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar1)(1);
        }
      }
    }
  }
  piVar2 = (int *)in_ECX[0x26];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x28))(1);
    FUN_006e5050(piVar2,0xffffffff);
  }
  (**(code **)(*in_ECX + 0x28))(1);
  FUN_006e5050(in_ECX,0xffffffff);
  FUN_004968c0();
  local_18 = 0x50;
  local_14 = 0x10;
  FUN_004966d0(&local_18,&local_14,param_2);
  if (local_14 < 2) {
    iVar5 = 2;
  }
  else {
    iVar5 = local_14;
    if (600 < local_14) {
      iVar5 = 600;
    }
  }
  FUN_006e9790(in_ECX[4],in_ECX[5],local_18,iVar5);
  FUN_006dfe90(param_3,0);
  ExceptionList = local_10;
  return;
}

