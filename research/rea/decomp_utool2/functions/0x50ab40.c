// rea decompile_all
// name: FUN_0050ab40
// address: 0x50ab40
// body: available
// range: 0x50ab40-0x50ad82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050ab40(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *_Memory;
  undefined4 *local_40;
  int *piStack_3c;
  int *piStack_38;
  undefined1 **ppuStack_34;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007084e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  local_8 = 0;
  in_ECX[0x1c] = juce::Label::Listener::vftable;
  piVar1 = in_ECX + 0x1d;
  *in_ECX = FaderMeter::vftable;
  in_ECX[0x1c] = FaderMeter::vftable;
  FUN_006ea2c0();
  local_8._0_1_ = 2;
  *piVar1 = (int)LogScale::vftable;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0x3f800000;
  in_ECX[0x3c] = 0xc2800000;
  in_ECX[0x3d] = 0;
  ppuStack_34 = (undefined1 **)0x50abc9;
  FUN_006e0f90();
  local_8._0_1_ = 3;
  ppuStack_34 = (undefined1 **)0x50abd9;
  FUN_005118e0();
  local_14 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,6);
  ppuStack_34 = &local_14;
  piStack_38 = (int *)0x50ac00;
  FUN_006e8b40();
  _Memory = (int *)(local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar2 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar2 == 0) {
      ppuStack_34 = (undefined1 **)0x50ac21;
      FID_conflict__free(_Memory);
    }
  }
  local_8._0_1_ = 9;
  FUN_0050a570();
  local_8 = CONCAT31(local_8._1_3_,10);
  in_ECX[0xac] = 0;
  in_ECX[0xab] = 0xc1400000;
  ppuStack_34 = (undefined1 **)0x50ac54;
  (**(code **)(*piVar1 + 0x28))();
  ppuStack_34 = (undefined1 **)0xffffffff;
  piStack_3c = (int *)0x50ac5e;
  piStack_38 = piVar1;
  FUN_006e5050();
  if (in_ECX[0x9b] != 0x24) {
    in_ECX[0x9b] = 0x24;
    FUN_006e6400(&local_40);
    FUN_006ce9f0(1);
  }
  piStack_38 = (int *)0x1000281;
  ppuStack_34 = (undefined1 **)DAT_00c7ef94;
  piStack_3c = (int *)0x50ac9b;
  FUN_006e6170();
  piStack_38 = (int *)0x1000280;
  ppuStack_34 = (undefined1 **)DAT_00c7ef98;
  piStack_3c = (int *)0x50acb1;
  FUN_006e6170();
  piStack_38 = (int *)0x1000283;
  ppuStack_34 = (undefined1 **)DAT_00c7ef80;
  piStack_3c = (int *)0x50acc7;
  FUN_006e6170();
  piStack_38 = (int *)0x1000284;
  ppuStack_34 = (undefined1 **)DAT_00c7ef94;
  piStack_3c = (int *)0x50acdd;
  FUN_006e6170();
  piStack_38 = (int *)0x1000285;
  ppuStack_34 = (undefined1 **)DAT_00c7ef94;
  piStack_3c = (int *)0x50acf3;
  FUN_006e6170();
  *(byte *)(in_ECX + 0x8e) = *(byte *)(in_ECX + 0x8e) | 0x60;
  ppuStack_34 = (undefined1 **)(in_ECX + 0x1c);
  *(undefined2 *)(in_ECX + 0xa7) = 1;
  *(undefined1 *)((int)in_ECX + 0x29e) = 0;
  if (ppuStack_34 != (undefined1 **)0x0) {
    piStack_38 = (int *)0x50ad1a;
    FUN_004097d0();
  }
  ppuStack_34 = (undefined1 **)0x1;
  piStack_38 = (int *)0x50ad23;
  (**(code **)(in_ECX[0x74] + 0x28))();
  piStack_38 = (int *)0xffffffff;
  local_40 = (undefined4 *)0x50ad2d;
  piStack_3c = in_ECX + 0x74;
  FUN_006e5050();
  piStack_38 = (int *)0x1;
  piStack_3c = (int *)0x50ad40;
  (**(code **)(in_ECX[0x48] + 0x28))();
  piStack_3c = (int *)0xffffffff;
  local_40 = in_ECX + 0x48;
  FUN_006e5050();
  piStack_3c = (int *)0x1;
  local_40 = (undefined4 *)0x50ad5d;
  (**(code **)(in_ECX[0xad] + 0x28))();
  local_40 = (undefined4 *)0xffffffff;
  FUN_006e5050(in_ECX + 0xad);
  FUN_006e0f90();
  ExceptionList = local_10;
  return;
}

