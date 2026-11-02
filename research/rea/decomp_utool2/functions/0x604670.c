// rea decompile_all
// name: FUN_00604670
// address: 0x604670
// body: available
// range: 0x604670-0x6047c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00604670(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int in_ECX;
  undefined **local_34 [2];
  int local_2c [2];
  undefined **local_24;
  undefined4 local_20;
  int local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071bdaa;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c[0] = *param_2;
  piVar2 = (int *)(local_2c[0] + -8);
  local_34[0] = &PTR_vftable_00c7ed4c;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  local_1c[2] = uVar1;
  FUN_0063b210(param_1,in_ECX + 0x38,local_34);
  local_8 = 0;
  (**(code **)(*local_34[0] + 0x54))(local_2c,uVar1);
  if (*param_1 == 0) {
    operator_new(0x34);
    local_24 = (undefined **)FUN_00460e00(in_ECX + 0x30);
    if (local_24 != (undefined **)0x0) {
      LOCK();
      local_24[1] = local_24[1] + 1;
      UNLOCK();
    }
    local_20 = 0;
    local_1c[0] = 0;
    local_1c[1] = 0;
    local_8 = 1;
    FUN_0063b440(&local_24);
    FUN_0063b3e0();
    local_1c[0] = *param_2;
    piVar2 = (int *)(local_1c[0] + -8);
    local_24 = &PTR_vftable_00c7ed4c;
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    local_8 = 2;
    if (*param_1 != 0) {
      FUN_00461420(in_ECX + 0x38,&local_24,*(undefined4 *)(in_ECX + 0x2c));
    }
    local_8 = local_8 & 0xffffff00;
    (**(code **)(*local_24 + 0x54))(local_1c);
    if (*(int *)(in_ECX + 0x1c) != 0) {
      FUN_00461880(*param_1,0xffffffff,*(undefined4 *)(in_ECX + 0x2c));
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_1c[2] ^ (uint)&stack0xfffffffc);
  return;
}

