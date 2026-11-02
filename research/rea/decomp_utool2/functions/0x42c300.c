// rea decompile_all
// name: FUN_0042c300
// address: 0x42c300
// body: available
// range: 0x42c300-0x42c4b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042c300(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *in_ECX;
  uint uVar5;
  undefined4 local_44;
  undefined4 local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  int local_30;
  int *local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  ushort local_1c;
  ushort local_1a;
  undefined2 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar3 = DAT_00c8a5f4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fdc88;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar2 = in_ECX + 0x10;
  local_2c = param_1;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  *piVar2 = 0;
  *in_ECX = 0;
  in_ECX[2] = 0;
  if ((pcVar3 != (code *)0x0) && (iVar4 = (*pcVar3)(in_ECX + 6,in_ECX + 0xf,0,local_14), -1 < iVar4)
     ) {
    local_1a = *(ushort *)(in_ECX + 3);
    local_24 = in_ECX[10];
    local_1c = (local_1a >> 3) * 2;
    local_20 = (uint)local_1c * local_24;
    uStack_38 = 0;
    uVar5 = ((int)in_ECX[3] >> 2) * in_ECX[0xb] & 0xfffffff0;
    local_28 = 0x20001;
    in_ECX[1] = uVar5;
    iStack_3c = uVar5 << 4;
    local_18 = 0;
    local_40 = 0;
    puStack_34 = &local_28;
    in_ECX[2] = iStack_3c;
    local_44 = 0x14;
    iVar4 = (**(code **)(*(int *)in_ECX[0xf] + 0xc))((int *)in_ECX[0xf],&local_44,piVar2,0);
    if ((-1 < iVar4) &&
       (iVar4 = (**(code **)(*(int *)*piVar2 + 0x24))((int *)*piVar2,1), -1 < iVar4)) {
      *local_2c = (int)&DAT_00bfe12c;
      goto LAB_0042c49b;
    }
  }
  FUN_005c9400();
  local_8 = 0;
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(piVar1);
    (**(code **)(*(int *)*piVar2 + 8))((int *)*piVar2);
    *piVar2 = 0;
  }
  piVar2 = (int *)in_ECX[0xf];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[0xf] = 0;
  }
  piVar2 = (int *)in_ECX[0xe];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[0xe] = 0;
  }
  piVar2 = (int *)(local_30 + -8);
  *local_2c = local_30;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar2);
      }
    }
  }
LAB_0042c49b:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

