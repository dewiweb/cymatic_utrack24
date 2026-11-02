// rea decompile_all
// name: FUN_005675d0
// address: 0x5675d0
// body: available
// range: 0x5675d0-0x567903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005675d0(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined1 local_c0 [12];
  undefined1 local_b4 [16];
  undefined1 local_a4 [19];
  undefined1 local_91;
  uint local_90;
  undefined1 local_8c [19];
  undefined1 local_79;
  uint local_78;
  char local_71;
  undefined1 local_70 [92];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4578;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0x2c))(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  uVar2 = FUN_00558f30(1);
  uVar3 = FUN_00558f30(1);
  local_14 = (uVar2 & 0xffff) + (uVar3 & 0xffff);
  if (local_14 != 0) {
    FUN_00512300();
    local_8 = 0;
    iVar4 = FUN_0052f3a0(local_14);
    if (iVar4 == 0) {
      local_71 = '\0';
      for (local_78 = 0; local_78 < *(ushort *)(in_ECX + 0x16); local_78 = local_78 + 1) {
        FUN_00559900(local_8c,local_78);
        local_79 = 0;
        cVar1 = FUN_00503fe0();
        if ((cVar1 == '\0') &&
           ((cVar1 = FUN_00503830(local_8c,param_1), cVar1 != '\0' ||
            ((cVar1 = FUN_005039c0(), cVar1 != '\0' &&
             (cVar1 = FUN_00559560(local_78,&local_79), cVar1 != '\0')))))) {
          FUN_0052f410(local_8c);
          local_71 = '\x01';
        }
      }
      for (local_90 = 0; local_90 < *(ushort *)(in_ECX + 0x1b); local_90 = local_90 + 1) {
        FUN_00559900(local_a4,local_90);
        local_91 = 0;
        cVar1 = FUN_00503830(local_a4,param_1);
        if ((cVar1 != '\0') ||
           ((cVar1 = FUN_005039c0(), cVar1 != '\0' &&
            (cVar1 = FUN_00559560(local_90,&local_91), cVar1 != '\0')))) {
          FUN_0052f410(local_a4);
          local_71 = '\x01';
        }
      }
      if (local_71 != '\0') {
        iVar4 = in_ECX[0xb];
        uVar2 = (uint)((in_ECX[0x1c] & 0x2000000U) == 0);
        uVar5 = FUN_00568670(local_b4);
        FUN_005a7430(iVar4,local_70,uVar5,uVar2);
      }
    }
    else {
      uVar2 = (uint)*(ushort *)((int)in_ECX + 0xfa);
      uVar5 = (**(code **)(*(int *)(in_ECX[0x1d] + 0x28 +
                                   *(int *)(*(int *)(in_ECX[0x1d] + 0x28) + 0xc)) + 0x98))
                        (local_c0,uVar2);
      FUN_00528280(0,uVar5,uVar2);
    }
    Sleep(2);
    FUN_00560e50();
    local_8 = 0xffffffff;
    FUN_005123f0();
  }
  ExceptionList = local_10;
  return;
}

