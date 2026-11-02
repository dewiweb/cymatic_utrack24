// rea decompile_all
// name: FUN_006e4900
// address: 0x6e4900
// body: available
// range: 0x6e4900-0x6e4a5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e4900(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *in_ECX;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int *local_44;
  int local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007285bf;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = (int *)0x6e4934;
  FUN_006e0e10();
  piVar3 = in_ECX + 0x25;
  if (*piVar3 != *param_1) {
    local_44 = (int *)*piVar3;
    uStack_48 = 0x6e4958;
    iVar1 = FUN_00448730();
    if (iVar1 != 0) {
      piVar2 = (int *)(*param_1 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *param_1;
      UNLOCK();
      piVar3 = (int *)(iVar1 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          local_44 = (int *)0x6e4994;
          FID_conflict__free(piVar3);
        }
      }
      local_1c[0] = *param_1;
      piVar3 = (int *)(local_1c[0] + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      local_8 = 0;
      local_44 = (int *)0x6e49c6;
      (**(code **)(*(int *)in_ECX[0x21] + 8))();
      local_8 = 0xffffffff;
      local_44 = local_1c;
      uStack_48 = 0x6e49d9;
      (**(code **)(PTR_vftable_00c7ed4c + 0x54))();
      FUN_006e6400(&uStack_4c);
      FUN_006ce9f0(1);
      if (*(code **)(*in_ECX + 0xb8) != FUN_006e24a0) {
        (**(code **)(*in_ECX + 0xb8))();
      }
      if ((in_ECX[0x2c] != 0) && (*(int *)(in_ECX[0x2c] + 8) != 0)) {
        if (in_ECX[0x2c] == 0) {
          uStack_48 = 0;
        }
        else {
          uStack_48 = *(undefined4 *)(in_ECX[0x2c] + 8);
        }
        local_44 = (int *)0x1;
        uStack_4c = 0x6e4a30;
        (**(code **)(in_ECX[0x1f] + 4))();
      }
      if (param_2 != 0) {
        FUN_00699ef0();
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

