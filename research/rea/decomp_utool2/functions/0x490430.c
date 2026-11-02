// rea decompile_all
// name: FUN_00490430
// address: 0x490430
// body: available
// range: 0x490430-0x49059c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00490430(int param_1)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  undefined4 uStack_60;
  int **ppiStack_5c;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  int *piStack_50;
  uint uStack_4c;
  undefined1 local_3c [4];
  int *local_38;
  int *local_34 [2];
  undefined1 local_2c [8];
  undefined4 *local_24;
  int local_20;
  int local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701f28;
  local_10 = ExceptionList;
  uStack_4c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uStack_4c;
  if (*(int **)(param_1 + 0x1c) != in_ECX) {
    if ((in_ECX[0x2c] != 0) && (*(int *)(in_ECX[0x2c] + 8) != 0)) {
      if (in_ECX[0x2c] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(in_ECX[0x2c] + 8);
      }
      if (*(int *)(iVar4 + 0x44) != 0) {
        puStack_54 = (undefined1 *)0x490498;
        FUN_0048cf90();
      }
    }
    local_34[0] = (int *)in_ECX[0x22];
    piStack_50 = in_ECX + 0x24;
    puStack_54 = local_2c;
    uStack_58 = 0x4904b1;
    (**(code **)(*local_34[0] + 0x58))();
    local_24 = (undefined4 *)in_ECX[0x26];
    if (local_24 != (undefined4 *)0x0) {
      LOCK();
      local_24[1] = local_24[1] + 1;
      UNLOCK();
    }
    local_20 = in_ECX[0x27];
    local_1c = in_ECX[0x28];
    local_8 = 0;
    bVar2 = *(byte *)(in_ECX + 0x1a);
    uStack_58 = 0;
    ppiStack_5c = (int **)0x4904e7;
    (**(code **)(*in_ECX + 0x28))();
    FUN_006c9be0(&uStack_60);
    piVar5 = (int *)FUN_00490b70(&local_20,local_3c);
    local_38 = piVar5;
    if ((bVar2 & 2) != 0) {
      ppiStack_5c = (int **)(uint)(piVar5 == (int *)0x0);
      uStack_60 = 0x49051b;
      FUN_00490f50();
    }
    if (in_ECX[3] != 0) {
      uStack_60 = 0x490528;
      FUN_006cf2a0();
    }
    if (piVar5 != (int *)0x0) {
      puVar3 = (undefined4 *)in_ECX[0x2d];
      if (puVar3 != (undefined4 *)0x0) {
        in_ECX[0x2d] = 0;
        LOCK();
        piVar1 = puVar3 + 1;
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          ppiStack_5c = (int **)0x1;
          uStack_60 = 0x490553;
          (**(code **)*puVar3)();
        }
      }
      ppiStack_5c = local_34;
      uStack_60 = 0x49055e;
      (**(code **)(*piVar5 + 0x14))();
    }
    if (local_24 != (undefined4 *)0x0) {
      LOCK();
      piVar5 = local_24 + 1;
      iVar4 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        ppiStack_5c = (int **)0x1;
        uStack_60 = 0x490573;
        (**(code **)*local_24)();
      }
    }
    ppiStack_5c = (int **)local_2c;
    uStack_60 = 0x49057f;
    (**(code **)(*local_34[0] + 0x54))();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

