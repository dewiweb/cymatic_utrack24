// rea decompile_all
// name: FUN_00537a10
// address: 0x537a10
// body: available
// range: 0x537a10-0x537c46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00537a10(int param_1)

{
  char cVar1;
  undefined4 *in_ECX;
  int *piVar2;
  int iVar3;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 *puStack_38;
  undefined1 **ppuStack_34;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070d89f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  in_ECX[0x1c] = juce::SettableTooltipClient::vftable;
  in_ECX[0x1d] = &DAT_00bfe12c;
  in_ECX[0x1e] = juce::ListBoxModel::vftable;
  *in_ECX = ViewPort_TrakList::vftable;
  in_ECX[0x1c] = ViewPort_TrakList::vftable;
  in_ECX[0x1e] = ViewPort_TrakList::vftable;
  in_ECX[0x1f] = param_1;
  local_18 = &DAT_00bfe12c;
  local_14 = &DAT_00bfe12c;
  local_8 = 3;
  ppuStack_34 = &local_14;
  puStack_38 = (undefined4 *)0x537a9d;
  FUN_006e8b40();
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      ppuStack_34 = (undefined1 **)0x537abf;
      FID_conflict__free(piVar2);
    }
  }
  local_18 = &DAT_00bfe12c;
  ppuStack_34 = &local_18;
  local_8._0_1_ = 7;
  puStack_38 = (undefined4 *)0x537adf;
  FUN_006e8060();
  local_8._0_1_ = 9;
  cVar1 = FUN_0053e4c0();
  if (cVar1 == '\0') {
    ppuStack_34 = (undefined1 **)0x537b5d;
    FUN_0045c990();
    ppuStack_34 = &local_14;
    local_8._0_1_ = 0xb;
    puStack_38 = (undefined4 *)0x537b75;
    FUN_006e4900();
    local_8 = CONCAT31(local_8._1_3_,9);
    piVar2 = (int *)(local_14 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        ppuStack_34 = (undefined1 **)0x537b96;
        FID_conflict__free(piVar2);
      }
    }
  }
  else {
    ppuStack_34 = (undefined1 **)0x537b00;
    FUN_0045c990();
    ppuStack_34 = &local_14;
    local_8._0_1_ = 10;
    puStack_38 = (undefined4 *)0x537b18;
    FUN_006e4900();
    local_8 = CONCAT31(local_8._1_3_,9);
    piVar2 = (int *)(local_14 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        ppuStack_34 = (undefined1 **)0x537b39;
        FID_conflict__free(piVar2);
      }
    }
    ppuStack_34 = (undefined1 **)0x537b50;
    (**(code **)(in_ECX[0x3c] + 8))();
  }
  ppuStack_34 = (undefined1 **)0x537bac;
  (**(code **)(in_ECX[0x20] + 0x28))();
  ppuStack_34 = (undefined1 **)0xffffffff;
  piStack_3c = (int *)0x537bb6;
  puStack_38 = in_ECX + 0x20;
  FUN_006e5050();
  if ((undefined4 *)in_ECX[0x72] != in_ECX + 0x1e) {
    in_ECX[0x72] = in_ECX + 0x1e;
    FUN_006e6400(&uStack_40);
    FUN_006ce9f0(1);
    ppuStack_34 = (undefined1 **)0x537bdc;
    FUN_006e7e60();
  }
  ppuStack_34 = (undefined1 **)0x1;
  puStack_38 = (undefined4 *)0x537be5;
  (**(code **)(in_ECX[0x54] + 0x28))();
  puStack_38 = (undefined4 *)0xffffffff;
  uStack_40 = 0x537bef;
  piStack_3c = in_ECX + 0x54;
  FUN_006e5050();
  iVar3 = 1;
  if (1 < *(int *)(param_1 + 0x5c)) {
    iVar3 = *(int *)(param_1 + 0x5c);
  }
  puStack_38 = (undefined4 *)(iVar3 * in_ECX[0x77]);
  piStack_3c = (int *)in_ECX[6];
  uStack_40 = 0x14;
  FUN_006e9790(0);
  puStack_38 = (undefined4 *)(in_ECX[0x5b] + in_ECX[0x59]);
  piStack_3c = (int *)0x64;
  uStack_40 = in_ECX[5];
  FUN_006e9790(in_ECX[4]);
  ExceptionList = local_10;
  return;
}

