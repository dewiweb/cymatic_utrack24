// rea decompile_all
// name: FUN_00644ae0
// address: 0x644ae0
// body: available
// range: 0x644ae0-0x644bc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00644ae0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *in_ECX;
  undefined4 **ppuVar6;
  undefined4 **ppuVar7;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071fff6;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  operator_new(0x28);
  local_14 = (undefined4 *)FUN_00468b50(&PTR_DAT_00c7eda0,&PTR_DAT_00c7ed9c);
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    local_14[1] = local_14[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  if (local_14[2] == 0) {
    ppuVar7 = &local_14;
    ppuVar6 = &local_18;
    FUN_004681b0(ppuVar6,ppuVar7,uVar4);
    puVar5 = (undefined4 *)FUN_004682f0(ppuVar6,ppuVar7);
    uVar3 = local_14[2];
    local_14[2] = *puVar5;
    *puVar5 = uVar3;
    if (local_18 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = local_18 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_18)(1);
      }
    }
  }
  iVar2 = local_14[2];
  *in_ECX = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_14 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_14)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

