// rea decompile_all
// name: FUN_006a0be0
// address: 0x6a0be0
// body: available
// range: 0x6a0be0-0x6a0d72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a0be0(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int in_ECX;
  undefined **ppuVar5;
  uint uVar6;
  bool bVar7;
  void *local_24 [3];
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00722be6;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((*(int *)(in_ECX + 0x18) != 0) && ((*(byte *)(param_2 + 1) & 0x20) == 0)) &&
     (uVar6 = 0, 0 < *(int *)(in_ECX + 0x24))) {
    bVar7 = *(int *)(in_ECX + 0x24) != 0;
    while( true ) {
      if (bVar7) {
        ppuVar5 = (undefined **)(*(int *)(in_ECX + 0x1c) + uVar6 * 4);
      }
      else {
        ppuVar5 = &PTR_DAT_00c7ed68;
      }
      (**(code **)(**(int **)(in_ECX + 0x18) + 0xc))(local_24,uVar6,ppuVar5,uVar4);
      local_8 = 0;
      cVar3 = FUN_006a0070(*param_2);
      if (cVar3 != '\0') break;
      local_8 = 0xffffffff;
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
      FUN_004b00e0();
      FID_conflict__free(local_24[0]);
      uVar6 = uVar6 + 1;
      bVar7 = uVar6 < *(uint *)(in_ECX + 0x24);
      if ((int)*(uint *)(in_ECX + 0x24) <= (int)uVar6) {
        ExceptionList = local_10;
        return;
      }
    }
    if (*(uint *)(in_ECX + 0x3c) != uVar6) {
      FUN_006a16e0(*(uint *)(in_ECX + 0x3c));
      *(uint *)(in_ECX + 0x3c) = uVar6;
      FUN_006a16e0(uVar6);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
    if (*(int *)(in_ECX + 0xc) == 0) {
      *(undefined4 *)(in_ECX + 8) = 200;
      *(undefined4 *)(in_ECX + 0xc) = 200;
      local_8 = CONCAT31(local_8._1_3_,1);
      if (DAT_00c8a668 == 0) {
        operator_new(0x54);
        DAT_00c8a668 = FUN_004635f0();
      }
      FUN_00463c00(in_ECX + 4);
    }
    else {
      FUN_00463b90();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
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
    FUN_004b00e0();
    FID_conflict__free(local_24[0]);
  }
  ExceptionList = local_10;
  return;
}

