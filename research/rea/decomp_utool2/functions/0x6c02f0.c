// rea decompile_all
// name: FUN_006c02f0
// address: 0x6c02f0
// body: available
// range: 0x6c02f0-0x6c052e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c02f0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined4 local_3c;
  int local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007251d4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  *(byte *)((int)in_ECX + 0x69) = *(byte *)((int)in_ECX + 0x69) | 0x40;
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) & 0xef | 8;
  *in_ECX = juce::DrawableShape::vftable;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  *(undefined1 *)(in_ECX + 0x2b) = 1;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  *(undefined1 *)(in_ECX + 0x33) = 1;
  local_3c = DAT_00c7ef90;
  local_38 = 0;
  local_34 = (undefined4 *)0x0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_20 = 0x3f800000;
  local_1c = 0;
  local_8 = 4;
  FUN_006bf6b0(&local_3c);
  if (local_34 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_34 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_34)(1);
    }
  }
  iVar2 = local_38;
  if (local_38 != 0) {
    FID_conflict__free(*(void **)(local_38 + 0x14));
    FUN_004bfe14(iVar2,0x20);
  }
  local_3c = DAT_00c7ef90;
  local_38 = 0;
  local_34 = (undefined4 *)0x0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_20 = 0x3f800000;
  local_1c = 0;
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_006bf6b0(&local_3c);
  if (local_34 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_34 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_34)(1);
    }
  }
  iVar2 = local_38;
  if (local_38 != 0) {
    FID_conflict__free(*(void **)(local_38 + 0x14));
    FUN_004bfe14(iVar2,0x20);
  }
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  ExceptionList = local_10;
  return;
}

