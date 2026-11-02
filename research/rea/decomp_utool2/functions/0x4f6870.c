// rea decompile_all
// name: FUN_004f6870
// address: 0x4f6870
// body: available
// range: 0x4f6870-0x4f6a4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f6870(int param_1,undefined1 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 *puStack_70;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40;
  undefined3 uStack_3f;
  undefined4 *local_3c;
  char local_35;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070631f;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0x21) = param_2;
  iVar1 = 0;
  in_ECX[0x20] = param_1;
  local_35 = '\x01';
  _local_40 = CONCAT31(uStack_3f,1);
  iVar2 = *(int *)(in_ECX[0x1f] + 0x224);
  local_3c = param_3;
  if (0 < iVar2) {
    piVar3 = *(int **)(in_ECX[0x1f] + 0x21c);
    do {
      if (param_1 < *piVar3) {
        local_44 = (uint)((byte)iVar1 & 1);
        goto LAB_004f68e0;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < iVar2);
  }
  local_44 = 0;
LAB_004f68e0:
  (**(code **)(*in_ECX + 0xb4))();
  if ((*(char *)*param_3 == '\0') && (local_35 != '\0')) {
    if (param_1 + 1 < 0) {
      iVar2 = FUN_006104a0();
      *(undefined1 *)(iVar2 + -1) = 0x2d;
    }
    else {
      FUN_006104a0();
    }
    puStack_70 = (undefined4 *)0x4f6945;
    FUN_004557e0();
    local_8 = 0;
    puStack_70 = (undefined4 *)0x4f6960;
    FUN_006e54f0();
    local_8 = 0xffffffff;
    piVar3 = local_3c + -2;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        puStack_70 = (undefined4 *)0x4f6988;
        FID_conflict__free(piVar3);
      }
    }
  }
  else {
    puStack_70 = (undefined4 *)0x4f699f;
    FUN_006e54f0();
  }
  puStack_70 = (undefined4 *)0x4f69a9;
  (**(code **)(in_ECX[0x22] + 0x28))();
  in_ECX[0x5d] = local_44;
  FUN_006e6400(&uStack_7c);
  FUN_006ce9f0(1);
  puStack_70 = &local_48;
  local_48 = DAT_00c7ebc0;
  iStack_74 = param_1;
  iStack_78 = 0x4f69de;
  (**(code **)(*(int *)in_ECX[0x1f] + 0xb0))();
  uStack_7c = 0x1006501;
  iStack_78 = local_48;
  FUN_006e6170();
  if (*(code **)(*in_ECX + 0x84) == FUN_004f66c0) {
    iStack_78 = in_ECX[7];
    uStack_7c = 0x4f6a0f;
    uStack_7c = (**(code **)(*(int *)in_ECX[0x1f] + 0xb4))();
    FUN_006e9790(0,0);
    iStack_78 = in_ECX[0x28];
    uStack_7c = 0x4f6a2b;
    (**(code **)(*in_ECX + 0xb0))();
  }
  else {
    iStack_78 = 0x4f6a31;
    (**(code **)(*in_ECX + 0x84))();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

