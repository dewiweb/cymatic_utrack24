// rea decompile_all
// name: FUN_006dea20
// address: 0x6dea20
// body: available
// range: 0x6dea20-0x6deb0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006dea20(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  float fVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727e84;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  fVar6 = (float)*(int *)(param_1 + 0x1c) * 0.6;
  if (15.0 <= fVar6) {
    fVar6 = 15.0;
  }
  operator_new(0x28);
  puVar4 = (undefined4 *)FUN_00468a40(0);
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    puVar4[1] = puVar4[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  FUN_006831f0(param_1 + 0x88);
  FUN_004363b0(uVar3);
  iVar5 = 0x18;
  if (iVar2 < 0x18) {
    iVar5 = iVar2;
  }
  FUN_006e9790(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               (int)fVar6 + iVar5 + 8,iVar2);
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar4 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

