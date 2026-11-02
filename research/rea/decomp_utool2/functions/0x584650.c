// rea decompile_all
// name: FUN_00584650
// address: 0x584650
// body: available
// range: 0x584650-0x58476f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00584650(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  float in_XMM0_Da;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00712fc3;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  operator_new(0x28);
  local_14 = (undefined4 *)FUN_00468a40(0);
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    local_14[1] = local_14[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  uVar3 = FUN_00587020(&local_18);
  local_8._0_1_ = 1;
  FUN_006831f0(uVar3);
  FUN_004363b0(uVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  piVar4 = (int *)(local_18 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_006e9790((int)in_XMM0_Da + 0xc,4,*(undefined4 *)(in_ECX + 0x90),0x14);
  FUN_006e9790(0x1e,*(int *)(in_ECX + 0x8c) + *(int *)(in_ECX + 0x94) + 4,
               *(undefined4 *)(in_ECX + 0x2cc),*(undefined4 *)(in_ECX + 0x2d0));
  FUN_006e9790(0,*(int *)(in_ECX + 0x1c) + -0x18,*(undefined4 *)(in_ECX + 0x18),0x14);
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_14 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_14)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

