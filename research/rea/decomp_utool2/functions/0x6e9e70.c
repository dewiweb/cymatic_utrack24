// rea decompile_all
// name: FUN_006e9e70
// address: 0x6e9e70
// body: available
// range: 0x6e9e70-0x6e9f8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e9e70(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
  byte bVar5;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  uint uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728e4d;
  local_10 = ExceptionList;
  uStack_28 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  bVar5 = (byte)param_1;
  if ((*(byte *)(in_ECX + 0x68) >> 1 & 1) == bVar5) {
    return;
  }
  uStack_30 = 0x6e9eb5;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)FUN_0040de70();
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    puVar3[1] = puVar3[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  *(byte *)(in_ECX + 0x68) =
       *(byte *)(in_ECX + 0x68) ^ (bVar5 * '\x02' ^ *(byte *)(in_ECX + 0x68)) & 2;
  if (bVar5 == 0) {
    iStack_2c = 0x6e9ef4;
    FUN_006ceba0();
  }
  else {
    FUN_006e6400(auStack_38);
    FUN_006ce9f0(1);
  }
  iStack_2c = 0x6e9ef9;
  FUN_006ccc80();
  if (bVar5 == 0) {
    iStack_2c = 0x6e9f04;
    FUN_0048d8f0();
    if (DAT_00c8a678 != in_ECX) {
      iStack_2c = DAT_00c8a678;
      uStack_30 = 0x6e9f15;
      cVar2 = FUN_006d0280();
      if (cVar2 == '\0') goto LAB_006e9f32;
    }
    if (*(int *)(in_ECX + 0xc) == 0) {
      iStack_2c = 0x6e9f32;
      FUN_006cc310();
    }
    else {
      iStack_2c = 1;
      uStack_30 = 2;
      uStack_34 = 0x6e9f29;
      FUN_006cc500();
    }
  }
LAB_006e9f32:
  if (puVar3 != (undefined4 *)0x0) {
    if (puVar3[2] != 0) {
      iStack_2c = 0x6e9f43;
      FUN_006cfe10();
      if ((puVar3[2] != 0) && ((*(byte *)(in_ECX + 0x68) & 1) != 0)) {
        iStack_2c = 0x6e9f56;
        piVar4 = (int *)FUN_006d1d80();
        if (piVar4 != (int *)0x0) {
          iStack_2c = param_1;
          uStack_30 = 0x6e9f62;
          (**(code **)(*piVar4 + 8))();
          iStack_2c = 0x6e9f69;
          FUN_006cedf0();
        }
      }
    }
    LOCK();
    piVar4 = puVar3 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      iStack_2c = 1;
      uStack_30 = 0x6e9f7c;
      (**(code **)*puVar3)();
    }
  }
  ExceptionList = local_10;
  return;
}

