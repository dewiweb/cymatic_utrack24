// rea decompile_all
// name: FUN_005a93f0
// address: 0x5a93f0
// body: available
// range: 0x5a93f0-0x5a9557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a93f0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piStack_3c;
  undefined4 uStack_38;
  int local_34;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717b56;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_34 = (*(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x1c)) + 3;
  uStack_38 = 1;
  piStack_3c = (int *)0x1;
  FUN_006e9790();
  local_14 = (undefined4 *)((float)*(int *)(in_ECX + 0x1c) * 0.85);
  if (15.0 <= (float)local_14) {
    local_14 = (undefined4 *)0x41700000;
  }
  local_34 = 0x5a945d;
  operator_new(0x28);
  local_34 = 0x5a9487;
  puVar3 = (undefined4 *)FUN_00468a40();
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    puVar3[1] = puVar3[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  local_34 = 0x5a94aa;
  local_14 = puVar3;
  FUN_006e4890();
  local_8 = 0xffffffff;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      local_34 = 0x5a94cd;
      (**(code **)*puVar3)();
    }
  }
  if (*(int *)(in_ECX + 0x154) != 0) {
    piStack_3c = &local_1c;
    uStack_38 = DAT_00c8a5d4;
    local_34 = 0;
    FUN_006e0d50();
    iVar2 = *(int *)(in_ECX + 0x154);
    *(undefined4 *)(iVar2 + 0x7c) = 0x43960000;
    *(undefined4 *)(iVar2 + 0x80) = 0x43960000;
    *(float *)(iVar2 + 0x74) = (float)local_1c;
    *(float *)(iVar2 + 0x78) = (float)local_18;
    FUN_006e6400(&piStack_3c);
    FUN_006ce9f0(1);
  }
  ExceptionList = local_10;
  return;
}

