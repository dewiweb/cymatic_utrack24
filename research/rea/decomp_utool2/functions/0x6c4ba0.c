// rea decompile_all
// name: FUN_006c4ba0
// address: 0x6c4ba0
// body: available
// range: 0x6c4ba0-0x6c4d42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c4ba0(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725bba;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = 0.0;
  local_1c = 0.0;
  local_30 = 0;
  fStack_2c = 0.0;
  fStack_28 = 0.0;
  uStack_24 = 0;
  local_14 = uVar2;
  FUN_0069e390(&local_30,param_1);
  FUN_006c5050(&local_40);
  local_8 = 0;
  FUN_0069c5e0(&local_50,param_1);
  local_8 = 0xffffffff;
  if (local_34 != (undefined4 *)0x0) {
    piVar1 = local_34 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_34)(1,uVar2);
    }
  }
  if (local_38 != (undefined4 *)0x0) {
    piVar1 = local_38 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_38)(1);
    }
  }
  if (local_3c != (undefined4 *)0x0) {
    piVar1 = local_3c + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_3c)(1);
    }
  }
  if (local_40 != (undefined4 *)0x0) {
    piVar1 = local_40 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_40)(1);
    }
  }
  FUN_0067fb40(fStack_2c,local_50 + local_48,local_4c,fStack_28,uStack_24,local_50,
               local_44 + local_4c,local_20,local_1c);
  if (local_1c * fStack_2c - fStack_28 * local_20 == 0.0) {
    fStack_2c = 1.0;
    fStack_28 = 0.0;
    uStack_24 = 0;
    local_20 = 0.0;
    local_1c = 1.0;
    local_18 = 0;
  }
  FUN_006cf510(&fStack_2c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

