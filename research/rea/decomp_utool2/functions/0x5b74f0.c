// rea decompile_all
// name: FUN_005b74f0
// address: 0x5b74f0
// body: available
// range: 0x5b74f0-0x5b76ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b74f0(void)

{
  int iVar1;
  char cVar2;
  undefined4 *in_ECX;
  undefined1 *local_3c;
  int *piStack_38;
  int *piStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  uint uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00719753;
  local_10 = ExceptionList;
  uStack_28 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_2c = (undefined4 *)0x5b7522;
  FUN_006ea2c0();
  local_8 = 0;
  in_ECX[0x1c] = PushButton::Listener::vftable;
  piStack_34 = (int *)0x5b753b;
  FUN_0063bca0();
  in_ECX[0x30] = juce::ChangeListener::vftable;
  local_8._0_1_ = 3;
  *in_ECX = UndoEngine::vftable;
  in_ECX[0x1c] = UndoEngine::vftable;
  in_ECX[0x1d] = UndoEngine::vftable;
  in_ECX[0x30] = UndoEngine::vftable;
  puStack_2c = (undefined4 *)0x5b7574;
  FUN_004f83b0();
  local_8._0_1_ = 4;
  puStack_2c = (undefined4 *)0x5b7585;
  FUN_004f83b0();
  local_8 = CONCAT31(local_8._1_3_,5);
  if (in_ECX + 0x1c != (undefined4 *)0x0) {
    puStack_30 = (undefined4 *)0x5b759c;
    puStack_2c = in_ECX + 0x1c;
    FUN_004097d0();
  }
  if ((*(byte *)((int)in_ECX + 0x12d) & 0x10) == 0) {
    *(byte *)((int)in_ECX + 0x12d) = *(byte *)((int)in_ECX + 0x12d) | 0x10;
    iVar1 = in_ECX[0x34];
    if (iVar1 != 0) {
      if ((*(byte *)(iVar1 + 0x69) & 0x10) != 0) goto LAB_005b75cc;
      if (*(int *)(iVar1 + 0xc) != 0) {
        puStack_2c = (undefined4 *)0x5b75c1;
        cVar2 = FUN_006e6320();
        if (cVar2 == '\0') goto LAB_005b75cc;
      }
    }
    puStack_2c = (undefined4 *)0x5b75cc;
    FUN_006cc240();
  }
LAB_005b75cc:
  local_3c = (undefined1 *)&piStack_38;
  FUN_006e6400();
  local_3c = (undefined1 *)0x1;
  FUN_006ce9f0();
  *(byte *)(in_ECX + 0x4b) = *(byte *)(in_ECX + 0x4b) & 0xef | 8;
  in_ECX[0x6e] = 0xe;
  puStack_2c = (undefined4 *)0x1;
  puStack_30 = (undefined4 *)0x5b75fd;
  (**(code **)(in_ECX[0x31] + 0x28))();
  puStack_30 = (undefined4 *)0xffffffff;
  piStack_38 = (int *)0x5b7607;
  piStack_34 = in_ECX + 0x31;
  FUN_006e5050();
  if (in_ECX + 0x1c != (undefined4 *)0x0) {
    piStack_34 = (int *)0x5b761a;
    puStack_30 = in_ECX + 0x1c;
    FUN_004097d0();
  }
  if ((*(byte *)((int)in_ECX + 0x261) & 0x10) == 0) {
    *(byte *)((int)in_ECX + 0x261) = *(byte *)((int)in_ECX + 0x261) | 0x10;
    iVar1 = in_ECX[0x81];
    if (iVar1 != 0) {
      if ((*(byte *)(iVar1 + 0x69) & 0x10) != 0) goto LAB_005b764a;
      if (*(int *)(iVar1 + 0xc) != 0) {
        puStack_30 = (undefined4 *)0x5b763f;
        cVar2 = FUN_006e6320();
        if (cVar2 == '\0') goto LAB_005b764a;
      }
    }
    puStack_30 = (undefined4 *)0x5b764a;
    FUN_006cc240();
  }
LAB_005b764a:
  FUN_006e6400(&local_3c);
  FUN_006ce9f0(1);
  *(byte *)(in_ECX + 0x98) = *(byte *)(in_ECX + 0x98) & 0xef | 8;
  in_ECX[0xbb] = 0xf;
  puStack_30 = (undefined4 *)0x1;
  piStack_34 = (int *)0x5b767b;
  (**(code **)(in_ECX[0x7e] + 0x28))();
  piStack_34 = (int *)0xffffffff;
  local_3c = (undefined1 *)0x5b7685;
  piStack_38 = in_ECX + 0x7e;
  FUN_006e5050();
  piStack_34 = in_ECX + 0x30;
  if (piStack_34 != (undefined4 *)0x0) {
    piStack_38 = (int *)0x5b769b;
    FUN_004097d0();
  }
  ExceptionList = local_10;
  return;
}

