// rea decompile_all
// name: FUN_0069a000
// address: 0x69a000
// body: available
// range: 0x69a000-0x69a1b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069a000(void)

{
  int *_Memory;
  int iVar1;
  int *piVar2;
  int *in_ECX;
  int iVar3;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 *local_50;
  int local_34;
  int local_2c;
  undefined1 local_20 [8];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072210b;
  local_10 = ExceptionList;
  local_18 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = (undefined1 *)0x69a039;
  FUN_006e50e0();
  local_8 = 0;
  local_50 = (undefined1 *)0x69a04f;
  piVar2 = (int *)FUN_0063ae00();
  if (*piVar2 == local_2c) {
    iVar3 = 0;
  }
  else {
    local_50 = (undefined1 *)*piVar2;
    uStack_54 = 0x69a06d;
    iVar3 = FUN_00448730();
  }
  piVar2 = (int *)(local_34 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      local_50 = (undefined1 *)0x69a094;
      FID_conflict__free(piVar2);
    }
  }
  if (iVar3 != 0) {
    piVar2 = (int *)(local_2c + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    LOCK();
    iVar3 = in_ECX[0x25];
    in_ECX[0x25] = local_2c;
    UNLOCK();
    _Memory = (int *)(iVar3 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar3 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar3 == 0) {
        local_50 = (undefined1 *)0x69a0d7;
        FID_conflict__free(_Memory);
      }
    }
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    local_8._0_1_ = 1;
    local_50 = (undefined1 *)0x69a102;
    (**(code **)(*(int *)in_ECX[0x21] + 8))();
    local_8 = (uint)local_8._1_3_ << 8;
    local_50 = local_20;
    uStack_54 = 0x69a112;
    (**(code **)(PTR_vftable_00c7ed4c + 0x54))();
    FUN_006e6400(&uStack_58);
    FUN_006ce9f0(1);
    if (*(code **)(*in_ECX + 0xb8) != FUN_006e24a0) {
      (**(code **)(*in_ECX + 0xb8))();
    }
    if ((in_ECX[0x2c] != 0) && (*(int *)(in_ECX[0x2c] + 8) != 0)) {
      if (in_ECX[0x2c] == 0) {
        uStack_54 = 0;
      }
      else {
        uStack_54 = *(undefined4 *)(in_ECX[0x2c] + 8);
      }
      local_50 = (undefined1 *)0x1;
      uStack_58 = 0x69a169;
      (**(code **)(in_ECX[0x1f] + 4))();
    }
  }
  piVar2 = (int *)(local_2c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      local_50 = (undefined1 *)0x69a190;
      FID_conflict__free(piVar2);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

