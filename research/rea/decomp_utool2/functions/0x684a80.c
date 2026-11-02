// rea decompile_all
// name: FUN_00684a80
// address: 0x684a80
// body: available
// range: 0x684a80-0x684b6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00684a80(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined4 local_4c;
  int local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [24];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720bb4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((char)((uint)param_1 >> 0x18) != '\0') {
    (**(code **)(*(int *)*in_ECX + 0x2c))(local_28,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    (**(code **)(*(int *)*in_ECX + 0x34))();
    local_4c = param_1;
    local_48 = 0;
    local_44 = (undefined4 *)0x0;
    local_40 = 0x3f800000;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    local_30 = 0x3f800000;
    local_2c = 0;
    local_8 = 0;
    (**(code **)(*(int *)*in_ECX + 0x44))(&local_4c);
    local_8 = 0xffffffff;
    if (local_44 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = local_44 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_44)(1);
      }
    }
    iVar2 = local_48;
    if (local_48 != 0) {
      FID_conflict__free(*(void **)(local_48 + 0x14));
      FUN_004bfe14(iVar2,0x20);
    }
    (**(code **)(*(int *)*in_ECX + 0x54))(local_28,0);
    (**(code **)(*(int *)*in_ECX + 0x38))();
  }
  ExceptionList = local_10;
  return;
}

