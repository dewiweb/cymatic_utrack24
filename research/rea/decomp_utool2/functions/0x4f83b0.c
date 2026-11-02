// rea decompile_all
// name: FUN_004f83b0
// address: 0x4f83b0
// body: available
// range: 0x4f83b0-0x4f8690 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f83b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *_Memory;
  undefined1 local_1c [8];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070654f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[0x1c] = juce::SettableTooltipClient::vftable;
  in_ECX[0x1d] = &DAT_00bfe12c;
  *in_ECX = PushButton::vftable;
  in_ECX[0x1c] = PushButton::vftable;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  *(undefined1 *)(in_ECX + 0x31) = 1;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  *(undefined1 *)(in_ECX + 0x3a) = 1;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  in_ECX[0x3b] = 0;
  local_14 = in_ECX + 0x3e;
  operator_new(0x28);
  iVar1 = FUN_00468990();
  in_ECX[0x3e] = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  in_ECX[0x40] = &DAT_00bfe12c;
  in_ECX[0x41] = 0x24;
  in_ECX[0x43] = 0;
  in_ECX[0x44] = 0;
  in_ECX[0x47] = 0;
  in_ECX[0x48] = 0;
  in_ECX[0x49] = 0;
  in_ECX[0x4a] = 0;
  in_ECX[0x46] = PushButton::BlinkTimer::vftable;
  in_ECX[0x4b] = in_ECX;
  in_ECX[0x4c] = 0;
  local_8 = CONCAT31(local_8._1_3_,7);
  in_ECX[0x21] = 0;
  in_ECX[0x22] = DAT_00c7ef94;
  in_ECX[0x23] = DAT_00c8a948;
  in_ECX[0x24] = DAT_00c7ebb0;
  in_ECX[0x25] = DAT_00c7ef94;
  FUN_0045c990("colTransparent");
  puVar2 = (undefined4 *)FUN_0057f430();
  _Memory = local_14 + -2;
  in_ECX[0x26] = *puVar2;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  in_ECX[0x27] = DAT_00c7ef98;
  puVar2 = (undefined4 *)FUN_006842b0(local_1c);
  in_ECX[0x28] = *puVar2;
  in_ECX[0x29] = DAT_00c8a948;
  *(undefined1 *)(in_ECX + 0x3f) = 0;
  in_ECX[0x42] = 0;
  *(undefined2 *)(in_ECX + 0x45) = 0;
  in_ECX[0x3d] = 0;
  ExceptionList = local_10;
  return;
}

