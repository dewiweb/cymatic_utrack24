// rea decompile_all
// name: FUN_0045c040
// address: 0x45c040
// body: available
// range: 0x45c040-0x45c175 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


_Facet_base * FUN_0045c040(int param_1)

{
  uint uVar1;
  _Facet_base *p_Var2;
  uint uVar3;
  int iVar4;
  _Facet_base *p_Var5;
  undefined **local_2c;
  undefined8 local_28;
  _Lockit local_20 [4];
  _Lockit local_1c [4];
  _Facet_base *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700938;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  std::_Lockit::_Lockit(local_20,0);
  p_Var2 = DAT_00c8aad8;
  local_8 = 0;
  local_18[0] = DAT_00c8aad8;
  if (DAT_00c898f0 == 0) {
    std::_Lockit::_Lockit(local_1c,0);
    if (DAT_00c898f0 == 0) {
      DAT_00c898d0 = DAT_00c898d0 + 1;
      DAT_00c898f0 = DAT_00c898d0;
    }
    FUN_004bede7(uVar3);
  }
  uVar1 = DAT_00c898f0;
  iVar4 = *(int *)(param_1 + 4);
  if (DAT_00c898f0 < *(uint *)(iVar4 + 0xc)) {
    p_Var5 = *(_Facet_base **)(*(int *)(iVar4 + 8) + DAT_00c898f0 * 4);
    if (p_Var5 != (_Facet_base *)0x0) goto LAB_0045c15a;
  }
  else {
    p_Var5 = (_Facet_base *)0x0;
  }
  if (*(char *)(iVar4 + 0x14) == '\0') {
LAB_0045c0ee:
    if (p_Var5 != (_Facet_base *)0x0) goto LAB_0045c15a;
  }
  else {
    iVar4 = FUN_004befce();
    if (uVar1 < *(uint *)(iVar4 + 0xc)) {
      p_Var5 = *(_Facet_base **)(*(int *)(iVar4 + 8) + uVar1 * 4);
      goto LAB_0045c0ee;
    }
  }
  p_Var5 = p_Var2;
  if (p_Var2 == (_Facet_base *)0x0) {
    iVar4 = FUN_0044e1e0(local_18,param_1);
    if (iVar4 == -1) {
      local_2c = std::bad_cast::vftable;
      local_28 = 0xc17558;
      __CxxThrowException_8(&local_2c,&DAT_00c4d114);
    }
    p_Var5 = local_18[0];
    DAT_00c8aad8 = local_18[0];
    if (*(code **)(*(int *)local_18[0] + 4) == FUN_0044e150) {
      LOCK();
      *(int *)(local_18[0] + 4) = *(int *)(local_18[0] + 4) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(int *)local_18[0] + 4))();
    }
    std::_Facet_Register(p_Var5);
  }
LAB_0045c15a:
  FUN_004bede7(uVar3);
  ExceptionList = local_10;
  return p_Var5;
}

