// rea decompile_all
// name: FUN_0059ad50
// address: 0x59ad50
// body: available
// range: 0x59ad50-0x59af42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0059ad50(void)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715862;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0();
  local_8 = 0;
  *in_ECX = PanelBase::vftable;
  FUN_006e0f90();
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  in_ECX[0x1c] = GlobalNotifierListener::vftable;
  iVar1 = FUN_00560890();
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x18));
  FUN_00447220();
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x18));
  in_ECX[0x1d] = PushButton::Listener::vftable;
  local_8._0_1_ = 4;
  in_ECX[0x1c] = PanelHomeComponent::vftable;
  *in_ECX = PanelHomeComponent::vftable;
  in_ECX[0x1d] = PanelHomeComponent::vftable;
  FUN_004f83b0();
  local_8._0_1_ = 5;
  FUN_0045c990("Project Explorer");
  FUN_004f99d0(10);
  local_8._0_1_ = 6;
  FUN_0045c990("Details");
  FUN_004f99d0(10);
  local_8._0_1_ = 7;
  FUN_0052a550();
  local_8._0_1_ = 8;
  FUN_005192f0();
  local_8 = CONCAT31(local_8._1_3_,9);
  FUN_004f9700(in_ECX + 0x210,0,0,0xbff00000);
  (**(code **)(in_ECX[0x6b] + 0x28))();
  FUN_006e5050(in_ECX + 0x6b);
  FUN_004f9700(in_ECX + 0xca,0,0,0xbff00000,0);
  (**(code **)(in_ECX[0x9a] + 0x28))();
  FUN_006e5050(in_ECX + 0x9a,0xffffffff);
  in_ECX[0x5b] = 0x14;
  if (in_ECX + 0x1d != (undefined4 *)0x0) {
    FUN_004097d0(in_ECX + 0x1d);
  }
  (**(code **)(in_ECX[0x1e] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x1e,0xffffffff);
  in_ECX[0x246] = in_ECX + 0xca;
  in_ECX[0xe7] = in_ECX + 0x210;
  FUN_00518eb0();
  ExceptionList = local_10;
  return in_ECX;
}

