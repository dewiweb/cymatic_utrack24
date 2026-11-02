// rea decompile_all
// name: FUN_00530d90
// address: 0x530d90
// body: available
// range: 0x530d90-0x530ea6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00530d90(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070cdc3;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar4 = operator_new(0x27c);
  puVar2 = *(undefined4 **)(in_ECX + 0x3c);
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    puVar2[1] = puVar2[1] + 1;
    UNLOCK();
  }
  local_8 = 1;
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    puVar2[1] = puVar2[1] + 1;
    UNLOCK();
  }
  FUN_0052f2b0(in_ECX,puVar2,1);
  *puVar4 = TargetExplorerItem_MTSong::TVIMTSong::vftable;
  puVar4[0x1c] = TargetExplorerItem_MTSong::TVIMTSong::vftable;
  puVar4[0x1d] = TargetExplorerItem_MTSong::TVIMTSong::vftable;
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar2 + 1;
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*puVar2)(1,uVar3);
    }
  }
  local_8 = 0xffffffff;
  iVar5 = FUN_0040de70(puVar4);
  if (*(int *)(in_ECX + 0x68) != iVar5) {
    if (iVar5 != 0) {
      LOCK();
      *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
      UNLOCK();
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x68);
    *(int *)(in_ECX + 0x68) = iVar5;
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar2 + 1;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  local_8 = 2;
  if (*(int *)(in_ECX + 0x68) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(*(int *)(in_ECX + 0x68) + 8);
  }
  FUN_006f6dd6(uVar6,0,&juce::Component::RTTI_Type_Descriptor,&TVITargetBase::RTTI_Type_Descriptor,0
              );
  ExceptionList = local_10;
  return;
}

